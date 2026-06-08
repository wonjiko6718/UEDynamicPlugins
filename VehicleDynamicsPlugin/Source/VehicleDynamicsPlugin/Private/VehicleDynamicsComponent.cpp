// Fill out your copyright notice in the Description page of Project Settings.


#include "VehicleDynamicsComponent.h"
#include "Net/UnrealNetwork.h"

// Sets default values for this component's properties
UVehicleDynamicsComponent::UVehicleDynamicsComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
    SetIsReplicatedByDefault(true);
}

void UVehicleDynamicsComponent::BeginPlay()
{
	Super::BeginPlay();
    BeginSetting();
	
}

void UVehicleDynamicsComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    if (GetOwner()->HasAuthority()) // 서버에서만 실행
    {
        TickVehicle(DeltaTime);
    }
}

void UVehicleDynamicsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const // 서버 복제 변수들
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(UVehicleDynamicsComponent, FinalBodyLoc);
    DOREPLIFETIME(UVehicleDynamicsComponent, FinalBodyRot);
    DOREPLIFETIME(UVehicleDynamicsComponent, FinalWheelsLoc);
    DOREPLIFETIME(UVehicleDynamicsComponent, FinalGroundedLoc);
    DOREPLIFETIME(UVehicleDynamicsComponent, ThrottleAxis);
    DOREPLIFETIME(UVehicleDynamicsComponent, SteeringAxis);
    DOREPLIFETIME(UVehicleDynamicsComponent, SelectedGearNum);
}

void UVehicleDynamicsComponent::BeginSetting()
{
    //기존 파라미터 배열 초기화
    WheelBaseOffset.Empty();
    WheelBonesArray.Empty();

    AActor* Owner = GetOwner();
    BodyBox = GetOwner()->FindComponentByClass<UBoxComponent>();
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
    // 소유 액터의 Floating Pawn Movement 받아오기
    OwnerPawnMovement = Owner->FindComponentByClass<UFloatingPawnMovement>();
    if (!OwnerPawnMovement)
    {
        UE_LOG(LogTemp, Error, TEXT("VehicleDynamicComponent : Floating Pawn Movement not assigned"));
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
            WheelBaseOffset.Add(WheelData);

            //배열의 개수에 맞춰 나머지 연산배열 길이 맞추기
            SuspensionCompression.Add(0); // 서스펜션 압축량
            PrevSuspensionCompression.Add(0); // 서스펜션 이전 프레임 압축량
            bWheelGrounded.Add(0); // 휠 접지 여부
            FinalWheelsLoc.Add(FVector::ZeroVector); // 최종 휠 위치
            FinalGroundedLoc.Add(FVector::ZeroVector); // 최종 접지 위치(트랙 애니메이션 사용)
            GroundHitPoint.Add(FVector::ZeroVector); // 최종 접지 파악 위치
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("Wheel Bone NOT FOUND for %s"), *S);
        }
    }
    // 첫 프레임 트레이스로 초기 압축량 미리 계산 - 값 튐 방지
    for (int i = 0; i < WheelBonesArray.Num(); i++)
    {
        SphereTraceGround(i);
        PrevSuspensionCompression[i] = SuspensionCompression[i]; // 초기값 맞춰줌
    }
}

void UVehicleDynamicsComponent::TickVehicle(float DeltaTime)
{
    FinalForce = FVector::ZeroVector; //최종 힘 초기화

    for (int i = 0; i < WheelBonesArray.Num(); i++) SphereTraceGround(i);
    CalcGravityForce(DeltaTime);
    for (int i = 0; i < WheelBonesArray.Num(); i++) CalcSuspensionForce(i, DeltaTime);

    CalcVelocity(DeltaTime);
    ApplyFinalTransform(DeltaTime);
}

