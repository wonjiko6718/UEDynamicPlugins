// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "VehicleDynamicsComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VEHICLEDYNAMICSPLUGIN_API UVehicleDynamicsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UVehicleDynamicsComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; // 서버 복제 함수

	//Calc Setting Param : 기본값은 K1A2 기준
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Setting") bool bIsAIPossess = false; // AI 동작 여부, AI는 floating Pawn Movement를 통해 처리

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VelocityParam") float MaxClimbingAngle = 20.f; // 최대 등판각도(각)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VelocityParam") float Surfacefriction = 1.f; //  표면마찰 저항배율(1기본)

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VelocityParam") float ForwardDrag = 3000.f;   // 전진방향 마찰저항
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VelocityParam") float LateralDrag = 4500.f;  // 횡방향 마찰저항

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadOnly, Category = "VelocityParam") int32 SelectedGearNum = 0; // 선택된 기어 주소 - 기본값 : 첫번째 인자
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VelocityParam") TArray<float> GearMaxSpeedArray; // 기어별 최대 속도 배열(cm/s)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VelocityParam") TArray<float> GearAccelerationArray; // 기어별 가속도 배열(cm/s)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VelocityParam") TArray<int32> GearForwardArray; // 기어벌 전진, 후진, 회전여부 (0,1,2)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VelocityParam") float BaseMaxSpeed = 0.f; // 기어별 기준 최대속도(cm/s)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VelocityParam") float BaseAcceleration = 0.f; // 기어별 기준 가속도(cm/s)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VelocityParam") float SteeringSpeed = 100.f; // 회전 속도

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VelocityParam") float GravityForceCoeff = - 980.f; // 중력가속도 상수 9.8 (cm/s^2)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VelocityParam") int32 CalcInterval = 30; // 프레임 최적화를 위한 연산 주기 (fps)

	//Vehicle Setting Param
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category = "Wheel") TArray<FName> WheelBonesArray; // 배열 매칭용 차량 바퀴 본
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Wheel") TArray<FName> TrackBonesArray; // 배열 매칭용 차량 바퀴 본

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Wheel") TArray<FVector> WheelBaseOffset; // 로컬 바퀴 상대위치(기본 위치)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Wheel") float WheelMaxOffsetX = 0; // Pitch 정규화용 최대 바퀴거리
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Wheel") float WheelMaxOffsetY = 0; // Roll 정규화용 최대 바퀴거리
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Wheel") float WheelCenterOffsetX = 0; // Pitch 정규화용 바퀴 중심거리
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Wheel") float WheelCenterOffsetY = 0; // Roll 정규화용 바퀴 중심거리

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wheel") float WheelRadius = 30.f; // 바퀴 반경(구) - SphereTrace로 접지 위치 계산

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Suspension") float SpringStiffness = 178000.0f; // 스프링 강도
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Suspension") float DamperStiffness = 28000.0f; // 댐핑 상수
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Suspension") float RestLength = 50.0f; // 휴지 길이 (cm)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Suspension") float BumpStopRatio = 0.9; // 최대 서스펜션 압축 비율

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Body") float TotalMass = 54500.0f; // 차체 전체 질량(kg)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Body") UBoxComponent* BodyBox; // 차체 중심 박스 컴포넌트
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Body") float BodyRotateScale = 0.15f; // 차체 회전 크기(배율)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Body") float RotateInterpSpeed = 2.f; // 차체 회전 속도

	//최종 함수는 서버 복제 실행
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadOnly, Category = "FinalValue") FVector FinalForce; // 최종 적용 힘 크기 및 방향

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "FinalValue") FVector FinalBodyLoc; // 최종 적용 차체 위치 (힘 기반의 속력)
	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "FinalValue") FRotator FinalBodyRot; // 최종 적용 차체 회전 (힘 기반의 방향)
	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "FinalValue") TArray<FVector> FinalWheelsLoc; // 최종 적용 휠 위치
	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "FinalValue") TArray<FVector> FinalGroundedLoc; // 최종 적용 접지 위치(트랙에 사용)
	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "FinalValue") FVector AngularVelocity; // 각속도 (deg/s, X=Roll, Y=Pitch, Z=Yaw)

	UPROPERTY(Replicated, VisibleAnywhere, Category = "Input") float ThrottleInput; // 스로틀 인풋
	UPROPERTY(Replicated, VisibleAnywhere, Category = "Input") float SteeringInput; // 조향 인풋
	UPROPERTY(Replicated, VisibleAnywhere, Category = "Input") float BrakeInput; // 브레이크 인풋

	UPROPERTY(EditAnywhere, Category = "Debug") bool bDrawTrace = true; // 레이트레이스 디버그 옵션
	UPROPERTY(EditAnywhere, Category = "Debug") float InputScale = 150; // 인풋 테스트 디버그 옵션

	UPROPERTY(VisibleAnywhere, Category = "CalcState") FRotator CurrentBodyRotation; // 연산용 차체 회전 저장값
	UPROPERTY(VisibleAnywhere, Category = "CalcState") FRotator PrevBodyRot; // 이전 프레임 회전 (각속도 계산용)
	UPROPERTY(VisibleAnywhere, Category = "CalcState") float SuspensionPitchForce; // 서스펜션에 반영하기 위한 Pitch 힘
	UPROPERTY(VisibleAnywhere, Category = "CalcState") float SuspensionRollForce; // 서스펜션에 반영하기 위한 Roll 힘

	UPROPERTY(VisibleAnywhere, Category = "CalcState") float InertiaPitchForce; // 관성에 의한 Pitch 힘
	UPROPERTY(VisibleAnywhere, Category = "CalcState") float InertiaRollForce; // 관성에 의한 Roll 힘

	UPROPERTY(VisibleAnywhere, Category = "CalcState") USkeletalMeshComponent* OwnerSkeletalMeshComp; // 차량 본 정보 취득을 위한 스켈레탈 메시
	UPROPERTY(VisibleAnywhere, Category = "CalcState") UFloatingPawnMovement* OwnerPawnMovement; // 차량 속도 제어를 위한 Pawn Movement

