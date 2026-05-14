// Fill out your copyright notice in the Description page of Project Settings.


#include "VehicleDynamicsComponent.h"

// Sets default values for this component's properties
UVehicleDynamicsComponent::UVehicleDynamicsComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UVehicleDynamicsComponent::BeginPlay()
{
	Super::BeginPlay();
    BeginSetting();
	// ...
	
}


// Called every frame
void UVehicleDynamicsComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    TickVehicle(DeltaTime);
	// ...
}

void UVehicleDynamicsComponent::BeginSetting()
{
    //기존 파라미터 배열 초기화
    WheelOffset.Empty();
    WheelBonesArray.Empty();

    AActor* Owner = GetOwner();
    if (!Owner)
    {
        UE_LOG(LogTemp, Error, TEXT("VehicleDynamicComponent : No Owner found"));
        return;
    }

    // 소유 액터의 SkeletalMeshComponent 찾아오기
    OwnerSkeletalMeshComp = Owner->FindComponentByClass<USkeletalMeshComponent>();
    if (!OwnerSkeletalMeshComp)
    {
        UE_LOG(LogTemp, Error, TEXT("VehicleDynamicComponent : SkeletalMesh not assigned"));
        return;
    }
    //Skeletal Mesh를 찾았다면 바퀴 Bone 가져오기
    const int32 BoneCount = OwnerSkeletalMeshComp->GetNumBones();

    // Bone을 순회하며 값 저장
    for (int32 i = 0; i < BoneCount; ++i)
    {
        FName BoneName = OwnerSkeletalMeshComp->GetBoneName(i);
        FString S = BoneName.ToString();

        // 1) wheel 포함
        if (!S.Contains("wheel"))
            continue;

        // 2) 정확히 root_jnt로 끝나는지
        if (!S.EndsWith("root_jnt"))
            continue;

        // 3) 불필요한 키워드 제거
        if (S.Contains("hidr") || S.Contains("rod") || S.Contains("chasing"))
            continue;

        UE_LOG(LogTemp, Warning, TEXT("Track Bone Found: %s"), *S);

        // 바퀴 본 이름 만들기
        FString WheelNameString = S.Replace(TEXT("_root"), TEXT("")); // S가 이 시점에선 트랙, 대체된 문자열은 바퀴가 됨
        FString TrackNameString = S;

        FName WheelBoneName(*WheelNameString);
        FName TrackBoneName(*TrackNameString);

        // 바퀴 본이 실제로 존재하는지 확인
        int32 WheelBoneIndex = OwnerSkeletalMeshComp->GetBoneIndex(WheelBoneName);

        if (WheelBoneIndex != INDEX_NONE)
        {
            UE_LOG(LogTemp, Warning, TEXT("Matched Wheel Bone: %s"), *WheelNameString);

            // 본이 존재한다면 파라미터 저장
            WheelBonesArray.Add(WheelBoneName);
            TrackBonesArray.Add(TrackBoneName);

            FVector WheelData = OwnerSkeletalMeshComp->SkeletalMesh->GetRefSkeleton().GetRefBonePose()[i].GetLocation();
            WheelOffset.Add(WheelData);

            //배열의 개수에 맞춰 나머지 연산배열 길이 맞추기
            WheelHeight.Add(0);
            SuspVelocity.Add(0);
            bIsGrounded.Add(0);
            FinalWheelsLoc.Add(FVector::ZeroVector);
            FinalGroundedLoc.Add(FVector::ZeroVector);
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Wheel Bone NOT FOUND for %s"), *S);
        }
    }
}

void UVehicleDynamicsComponent::TickVehicle(float DeltaTime)
{
    // 1. 속도 연산 및 이동 적용
    CalcVelocity(DeltaTime);

    // 2. 바퀴별 순차 처리
    for (int32 i = 0; i < WheelOffset.Num(); i++)
    {
        SphereTraceGround(i);     // 접지 감지 및 바퀴위치 갱신
        CalcSuspensionForce(i);   // 스프링-댐퍼
    }

    // 3. 차체 자세 계산 및 적용
    //CalcBodyPosture();
}

