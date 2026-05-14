// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "VehicleDynamicsAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class VEHICLEDYNAMICSPLUGIN_API UVehicleDynamicsAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:

	virtual void NativeUpdateAnimation(float DeltaTime) override;

	UFUNCTION(BlueprintCallable) void UpdateBoneTransform(FName BoneName, FTransform BoneTransform); // 시작 시 SkeletalMesh의 Bone 데이터를 배열에 저장

};
