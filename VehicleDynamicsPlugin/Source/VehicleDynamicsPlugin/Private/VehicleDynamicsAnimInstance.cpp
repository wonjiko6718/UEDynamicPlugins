// Fill out your copyright notice in the Description page of Project Settings.


#include "VehicleDynamicsAnimInstance.h"

void UVehicleDynamicsAnimInstance::NativeUpdateAnimation(float DeltaTime)
{

}

void UVehicleDynamicsAnimInstance::UpdateBoneTransform(FName BoneName, FTransform BoneTransform)
{
    USkeletalMeshComponent* Mesh = GetSkelMeshComponent();
    if (!Mesh) return;

    int32 BoneIndex = Mesh->GetBoneIndex(BoneName);
    if (BoneIndex == INDEX_NONE) return;

    // 컴포넌트 스페이스 트랜스폼 배열 직접 수정
    TArray<FTransform>& ComponentSpaceTransforms = Mesh->GetEditableComponentSpaceTransforms();
    if (!ComponentSpaceTransforms.IsValidIndex(BoneIndex)) return;

    ComponentSpaceTransforms[BoneIndex] = BoneTransform;

    // 변경사항 반영
    Mesh->MarkRenderStateDirty();
    Mesh->MarkRenderDynamicDataDirty();
}
