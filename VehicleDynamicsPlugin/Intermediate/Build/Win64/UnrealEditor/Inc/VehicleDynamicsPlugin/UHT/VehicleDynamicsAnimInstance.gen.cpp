// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleDynamicsPlugin/Public/VehicleDynamicsAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicleDynamicsAnimInstance() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_VehicleDynamicsPlugin();
	VEHICLEDYNAMICSPLUGIN_API UClass* Z_Construct_UClass_UVehicleDynamicsAnimInstance();
	VEHICLEDYNAMICSPLUGIN_API UClass* Z_Construct_UClass_UVehicleDynamicsAnimInstance_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVehicleDynamicsAnimInstance::execUpdateBoneTransform)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_STRUCT(FTransform,Z_Param_BoneTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateBoneTransform(Z_Param_BoneName,Z_Param_BoneTransform);
		P_NATIVE_END;
	}
	void UVehicleDynamicsAnimInstance::StaticRegisterNativesUVehicleDynamicsAnimInstance()
	{
		UClass* Class = UVehicleDynamicsAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateBoneTransform", &UVehicleDynamicsAnimInstance::execUpdateBoneTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVehicleDynamicsAnimInstance_UpdateBoneTransform_Statics
	{
		struct VehicleDynamicsAnimInstance_eventUpdateBoneTransform_Parms
		{
			FName BoneName;
			FTransform BoneTransform;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVehicleDynamicsAnimInstance_UpdateBoneTransform_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleDynamicsAnimInstance_eventUpdateBoneTransform_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVehicleDynamicsAnimInstance_UpdateBoneTransform_Statics::NewProp_BoneTransform = { "BoneTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleDynamicsAnimInstance_eventUpdateBoneTransform_Parms, BoneTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleDynamicsAnimInstance_UpdateBoneTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleDynamicsAnimInstance_UpdateBoneTransform_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleDynamicsAnimInstance_UpdateBoneTransform_Statics::NewProp_BoneTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleDynamicsAnimInstance_UpdateBoneTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VehicleDynamicsAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleDynamicsAnimInstance_UpdateBoneTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleDynamicsAnimInstance, nullptr, "UpdateBoneTransform", nullptr, nullptr, Z_Construct_UFunction_UVehicleDynamicsAnimInstance_UpdateBoneTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsAnimInstance_UpdateBoneTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleDynamicsAnimInstance_UpdateBoneTransform_Statics::VehicleDynamicsAnimInstance_eventUpdateBoneTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsAnimInstance_UpdateBoneTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleDynamicsAnimInstance_UpdateBoneTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsAnimInstance_UpdateBoneTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVehicleDynamicsAnimInstance_UpdateBoneTransform_Statics::VehicleDynamicsAnimInstance_eventUpdateBoneTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVehicleDynamicsAnimInstance_UpdateBoneTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleDynamicsAnimInstance_UpdateBoneTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVehicleDynamicsAnimInstance);
	UClass* Z_Construct_UClass_UVehicleDynamicsAnimInstance_NoRegister()
	{
		return UVehicleDynamicsAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UVehicleDynamicsAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVehicleDynamicsAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleDynamicsPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsAnimInstance_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVehicleDynamicsAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVehicleDynamicsAnimInstance_UpdateBoneTransform, "UpdateBoneTransform" }, // 3243839653
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsAnimInstance_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsAnimInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "VehicleDynamicsAnimInstance.h" },
		{ "ModuleRelativePath", "Public/VehicleDynamicsAnimInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVehicleDynamicsAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVehicleDynamicsAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVehicleDynamicsAnimInstance_Statics::ClassParams = {
		&UVehicleDynamicsAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UVehicleDynamicsAnimInstance_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UVehicleDynamicsAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UVehicleDynamicsAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVehicleDynamicsAnimInstance.OuterSingleton, Z_Construct_UClass_UVehicleDynamicsAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVehicleDynamicsAnimInstance.OuterSingleton;
	}
	template<> VEHICLEDYNAMICSPLUGIN_API UClass* StaticClass<UVehicleDynamicsAnimInstance>()
	{
		return UVehicleDynamicsAnimInstance::StaticClass();
	}
	UVehicleDynamicsAnimInstance::UVehicleDynamicsAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVehicleDynamicsAnimInstance);
	UVehicleDynamicsAnimInstance::~UVehicleDynamicsAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVehicleDynamicsAnimInstance, UVehicleDynamicsAnimInstance::StaticClass, TEXT("UVehicleDynamicsAnimInstance"), &Z_Registration_Info_UClass_UVehicleDynamicsAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVehicleDynamicsAnimInstance), 2771675273U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsAnimInstance_h_1169971317(TEXT("/Script/VehicleDynamicsPlugin"),
		Z_CompiledInDeferFile_FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
