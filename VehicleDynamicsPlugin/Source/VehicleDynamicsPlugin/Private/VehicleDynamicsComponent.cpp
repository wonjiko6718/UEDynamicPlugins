// Fill out your copyright notice in the Description page of Project Settings.


#include "VehicleDynamicsComponent.h"

// Sets default values for this component's properties
UVehicleDynamicsComponent::UVehicleDynamicsComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}

void UVehicleDynamicsComponent::BeginPlay()
{
	Super::BeginPlay();
    BeginSetting();
	
}

void UVehicleDynamicsComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    TickVehicle(DeltaTime);
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
            GroundHitPoint.Add(FVector::ZeroVector);
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Wheel Bone NOT FOUND for %s"), *S);
        }
    }
    BodyBaseHeight = BodyBaseHeightCoeff + (WheelRadius * 2) + SpringMaxExtension; // 차체 기본 높이 = 휠 반경 * 2 + 서스펜션 최대확장 길이
    RestLength = SpringMinExtension + (SpringMaxExtension - SpringMinExtension) * 0.75f; // 스프링 유후 길이는 최대 확장 길이와 최소 길이의 75%지점 값으로 설정
}

void UVehicleDynamicsComponent::TickVehicle(float DeltaTime)
{
    CalcVelocity(DeltaTime); // 속도 연산 (아직 미구현)
    SuspensionForceSum = 0.f; // 서스펜션 상승힘 합계 초기화
    for (int32 i = 0; i < WheelOffset.Num(); i++) // 바퀴 처리
    {
        SphereTraceGround(i); // 접지 감지 및 바퀴위치 갱신
        CalcSuspensionForce(i, DeltaTime);   // 스프링-댐퍼
    }
    ApplyGravity(DeltaTime); // 중력 및 차체 연산
    ApplyPosture(); //최종 적용 변수를 한 번에 업데이트
}

void UVehicleDynamicsComponent::ApplyGravity(float DeltaTime)
{
    AActor* Owner = GetOwner();
    if (!Owner) return;

    int32 GroundedCount = 0;
    for (int32 i = 0; i < bIsGrounded.Num(); i++)
    {
        if (bIsGrounded[i]) GroundedCount++;
    }

    FVector CurrentLoc = Owner->GetActorLocation();
    FVector OldLocation = CurrentLoc;

    float GravityForce = TotalMass * GravityForceCoeff;
    float NetForce = SuspensionForceSum - GravityForce;

    float Acceleration = NetForce / TotalMass;
    GravityVelocity += Acceleration * DeltaTime;
    GravityVelocity *= FMath::Pow(1.f - EnergyLossRate, DeltaTime); // 에너지 손실률 적용

    CurrentLoc.Z += GravityVelocity * DeltaTime;
    Owner->SetActorLocation(CurrentLoc, false);
    if (Owner->GetActorLocation().Z == OldLocation.Z)
    {
        GravityVelocity = 0.f;
    }
}

