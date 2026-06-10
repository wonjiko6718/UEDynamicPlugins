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
    OwnerPawnMovement->Deactivate();
	
}

void UVehicleDynamicsComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
    UE_LOG(LogTemp, Warning, TEXT("[%s] Tick | Loc: %s"),
        GetOwner()->HasAuthority() ? TEXT("SERVER") : TEXT("CLIENT"),
        *GetOwner()->GetActorLocation().ToString());
    if (GetOwner()->HasAuthority()) // 서버에서만 실행
    {
        TickVehicle(DeltaTime);
    }
    else
    {
        ApplyReplicatedTransform(DeltaTime);
    }
}

void UVehicleDynamicsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const // 서버 복제 변수들
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(UVehicleDynamicsComponent, FinalBodyLoc);
    DOREPLIFETIME(UVehicleDynamicsComponent, FinalBodyRot);
    DOREPLIFETIME(UVehicleDynamicsComponent, FinalWheelsLoc);
    DOREPLIFETIME(UVehicleDynamicsComponent, FinalGroundedLoc);
    DOREPLIFETIME(UVehicleDynamicsComponent, ThrottleInput);
    DOREPLIFETIME(UVehicleDynamicsComponent, SteeringInput);
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

            //휠 연산용 값 저장
            if (WheelData.X > WheelMaxOffsetX) WheelMaxOffsetX = WheelData.X; // 정규화용 바퀴 최대거리 저장
            if (WheelData.X > WheelMaxOffsetY) WheelMaxOffsetY = WheelData.Y; // 정규화용 바퀴 최대거리 저장
            WheelCenterOffsetX += WheelData.X; // 우선 연산 전, 모두 더함
            WheelCenterOffsetY += WheelData.Y; // 우선 연산 전, 모두 더함

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
    // 바퀴 중심 위치 연산 수행 후 저장
    WheelCenterOffsetX = WheelCenterOffsetX / WheelBonesArray.Num();
    WheelCenterOffsetY = WheelCenterOffsetY / WheelBonesArray.Num();

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
    SuspensionPitchForce = 0.f; // 계산식 초기화
    SuspensionRollForce = 0.f; // 계산식 초기화

    for (int i = 0; i < WheelBonesArray.Num(); i++) SphereTraceGround(i); // 바퀴 접지
    CalcGravityForce(DeltaTime); // 중력 연산
    for (int i = 0; i < WheelBonesArray.Num(); i++) CalcSuspensionForce(i, DeltaTime); // 서스펜션 연산
    CalcDriveForce(DeltaTime);  // 주행 힘 연산
    CalcDragForce(DeltaTime);  // 마찰저항 힘계산
    CalcInertiaForce(DeltaTime); // 관성 힘계산
    CalcVelocity(DeltaTime); // 최종 속도 계산
    ApplyFinalTransform(DeltaTime); // 차체 위치 및 움직임 업데이트
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
void UVehicleDynamicsComponent::CallThrotlle_Implementation(float InputAxis)
{
    ThrottleInput = FMath::Clamp(InputAxis, -1.f, 1.f);
}
void UVehicleDynamicsComponent::CallSteering_Implementation(float InputAxis)
{
    SteeringInput = FMath::Clamp(InputAxis, -1.f, 1.f);

}
void UVehicleDynamicsComponent::CalcDriveForce(float DeltaTime)
{
    if (FMath::IsNearlyZero(ThrottleInput)) return;

    int32 GroundedCount = 0;
    for (int i = 0; i < WheelBonesArray.Num(); i++)
        if (bWheelGrounded[i]) GroundedCount++;
    if (GroundedCount == 0) return;

    float GroundedRatio = (float)GroundedCount / (float)WheelBonesArray.Num();

    FVector ForwardDir = GetOwner()->GetActorForwardVector();
    float CurrentForwardSpeed = FVector::DotProduct(CurrentVelocity, ForwardDir);
    float TargetSpeed = BaseMaxSpeed * ThrottleInput;

    // 1) 평지 일정 저항 상쇄용 유지력 (CalcDragForce와 동일 크기)
    float MaintainForce = ForwardDrag * TotalMass;

    // 2) 목표 속도까지 가속력 (가속도 상한 = BaseAcceleration)
    float SpeedError = TargetSpeed - CurrentForwardSpeed;
    float DesiredAccel = FMath::Clamp(SpeedError, -BaseAcceleration, BaseAcceleration);
    float AccelForce = TotalMass * DesiredAccel;

    // 진행 방향 부호에 맞춰 유지력 적용
    float Direction = FMath::Sign(ThrottleInput);
    FinalForce += ForwardDir * (Direction * MaintainForce + AccelForce) * GroundedRatio;

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

    // 기본 서스펜션 상승힘 연산 ========================================================================================

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

    // 서스펜션 상승힘을 통한 Pitch, Roll 연산============================================================================
    
    // Pitch를 위한 X 연산

    float DistanceAffect = (WheelLocalPos.X - WheelCenterOffsetX) / WheelMaxOffsetX; // 가장 먼 바퀴 기준의 정규화, 가까운 바퀴일수록 힘을 적게 받음(-1~1, 전/후)
    float PitchForce = DistanceAffect * SpringForce; // 서스펜션 상승힘에 힘 더함
    SuspensionPitchForce += PitchForce / SpringStiffness; // 단위 조절을 위해 스프링 강도만큼 나눈 값을 사용함

    // Roll을 위한 Y 연산
    DistanceAffect = (WheelLocalPos.Y - WheelCenterOffsetY) / WheelMaxOffsetY; // 가장 먼 바퀴 기준의 정규화, 가까운 바퀴일수록 힘을 적게 받음(-1~1, 전/후)
    float Rollforce = DistanceAffect * SpringForce; // 서스펜션 상승힘에 힘 더함
    SuspensionRollForce += Rollforce / SpringStiffness; // 단위 조절을 위해 스프링 강도만큼 나눈 값을 사용함

    // 연산 결과를 최종 힘에 반영 ========================================================================================
    FinalForce += UpDir * (SpringForce + DamperForce);

    // 범프 스톱: 최대 압축 초과 시 하강 속도 직접 차단(물리적으로도 차체가 직접 힘을 받아 파손되므로)
    if (Compression >= RestLength * BumpStopRatio)
    {
        float DownSpeed = FVector::DotProduct(CurrentVelocity, -UpDir);
        if (DownSpeed > 0.f) // 아래로 파고드는 중
        {
            // 이 바퀴 부담분만큼 하강 속도 제거
            CurrentVelocity += UpDir * DownSpeed * (1.f / WheelBonesArray.Num());
        }
    }

}
void UVehicleDynamicsComponent::CalcDragForce(float DeltaTime)
{
    // 접지 바퀴 수 계산
    int32 GroundedCount = 0;
    for (int i = 0; i < WheelBonesArray.Num(); i++)
        if (bWheelGrounded[i]) GroundedCount++;

    if (GroundedCount == 0) return; //미접지시 저항 계산하지 않음

    // 접지 비율
    float GroundedRatio = (float)GroundedCount / (float)WheelBonesArray.Num();

    FVector HorizontalVelocity = FVector(CurrentVelocity.X, CurrentVelocity.Y, 0.f);
    if (HorizontalVelocity.IsNearlyZero()) return;

    float StopThreshold = 50.f; // 이 속도 이하에서는 비례 적용

    FVector ForwardDir = GetOwner()->GetActorForwardVector();
    float ForwardSpeed = FVector::DotProduct(HorizontalVelocity, ForwardDir);
    float ForwardScale = (FMath::Abs(ForwardSpeed) < StopThreshold)
        ? (ForwardSpeed / StopThreshold)   // 저속: -1~1 비례 → 0 근처에서 저항도 0
        : FMath::Sign(ForwardSpeed);       // 일반: 일정
    FinalForce += -ForwardDir * ForwardScale * ForwardDrag * TotalMass * GroundedRatio;

    FVector RightDir = GetOwner()->GetActorRightVector();
    float LateralSpeed = FVector::DotProduct(HorizontalVelocity, RightDir);
    float LateralScale = (FMath::Abs(LateralSpeed) < StopThreshold)
        ? (LateralSpeed / StopThreshold)
        : FMath::Sign(LateralSpeed);
    FinalForce += -RightDir * LateralScale * LateralDrag * TotalMass * GroundedRatio;
}
void UVehicleDynamicsComponent::CalcInertiaForce(float DeltaTime)
{
    FVector ForwardDir = GetOwner()->GetActorForwardVector();
    FVector RightDir = GetOwner()->GetActorRightVector();

    // 차량 기준 전진/횡방향 속도만 추출
    float CurrentForwardSpeed = FVector::DotProduct(CurrentVelocity, ForwardDir);
    float CurrentLateralSpeed = FVector::DotProduct(CurrentVelocity, RightDir);

    float PrevForwardSpeed = FVector::DotProduct(PrevVelocity, ForwardDir);
    float PrevLateralSpeed = FVector::DotProduct(PrevVelocity, RightDir);

    // 속도 변화량 → 관성
    float ForwardAccel = (CurrentForwardSpeed - PrevForwardSpeed) / DeltaTime;
    float LateralAccel = (CurrentLateralSpeed - PrevLateralSpeed) / DeltaTime;

    InertiaPitchForce = -ForwardAccel * BodyRotateScale;
    InertiaRollForce = -LateralAccel* BodyRotateScale;
}
void UVehicleDynamicsComponent::CalcImpactForce(FVector ImpactPoint)
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
    FVector WheelLocalXY = FVector(WheelBaseOffset[WheelIdx].X, WheelBaseOffset[WheelIdx].Y, 0.f);
    FVector WheelWorldXY = GetOwner()->GetActorTransform().TransformVector(WheelLocalXY);

    FVector SweepStart = BoxBottom + WheelWorldXY;
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
    //UE_LOG(LogTemp, Log, TEXT("CurrentVelocity : %.4f "), CurrentVelocity.Size());

}