void UVehicleDynamicsComponent::SelectGear(int32 SelectNum)
{
    SelectedGearNum = SelectNum;
    if (GearMaxSpeedArray.IsValidIndex(SelectedGearNum))
    {
        BaseMaxSpeed = GearMaxSpeedArray[SelectedGearNum]; // 기준 최대속도 - 최종 적용은 CalVelocity 에서
        OwnerPawnMovement->MaxSpeed = BaseMaxSpeed; // 최대속도는 우선 적용(이후 삭제 가능)
    }
    if (GearAccelerationArray.IsValidIndex(SelectedGearNum))
    {
        BaseAcceleration = GearAccelerationArray[SelectedGearNum]; // 기준 가속도 - 최종 적용은 CalVelocity 에서
    }
}
void UVehicleDynamicsComponent::CalcGravityForce(float DeltaTime)
{
    FVector Gravityforce = FVector::ZeroVector;

    Gravityforce = FVector(0.0f, 0.0f, TotalMass* GravityForceCoeff);
    FinalForce += Gravityforce; // 최종 힘에 중력 작용 합 적용
}

void UVehicleDynamicsComponent::CalcSuspensionForce(int WheelIdx, float DeltaTime)
{
    if (!bWheelGrounded[WheelIdx]){ return; } // 미접지 시 서스펜션 힘 연산하지 않음

    float Compression = SuspensionCompression[WheelIdx]; // 1. 압축량을 가져와
    float SpringForce = SpringStiffness * Compression; // 2. 스프링의 상승힘을 구해놓는다.

    FVector WheelLocalPos = WheelBaseOffset[WheelIdx];

    // 차체 Up 방향 기준으로 각 바퀴에서 작용하는 스프링 힘을 구하기 위해 액터의 위치를 저장
    FVector UpDir = GetOwner()->GetActorUpVector();
    FVector RightDir = GetOwner()->GetActorRightVector();
    FVector ForwardDir = GetOwner()->GetActorForwardVector();

    float CompressionVelocity = (Compression - PrevSuspensionCompression[WheelIdx]) / DeltaTime; // 이전 프레임 대비 서스펜션 속도 계산(힘 연산)
    float DamperForce = FMath::Clamp(DamperStiffness * CompressionVelocity, -SpringForce, SpringForce); // 댐퍼 힘을 스프링 힘 이내로 조정

    PrevSuspensionCompression[WheelIdx] = Compression; // 다음 프레임용 저장

    // 연산 결과를 최종 힘에 반영 ========================================================================================
    
    // 기본 상승 힘 (중력에 대응하는 상승 힘)
    //FinalForce += UpDir * SpringForce; // 스프링 상승힘 총합을 더함

    ////서스펜션 댐핑 상승힘 누적
    //FinalForce += UpDir * DamperForce;
    FinalForce += UpDir * (SpringForce + DamperForce);


    UE_LOG(LogTemp, Log, TEXT("Wheel[%d] Grounded: %d | Compression: %.2f | SpringForce: %.1f | DamperForce: %.1f"), WheelIdx, bWheelGrounded[WheelIdx], Compression, SpringForce, DamperForce);
    //// 앞,뒤 거리를 통해 Pitch에 기여하는 힘 구함
    //float PitchContrib = WheelLocalPos.X * SpringForce;
    //FinalForce += ForwardDir * PitchContrib * BodyRotateScale; // 차체 Pitch 힘 추가

    //// 좌,우 거리를 통해 Roll에 기여하는 힘 구함
    //float RollContrib = WheelLocalPos.Y * SpringForce;
    //FinalForce += RightDir * RollContrib * BodyRotateScale; // 차체 Roll힘 추가
}
void UVehicleDynamicsComponent::CalcDragForce(float DeltaTime)
{

}
void UVehicleDynamicsComponent::CalcImpactForce(float DeltaTime)
{

}
void UVehicleDynamicsComponent::SphereTraceGround(int WheelIdx)
{
    if (!WheelBaseOffset.IsValidIndex(WheelIdx))
    {
        UE_LOG(LogTemp, Error, TEXT("SphereTraceGround : Invalid WheelIdx %d"), WheelIdx);
        return;
    }
    // 로컬 → 월드 변환
    FTransform CompTransform = OwnerSkeletalMeshComp->GetComponentTransform();
    FVector WorldWheelPos = CompTransform.TransformPosition(WheelBaseOffset[WheelIdx]);

    FVector DownDir = -GetOwner()->GetActorUpVector();
    FVector ActorUp = GetOwner()->GetActorUpVector();

    // Box 하단 위치 (차량 기울기 반영)
    float BoxHalfHeight = BodyBox->GetScaledBoxExtent().Z;
    FVector BoxBottom = GetOwner()->GetActorLocation() - ActorUp * BoxHalfHeight;

    // X, Y는 바퀴 오프셋 기준, Z는 Box 하단 기준
    FVector AdjustedWheelPos = FVector(WorldWheelPos.X, WorldWheelPos.Y, BoxBottom.Z);

    // 바퀴 중심에서 아래 방향으로 서스펜션 유후 길이만큼 트레이스,(잡아 늘려서 닿지는 않으므로)
    // 기본 스켈레탈 위치는 거의 서스펜션 최대 길이이므로 바퀴 반경만큼 제외한 지점에서 시작
    FVector SweepStart = AdjustedWheelPos;
    FVector SweepEnd = SweepStart + (DownDir * RestLength);

    FHitResult Hit;
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(GetOwner());

    const FCollisionShape Sphere = FCollisionShape::MakeSphere(WheelRadius);
    const bool bHit = GetWorld()->SweepSingleByChannel(Hit, SweepStart, SweepEnd, FQuat::Identity, ECC_Visibility, Sphere, Params);

    // 결과 저장
    bWheelGrounded[WheelIdx] = bHit;
    GroundHitPoint[WheelIdx] = Hit.ImpactPoint;

    if (bDrawTrace)
    {
        DrawDebugLine(GetWorld(), SweepStart, SweepEnd, FColor::Yellow, false, 0.05f, 1, 5.0f); // 서스펜션 체크범위 드로우
    }
    if (bHit)
    {
        GroundHitPoint[WheelIdx] = Hit.ImpactPoint; // 접지 위치 저장
        SuspensionCompression[WheelIdx] = FMath::Max(0.f, RestLength - Hit.Distance);
        // 월드 → 컴포넌트 로컬 변환
        FinalGroundedLoc[WheelIdx] = CompTransform.InverseTransformPosition(Hit.ImpactPoint); // 트랙 저장용 최종 접지 위치
        FinalWheelsLoc[WheelIdx] = CompTransform.InverseTransformPosition(Hit.ImpactPoint) + FVector(0.f,0.f,WheelRadius); // 휠 저장용 최종 위치

        if (bDrawTrace)
        {
            DrawDebugSphere(GetWorld(), Hit.ImpactPoint, 5.0f, 12, FColor::Red, false, 0.1f); // 트랙 위치 디버그 드로우
            DrawDebugSphere(GetWorld(), FVector(Hit.ImpactPoint.X, Hit.ImpactPoint.Y, Hit.ImpactPoint.Z + WheelRadius), WheelRadius, 12, FColor::Green, false, 0.1f); // 휠 위치 디버그 드로우
        }
    }
    else
    {
        GroundHitPoint[WheelIdx] = SweepEnd; // 미접지 시 유후 상태의 위치를 접지 위치로 계산. 접지 유무는 bIsGrounded.에 있으므로 상승힘 연산 무시 가능
        SuspensionCompression[WheelIdx] = 0.f; // 미접지 시 압축 안 함
        FinalWheelsLoc[WheelIdx] = WheelBaseOffset[WheelIdx]; // 휠 저장용 최종 위치
        FinalGroundedLoc[WheelIdx] = WheelBaseOffset[WheelIdx] - FVector(0.f, 0.f, WheelRadius); // 트랙 저장용 최종 위치

    }
}

void UVehicleDynamicsComponent::CalcVelocity(float DeltaTime)
{
    PrevVelocity = CurrentVelocity; // 이전 속도 저장

    FVector Acceleration = FinalForce / TotalMass; // F = ma : 가속도를 구함
    CurrentVelocity += Acceleration * DeltaTime; // 최종 속도 구함

    // 디버그
    UE_LOG(LogTemp, Log, TEXT("FinalForce Z: %.1f | Acceleration Z: %.4f | Velocity Z: %.4f"), FinalForce.Z, Acceleration.Z, CurrentVelocity.Z);

}

void UVehicleDynamicsComponent::ApplyFinalTransform(float DeltaTime)
{
    FVector NewLocation = GetOwner()->GetActorLocation() + CurrentVelocity * DeltaTime;
    GetOwner()->SetActorLocation(NewLocation, true);
    //최종 적용 변수 저장
    FinalBodyLoc = GetOwner()->GetActorLocation();
    FinalBodyRot = GetOwner()->GetActorRotation();

}