void UVehicleDynamicsComponent::CalcSuspensionForce(int WheelIdx, float DeltaTime)
{
    if (!WheelHeight.IsValidIndex(WheelIdx))
        return;

    if (!bIsGrounded[WheelIdx])
    {
        SuspVelocity[WheelIdx] = 0.f;
        return;
    }

    float Displacement = RestLength - WheelHeight[WheelIdx]; // 압축량
    //Displacement = FMath::Clamp(Displacement, -(SpringMaxExtension - RestLength), RestLength - SpringMinExtension);
    float SpringForce = SpringStiffness * Displacement; // 상승힘

    float DampForce = DampingCoeff * GravityVelocity;
    float TotalForce = SpringForce - DampForce; // 총 상승힘

    SuspensionForceSum += TotalForce; // 누적 상승힘 (차체 위치 계산용)
    SuspVelocity[WheelIdx] = Displacement / DeltaTime; // 속도 저장
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

    // 바퀴 중심에서 아래 방향으로 서스펜션 최대 길이만큼 트레이스, 기본 스켈레탈 위치는 거의 서스펜션 최대 길이이므로 바퀴 반경만큼 제외한 지점에서 시작
    FVector SweepStart = WorldWheelPos + FVector(0.f, 0.f, WheelRadius);
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
        float RawHeight = WorldWheelPos.Z - Hit.ImpactPoint.Z;
        // 이전 값과 보간해서 급격한 변화 완화
        WheelHeight[WheelIdx] = FMath::FInterpTo(WheelHeight[WheelIdx], RawHeight, GetWorld()->GetDeltaSeconds(), WheelSmoothing);
        GroundHitPoint[WheelIdx] = Hit.ImpactPoint;
        //WheelHeight[WheelIdx] = WorldWheelPos.Z - Hit.ImpactPoint.Z;
        //GroundHitPoint[WheelIdx] = Hit.ImpactPoint;

        if (bDrawHitPoints)
        {
            DrawDebugSphere(GetWorld(), Hit.ImpactPoint, 5.0f, 12, FColor::Red, false, 0.1f); // 트랙 위치 디버그 드로우
            DrawDebugSphere(GetWorld(), FVector(Hit.ImpactPoint.X, Hit.ImpactPoint.Y, Hit.ImpactPoint.Z + WheelRadius), WheelRadius, 12, FColor::Green, false, 0.1f); // 휠 위치 디버그 드로우
        }
        if (bDrawFinalPoints)
        {
            DrawDebugSphere(GetWorld(), FinalGroundedLoc[WheelIdx], 5.0f, 12, FColor::Red, false, 0.1f); // 트랙 위치 디버그 드로우
            DrawDebugSphere(GetWorld(), FinalWheelsLoc[WheelIdx], WheelRadius, 12, FColor::Green, false, 0.1f); // 휠 위치 디버그 드로우
        }
    }
    else
    {
        // 미접지 시 서스펜션 최대로 늘린 상태
        WheelHeight[WheelIdx] = SpringMaxExtension;
        GroundHitPoint[WheelIdx] = SweepEnd;
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

void UVehicleDynamicsComponent::ApplyPosture()
{
    float RollMoment = 0.f;
    float PitchMoment = 0.f;
    float TotalForce = 0.f;

    for (int32 i = 0; i < WheelOffset.Num(); i++)
    {
        if (!bIsGrounded[i]) continue;

        float Displacement = RestLength - WheelHeight[i];
        float WheelForce = SpringStiffness * Displacement;

        // 무게중심에서 바퀴까지의 거리
        float OffsetX = WheelOffset[i].X - CenterOfMass.X; // 전후 → Pitch
        float OffsetY = WheelOffset[i].Y - CenterOfMass.Y; // 좌우 → Roll

        PitchMoment += WheelForce * OffsetX;
        RollMoment += WheelForce * OffsetY;
        TotalForce += WheelForce;
    }

    if (TotalForce == 0.f) return;

    // 모멘트 → 각도 변환
    float NormalizedPitch = PitchMoment / (TotalForce * PostureScale);
    float NormalizedRoll = RollMoment / (TotalForce * PostureScale);

    float TargetPitch = FMath::RadiansToDegrees(FMath::Atan(NormalizedPitch));
    float TargetRoll = FMath::RadiansToDegrees(FMath::Atan(NormalizedRoll));

    // 보간으로 부드럽게
    float DeltaTime = GetWorld()->GetDeltaSeconds();
    FinalBodyRot.Pitch = FMath::FInterpTo(FinalBodyRot.Pitch, TargetPitch, DeltaTime, BodySmoothing);
    FinalBodyRot.Roll = FMath::FInterpTo(FinalBodyRot.Roll, -TargetRoll, DeltaTime, BodySmoothing);

    AActor* Owner = GetOwner();
    if (Owner)
    {
        FRotator CurrentRot = Owner->GetActorRotation();
        FRotator TargetRot = FRotator(FinalBodyRot.Pitch, CurrentRot.Yaw, FinalBodyRot.Roll);
        Owner->SetActorRotation(TargetRot);
    }

    FTransform CompTransform = OwnerSkeletalMeshComp->GetComponentTransform();
    for (int32 i = 0; i < WheelOffset.Num(); i++)
    {
        FVector LocalGroundedLoc = CompTransform.InverseTransformPosition(GroundHitPoint[i]);
        FVector LocalWheelsLoc = CompTransform.InverseTransformPosition(GroundHitPoint[i] + FVector(0.f, 0.f, WheelRadius));

        FinalGroundedLoc[i] = LocalGroundedLoc;
        FinalWheelsLoc[i] = LocalWheelsLoc;
    }

}