void UVehicleDynamicsComponent::CalcSuspensionForce(int WheelIdx)
{
    if (!WheelHeight.IsValidIndex(WheelIdx))
        return;

    // 현재 서스펜션 압축량 = 휴지 길이 - 현재 바퀴 높이
    // 양수 : 압축 (바퀴가 위로 올라옴)
    // 음수 : 인장 (바퀴가 아래로 늘어남)
    float Displacement = RestLength - WheelHeight[WheelIdx];

    // 서스펜션 변위 범위 클램프
    Displacement = FMath::Clamp(Displacement,
        -(SpringMaxExtension - RestLength),  // 최대 인장
        SpringMinExtension                 // 최대 압축
    );

    // 스프링 힘 : F_spring = k * Δy
    float SpringForce = SpringStiffness * Displacement;

    // 댐퍼 힘 : F_damp = c * vy (이전 프레임과의 높이 변화율)
    float DampForce = DampingCoeff * SuspVelocity[WheelIdx];

    // 최종 서스펜션 힘
    float TotalForce = SpringForce - DampForce;

    // 다음 프레임을 위해 서스펜션 속도 갱신
    // (현재는 WheelHeight 변화를 직접 SuspVelocity로 반영)
    // TickVehicle에서 DeltaTime을 넘겨줘야 정확하지만
    // 우선 변위 기반으로 근사
    SuspVelocity[WheelIdx] = Displacement;

    // 접지 중일 때만 힘 적용
    if (bIsGrounded[WheelIdx])
    {
        // 바퀴 높이에 힘 반영 (질량으로 나눠 가속도 변환)
        // TotalMass는 전체 질량, 바퀴 1개당 균등 분배
        float WheelShare = TotalMass / WheelOffset.Num();
        float HeightDelta = TotalForce / WheelShare;
        WheelHeight[WheelIdx] += HeightDelta;

        // 범위 클램프
        WheelHeight[WheelIdx] = FMath::Clamp(
            WheelHeight[WheelIdx],
            SpringMinExtension,
            SpringMaxExtension
        );
    }
}

void UVehicleDynamicsComponent::CalcBodyPosture()
{
    int32 WheelCount = WheelOffset.Num();
    if (WheelCount < 2)
        return;

    // lf (인덱스 0~5) / rt (인덱스 6~11) 평균 높이 계산
    int32 HalfCount = WheelCount / 2;

    float LeftHeightSum = 0.f;
    float RightHeightSum = 0.f;
    float FrontHeightSum = 0.f; // 앞쪽 절반
    float RearHeightSum = 0.f; // 뒤쪽 절반

}

