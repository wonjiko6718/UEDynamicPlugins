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

	//Calc Setting Param
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VelocityParam") float AccelRate = 1.f; // 가속 계수 (배율)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VelocityParam") float BrakeRate = 1.f; // 제동 계수 (배율)

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VelocityParam") int32 SelectedGearNum = 0; // 선택된 기어 주소 - 기본값 : 첫번째 인자
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VelocityParam") TArray<float> GearMaxSpeedArray; // 기어별 최대 속도 배열(cm/s)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VelocityParam") TArray<float> GearAccelerationArray; // 기어별 가속도 배열(cm/s)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VelocityParam") TArray<int32> GearForwardArray; // 기어벌 전진, 후진, 회전여부 (0,1,2)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VelocityParam") float BaseMaxSpeed = 0.f; // 기어별 기준 최대속도(cm/s)
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "VelocityParam") float BaseAcceleration = 0.f; // 기어별 기준 가속도(cm/s)

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VelocityParam") float DragCoeff = 0.1f; // 공기,노면 저항 상수(배율) 0 ~ 1
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VelocityParam") float GravityForceCoeff = 980.f; // 중력가속도 상수 9.8 (cm/s^2)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VelocityParam") float EnergyLossRate = 0.95f; // 중력 힘 감쇠 (배열)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VelocityParam") int32 CalcInterval = 30; // 프레임 최적화를 위한 연산 주기 (fps)

	//Vehicle Setting Param
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category = "Wheel") TArray<FName> WheelBonesArray; // 배열 매칭용 차량 바퀴 본
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Wheel") TArray<FName> TrackBonesArray; // 배열 매칭용 차량 바퀴 본

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wheel") TArray<FVector> WheelOffset; // 로컬 바퀴 상대위치(기본 위치)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wheel") float WheelRadius; // 바퀴 반경(구) - SphereTrace로 접지 위치 계산
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wheel") float WheelMass = 50.0f; // 바퀴 질량 (kg)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wheel") float WheelSmoothing = 15.0f; // 바퀴 관성 - 시각적 부드러움 연산

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Suspension") float SpringMaxExtension = 30; // 최대 서스펜션 높이 (cm)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Suspension") float SpringMinExtension = 5; // 최소 서스펜션 높이 (cm)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Suspension") float SpringStiffness; // 스프링 강도
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Suspension") float DampingCoeff; // 댐핑 상수
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Suspension") float RestLength; // 휴지 길이 (cm)

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Body") float TotalMass; // 차체 전체 질량(kg)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Body") FVector CenterOfMass; // 차체 무게중심 위치
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Body") float MaxRollAngle = 30.f; // 차체 최대 Roll
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Body") float MaxPitchAngle = 30.f; // 차체 최대 Pitch
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Body") float BodySmoothing; // 차체 Interp 속도 제어
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Body") float PostureScale = 100.0f; // 베이스 차체 변화량 (클수록 크게 변화)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Body") float ImpactStiffness = 0.15f; // 충격 복원력
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Body") float ImpactDamping = 0.15f; // 충격 감쇠 
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Body") float ImpactInputScale = 0.15f; // 충격 입력 크기

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FinalValue") FRotator FinalBodyRot; // 최종 적용 차체 회전
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FinalValue") TArray<FVector> FinalWheelsLoc; // 최종 적용 휠 위치
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FinalValue") TArray<FVector> FinalGroundedLoc; // 최종 적용 접지 위치

	UPROPERTY(VisibleAnywhere, Category = "Input") float ThrottleAxis; // 스로틀 인풋
	UPROPERTY(VisibleAnywhere, Category = "Input") float SteeringAxis; // 조향 인풋
	UPROPERTY(EditAnywhere, Category = "Input") int32 GeerNum; // 기어 인풋

	UPROPERTY(EditAnywhere, Category = "Debug") bool bDrawTrace = true; // 레이트레이스 디버그 옵션

private:

	UPROPERTY(VisibleAnywhere, Category = "CalcState") FRotator CurrentBodyRotation; // 연산용 차체 회전 저장값
	UPROPERTY(VisibleAnywhere, Category = "CalcState") USkeletalMeshComponent* OwnerSkeletalMeshComp; // 차량 본 정보 취득을 위한 스켈레탈 메시
	UPROPERTY(VisibleAnywhere, Category = "CalcState") UFloatingPawnMovement* OwnerPawnMovement; // 차량 속도 제어를 위한 Pawn Movement

	UPROPERTY(VisibleAnywhere, Category = "RuntimeState") FVector CurrentVelocity; // 현재 속도 (cm/s)
	UPROPERTY(VisibleAnywhere, Category = "RuntimeState") FVector PrevVelocity; // 직전 속도 (cm/s)
	UPROPERTY(VisibleAnywhere, Category = "RuntimeState") float ImpactPitchVelocity = 0.f; // 충격 Pitch 속도
	UPROPERTY(VisibleAnywhere, Category = "RuntimeState") float ImpactRollVelocity = 0.f; // 충격 Roll 속도
	UPROPERTY(VisibleAnywhere, Category = "RuntimeState") float ImpactPitch = 0.f; // 충격 누적 Pitch
	UPROPERTY(VisibleAnywhere, Category = "RuntimeState") float ImpactRoll = 0.f; // 충격 누적 Roll
	UPROPERTY(VisibleAnywhere, Category = "RuntimeState") float GravityVelocity = 0.f; // 중력 연산용 하강속도 (cm/s)
	UPROPERTY(VisibleAnywhere, Category = "RuntimeState") float SuspensionForceSum = 0.f; // 서스펜션 상승 압력 계
	UPROPERTY(VisibleAnywhere, Category = "RuntimeState") TArray<FVector> GroundHitPoint; // SphereTrace 접지점 저장
	UPROPERTY(VisibleAnywhere, Category = "RuntimeState") TArray<float> WheelHeight; // 스켈레탈 기준의 바퀴 상대길이(음수 - 늘어남) (cm)
	UPROPERTY(VisibleAnywhere, Category = "RuntimeState") TArray<float> SuspVelocity; // 서스펜션 속도 힘
	UPROPERTY(VisibleAnywhere, Category = "RuntimeState") TArray<bool> bIsGrounded; // 각 바퀴 접지 여부

public:

	UFUNCTION(BlueprintCallable) void BeginSetting(); // 시작 시 SkeletalMesh의 Bone 데이터를 배열에 저장
	UFUNCTION(BlueprintCallable) void TickVehicle(float DeltaTime); // 전체 연산 흐름 제어

	//Event Functions
	UFUNCTION(BlueprintCallable) void SelectGear(int32 SelectNum);
	//Calc Functions
	UFUNCTION(BlueprintCallable) void ApplyGravity(float DeltaTime); // 중력 연산, Z위치 갱신
	UFUNCTION(BlueprintCallable) void CalcSuspensionForce(int WheelIdx, float DeltaTime); // 서스펜션 힘 연산(위로 미는 방향)
	UFUNCTION(BlueprintCallable) void SphereTraceGround(int WheelIdx); // 바퀴 지면 트레이스 - 바퀴 위치 확인
	UFUNCTION(BlueprintCallable) void CalcVelocity(float DeltaTime); // 속도 연산
	UFUNCTION(BlueprintCallable) void ApplyImpact(FVector ImpactForce); // 충격 계산 - 속도에도 적용함(관성을 충격으로 봄)
	UFUNCTION(BlueprintCallable) void ApplyPosture(float DeltaTime); // 최종 자세 적용


};
