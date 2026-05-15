// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"
#include "Components/ActorComponent.h"
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
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VelocityParam") float MaxSpeed; // 제어용 최대 속도
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VelocityParam") float AccelRate; // 가속 계수
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VelocityParam") float BrakeRate; // 제동 계수
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VelocityParam") float DragCoeff; // 공기,노면 저항 상수
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VelocityParam") float GravityForceCoeff = 980.f; // 중력 상수 9.8
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "VelocityParam") int32 CalcInterval = 30; // 프레임 최적화를 위한 연산 주기

	//Vehicle Setting Param
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,Category = "Wheel") TArray<FName> WheelBonesArray; // 배열 매칭용 차량 바퀴 본
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Wheel") TArray<FName> TrackBonesArray; // 배열 매칭용 차량 바퀴 본

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wheel") TArray<FVector> WheelOffset; // 로컬 바퀴 상대위치(기본 위치)
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wheel") float WheelRadius; // 바퀴 반경(구) - SphereTrace로 접지 위치 계산
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Wheel") float WheelMass; // 바퀴 관성

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Suspension") float SpringMaxExtension = 5; // 최대 서스펜션 높이
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Suspension") float SpringMinExtension = 2; // 최소 서스펜션 높이
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Suspension") float SpringStiffness; // 스프링 강도
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Suspension") float DampingCoeff; // 댐핑 상수
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Suspension") float RestLength; // 휴지 길이

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Body") float TotalMass; // 차체 전체 질량
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Body") FVector CenterOfMass; // 차체 무게중심 위치
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Body") float MaxRollAngle; // 차체 최대 Roll
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Body") float MaxPitchAngle; // 차체 최대 Pitch
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Body") float BodySmoothing; // 차체 Interp 속도 제어
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Body") float BodyBaseHeightCoeff = 20.f; // 차체 베이스 높이 보간상수
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Body") float BodyBaseHeight; // 차체 베이스 높이

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FinalValue") FRotator FinalBodyRot; // 최종 적용 차체 회전
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FinalValue") TArray<FVector> FinalWheelsLoc; // 최종 적용 휠 위치
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "FinalValue") TArray<FVector> FinalGroundedLoc; // 최종 적용 접지 위치

	UPROPERTY(VisibleAnywhere, Category = "Input") float ThrottleAxis; // 스로틀 인풋
	UPROPERTY(VisibleAnywhere, Category = "Input") float SteeringAxis; // 조향 인풋

	UPROPERTY(VisibleAnywhere, Category = "Debug") bool bDrawHitPoints = true; // 레이트레이스 디버그 옵션
	UPROPERTY(VisibleAnywhere, Category = "Debug") float bDrawFinalPoints = true; // 최종 반환값 디버그 옵션

private:

	UPROPERTY(VisibleAnywhere, Category = "CalcState") FRotator CurrentBodyRotation; // 연산용 차체 회전 저장값
	UPROPERTY(VisibleAnywhere, Category = "CalcState") USkeletalMeshComponent* OwnerSkeletalMeshComp; // 차량 본 정보 취득을 위한 스켈레탈 메시

	UPROPERTY(VisibleAnywhere, Category = "RuntimeState") FVector CurrentVelocity; // 현재 속도
	UPROPERTY(VisibleAnywhere, Category = "RuntimeState") float CurrentSpeed; // 현재 속력
	UPROPERTY(VisibleAnywhere, Category = "RuntimeState") float GravityVelocity = 0.f; // 중력 연산용 하강속도
	UPROPERTY(VisibleAnywhere, Category = "RuntimeState") float SuspensionForceSum = 0.f; // 서스펜션 상승 압력 계
	UPROPERTY(VisibleAnywhere, Category = "RuntimeState") TArray<FVector> GroundHitPoint; // SphereTrace 접지점 저장
	UPROPERTY(VisibleAnywhere, Category = "RuntimeState") TArray<float> WheelHeight; // 스켈레탈 기준의 바퀴 상대길이(음수 - 늘어남)
	UPROPERTY(VisibleAnywhere, Category = "RuntimeState") TArray<float> SuspVelocity; // 서스펜션 상단 힘
	UPROPERTY(VisibleAnywhere, Category = "RuntimeState") TArray<bool> bIsGrounded; // 각 바퀴 접지 여부

public:

	UFUNCTION(BlueprintCallable) void BeginSetting(); // 시작 시 SkeletalMesh의 Bone 데이터를 배열에 저장
	UFUNCTION(BlueprintCallable) void TickVehicle(float DeltaTime); // 전체 연산 흐름 제어

	//Calc Functions
	UFUNCTION(BlueprintCallable) void ApplyGravity(float DeltaTime); // 중력 연산, Z위치 갱신
	UFUNCTION(BlueprintCallable) void CalcSuspensionForce(int WheelIdx, float DeltaTime); // 서스펜션 힘 연산(위로 미는 방향)
	UFUNCTION(BlueprintCallable) void SphereTraceGround(int WheelIdx); // 바퀴 지면 트레이스 - 바퀴 위치 확인
	UFUNCTION(BlueprintCallable) void CalcVelocity(float DeltaTime); // 속도 연산
	UFUNCTION(BlueprintCallable) void ApplyPosture(); // 최종 자세 적용


};