void UVehicleDynamicsComponent::SphereTraceGround(int WheelIdx)
{
    if (!WheelOffset.IsValidIndex(WheelIdx))
    {
        UE_LOG(LogTemp, Error, TEXT("SphereTraceGround : Invalid WheelIdx %d"), WheelIdx);
        return;
    }
    // 로컬 → 월드 변환
    FTransform CompTransform = OwnerSkeletalMeshComp->GetComponentTransform();
    FVector WorldWheelPos = CompTransform.TransformPosition(WheelOffset[WheelIdx]);

    // 바퀴 중심에서 아래 방향으로 서스펜션 최대 길이만큼 트레이스
    FVector SweepStart = WorldWheelPos;
    FVector SweepEnd = SweepStart - FVector(0.f, 0.f, SpringMaxExtension);

    FHitResult Hit;
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(GetOwner());

    const FCollisionShape Sphere = FCollisionShape::MakeSphere(WheelRadius);
    const bool bHit = GetWorld()->SweepSingleByChannel(
        Hit, SweepStart, SweepEnd,
        FQuat::Identity, ECC_Visibility, Sphere, Params
    );

    // 결과 저장
    bIsGrounded[WheelIdx] = bHit;
    DrawDebugLine(GetWorld(), SweepStart, SweepEnd, FColor::Yellow, false, 0.05f, 1, 5.0f);

    if (bHit)
    {
        // 바퀴 중심 ~ 접지점 수직 거리 (서스펜션 압축량 계산의 기준)
        WheelHeight[WheelIdx] = WorldWheelPos.Z - Hit.ImpactPoint.Z;
        FinalWheelsLoc[WheelIdx] = FVector(WheelOffset[WheelIdx].X, WheelOffset[WheelIdx].Y, Hit.ImpactPoint.Z + WheelRadius - WheelHeight[WheelIdx]); // 최종 반환 바퀴 위치
        FinalGroundedLoc[WheelIdx] = FVector(WheelOffset[WheelIdx].X, WheelOffset[WheelIdx].Y, Hit.ImpactPoint.Z- WheelHeight[WheelIdx]); // 최종 반환 접지 위치
        
        DrawDebugSphere(GetWorld(), Hit.ImpactPoint, 5.0f, 12, FColor::Red, false, 0.1f); // 휠 위치 디버그 드로우
        DrawDebugSphere(GetWorld(), FVector(Hit.ImpactPoint.X, Hit.ImpactPoint.Y, Hit.ImpactPoint.Z + WheelRadius), WheelRadius, 12, FColor::Green, false, 0.1f); // 휠 위치 디버그 드로우

    }
    else
    {
        // 미접지 시 서스펜션 최대로 늘린 상태
        WheelHeight[WheelIdx] = SpringMaxExtension;
        FinalWheelsLoc[WheelIdx] = FVector(WheelOffset[WheelIdx].X, WheelOffset[WheelIdx].Y, Hit.ImpactPoint.Z + WheelRadius - WheelHeight[WheelIdx]); // 최종 반환 바퀴 위치
        FinalGroundedLoc[WheelIdx] = FVector(WheelOffset[WheelIdx].X, WheelOffset[WheelIdx].Y, Hit.ImpactPoint.Z - WheelHeight[WheelIdx]); // 최종 반환 접지 위치
    }
}

void UVehicleDynamicsComponent::CalcVelocity(float DeltaTime)
{
    // 입력 축 기반 가속도 계산
    float TargetAccel = ThrottleAxis * AccelRate;

    // 현재 속력 기반 항력 계산 (속력에 비례)
    float Drag = CurrentSpeed * DragCoeff;

    // 제동 입력 처리
    float BrakeForce = 0.f;
    if (FMath::Abs(ThrottleAxis) < 0.01f) // 입력 없을 때 자연 감속
    {
        BrakeForce = CurrentSpeed * BrakeRate;
    }

    // 가속도 최종값
    float Acceleration = TargetAccel - Drag - BrakeForce;

    // 속도 적분 (Euler)
    FVector ForwardDir = OwnerSkeletalMeshComp->GetForwardVector();
    CurrentVelocity += ForwardDir * Acceleration * DeltaTime;

    // 최대 속도 클램프
    CurrentSpeed = CurrentVelocity.Size();
    if (CurrentSpeed > MaxSpeed)
    {
        CurrentVelocity = CurrentVelocity.GetSafeNormal() * MaxSpeed;
        CurrentSpeed = MaxSpeed;
    }

    // 속력이 매우 낮으면 완전 정지
    if (CurrentSpeed < 1.f && FMath::Abs(ThrottleAxis) < 0.01f)
    {
        CurrentVelocity = FVector::ZeroVector;
        CurrentSpeed = 0.f;
    }

    // 실제 액터 이동 적용
    AActor* Owner = GetOwner();
    if (Owner)
    {
        Owner->AddActorWorldOffset(CurrentVelocity * DeltaTime, true);
    }
}