void UVehicleDynamicsComponent::ApplyFinalTransform(float DeltaTime)
{
    FVector NewLocation = GetOwner()->GetActorLocation() + CurrentVelocity * DeltaTime;

    // 목표 Pitch/Roll 계산
    float TargetPitch = (SuspensionPitchForce + (InertiaPitchForce* BodyRotateScale))* BodyRotateScale;
    float TargetRoll = -((SuspensionRollForce + (InertiaRollForce* BodyRotateScale)) * BodyRotateScale);

    // 데드존 적용
    if (FMath::Abs(TargetPitch) < 0.5f) TargetPitch = 0.f;
    if (FMath::Abs(TargetRoll) < 0.5f) TargetRoll = 0.f;

    // 현재 회전에서 보간
    FRotator CurrentRot = GetOwner()->GetActorRotation();
    float NewPitch = FMath::FInterpTo(CurrentRot.Pitch, TargetPitch, DeltaTime, RotateInterpSpeed);
    float NewRoll = FMath::FInterpTo(CurrentRot.Roll, TargetRoll, DeltaTime, RotateInterpSpeed);

    // 최종 반환값 저장
    FinalBodyLoc = NewLocation;
    FinalBodyRot = FRotator(NewPitch, CurrentRot.Yaw, NewRoll) + FRotator(0.f, SteeringInput* SteeringSpeed* DeltaTime, 0.f);

    // 최종 차체 적용 ===============================================================
    GetOwner()->SetActorLocation(FinalBodyLoc, true);
    GetOwner()->SetActorRotation(FinalBodyRot);

}

void UVehicleDynamicsComponent::ApplyReplicatedTransform(float DeltaTime)
{
    FVector NewLoc = FMath::VInterpTo(GetOwner()->GetActorLocation(), FinalBodyLoc, DeltaTime, 10.f);
    FRotator NewRot = FMath::RInterpTo(GetOwner()->GetActorRotation(), FinalBodyRot, DeltaTime, 10.f);

    GetOwner()->SetActorLocation(NewLoc);
    GetOwner()->SetActorRotation(NewRot);
}