private:

	UPROPERTY(VisibleAnywhere, Category = "RuntimeState") FVector CurrentVelocity; // 현재 속도 (cm/s)
	UPROPERTY(VisibleAnywhere, Category = "RuntimeState") FVector PrevVelocity; // 직전 속도 (cm/s)
	UPROPERTY(VisibleAnywhere, Category = "RuntimeState") float CurrentTargetSpeed = 0.f; // 전진힘 계산용 목표속도

	UPROPERTY(VisibleAnywhere, Category = "RuntimeState") TArray<FVector> GroundHitPoint; // SphereTrace 접지점 저장
	UPROPERTY(VisibleAnywhere, Category = "RuntimeState") TArray<float> SuspensionCompression; // 서스펜션 압축량(cm)
	UPROPERTY(VisibleAnywhere, Category = "RuntimeState") TArray<float> PrevSuspensionCompression; // 이전 프레임의 서스펜션 압축량(cm)
	UPROPERTY(VisibleAnywhere, Category = "RuntimeState") TArray<bool> bWheelGrounded; // 각 바퀴 접지 여부

public:

	UFUNCTION(BlueprintCallable) void BeginSetting(); // 시작 시 SkeletalMesh의 Bone 데이터를 배열에 저장
	UFUNCTION(BlueprintCallable) void TickVehicle(float DeltaTime); // 전체 연산 흐름 제어

	//Event Functions
	UFUNCTION(BlueprintCallable) void SelectGear(int32 SelectNum);
	UFUNCTION(Server, Reliable, BlueprintCallable) void CallThrotlle(float InputAxis);
	UFUNCTION(Server, Reliable, BlueprintCallable) void CallSteering(float InputAxis);

	//Calc Functions
	UFUNCTION(BlueprintCallable) void SphereTraceGround(int WheelIdx); // 바퀴 지면 트레이스 - 바퀴 위치 확인

	//Force Calc
	UFUNCTION(BlueprintCallable) void CalcDriveForce(float DeltaTime); // 주행 힘 연산(앞으로 미는 힘)
	UFUNCTION(BlueprintCallable) void CalcGravityForce(float DeltaTime); // 중력 연산(아래로 미는 힘)
	UFUNCTION(BlueprintCallable) void CalcSuspensionForce(int WheelIdx, float DeltaTime); // 서스펜션 힘 연산(위로 미는 방향)
	UFUNCTION(BlueprintCallable) void CalcDragForce(float DeltaTime); // 저항 연산 - 노면 별 저항 등(일반적으로 차체 기준 뒤쪽 힘)
	UFUNCTION(BlueprintCallable) void CalcInertiaForce(float DeltaTime); // 관성 연산
	UFUNCTION(BlueprintCallable) void CalcImpactForce(FVector ImpactPoint); // 충격 연산 - 차체 충격 등(외부에서 들어오는 힘)

	//Final Calc
	UFUNCTION(BlueprintCallable) void CalcVelocity(float DeltaTime); // 최종 속도 연산
	UFUNCTION(BlueprintCallable) void ApplyFinalTransform(float DeltaTime); // 위치와 회전 연산 (서버)
	UFUNCTION(BlueprintCallable) void ApplyReplicatedTransform(float DeltaTime); // 위치와 회전 복제 (클라이언트)



};
