// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleDynamicsPlugin/Public/VehicleDynamicsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicleDynamicsComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VehicleDynamicsPlugin();
	VEHICLEDYNAMICSPLUGIN_API UClass* Z_Construct_UClass_UVehicleDynamicsComponent();
	VEHICLEDYNAMICSPLUGIN_API UClass* Z_Construct_UClass_UVehicleDynamicsComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVehicleDynamicsComponent::execApplyFinalTransform)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyFinalTransform(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehicleDynamicsComponent::execCalcVelocity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalcVelocity(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehicleDynamicsComponent::execCalcImpactForce)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalcImpactForce(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehicleDynamicsComponent::execCalcDragForce)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalcDragForce(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehicleDynamicsComponent::execCalcSuspensionForce)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIdx);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalcSuspensionForce(Z_Param_WheelIdx,Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehicleDynamicsComponent::execCalcGravityForce)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CalcGravityForce(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehicleDynamicsComponent::execSphereTraceGround)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIdx);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SphereTraceGround(Z_Param_WheelIdx);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehicleDynamicsComponent::execSelectGear)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SelectNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectGear(Z_Param_SelectNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehicleDynamicsComponent::execTickVehicle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickVehicle(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehicleDynamicsComponent::execBeginSetting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginSetting();
		P_NATIVE_END;
	}
	void UVehicleDynamicsComponent::StaticRegisterNativesUVehicleDynamicsComponent()
	{
		UClass* Class = UVehicleDynamicsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyFinalTransform", &UVehicleDynamicsComponent::execApplyFinalTransform },
			{ "BeginSetting", &UVehicleDynamicsComponent::execBeginSetting },
			{ "CalcDragForce", &UVehicleDynamicsComponent::execCalcDragForce },
			{ "CalcGravityForce", &UVehicleDynamicsComponent::execCalcGravityForce },
			{ "CalcImpactForce", &UVehicleDynamicsComponent::execCalcImpactForce },
			{ "CalcSuspensionForce", &UVehicleDynamicsComponent::execCalcSuspensionForce },
			{ "CalcVelocity", &UVehicleDynamicsComponent::execCalcVelocity },
			{ "SelectGear", &UVehicleDynamicsComponent::execSelectGear },
			{ "SphereTraceGround", &UVehicleDynamicsComponent::execSphereTraceGround },
			{ "TickVehicle", &UVehicleDynamicsComponent::execTickVehicle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyFinalTransform_Statics
	{
		struct VehicleDynamicsComponent_eventApplyFinalTransform_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyFinalTransform_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleDynamicsComponent_eventApplyFinalTransform_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyFinalTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyFinalTransform_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyFinalTransform_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyFinalTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleDynamicsComponent, nullptr, "ApplyFinalTransform", nullptr, nullptr, Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyFinalTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyFinalTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyFinalTransform_Statics::VehicleDynamicsComponent_eventApplyFinalTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyFinalTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyFinalTransform_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyFinalTransform_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyFinalTransform_Statics::VehicleDynamicsComponent_eventApplyFinalTransform_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyFinalTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyFinalTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicleDynamicsComponent_BeginSetting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleDynamicsComponent_BeginSetting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleDynamicsComponent_BeginSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleDynamicsComponent, nullptr, "BeginSetting", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_BeginSetting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleDynamicsComponent_BeginSetting_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UVehicleDynamicsComponent_BeginSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleDynamicsComponent_BeginSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicleDynamicsComponent_CalcDragForce_Statics
	{
		struct VehicleDynamicsComponent_eventCalcDragForce_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleDynamicsComponent_CalcDragForce_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleDynamicsComponent_eventCalcDragForce_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleDynamicsComponent_CalcDragForce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleDynamicsComponent_CalcDragForce_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleDynamicsComponent_CalcDragForce_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleDynamicsComponent_CalcDragForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleDynamicsComponent, nullptr, "CalcDragForce", nullptr, nullptr, Z_Construct_UFunction_UVehicleDynamicsComponent_CalcDragForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_CalcDragForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleDynamicsComponent_CalcDragForce_Statics::VehicleDynamicsComponent_eventCalcDragForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_CalcDragForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleDynamicsComponent_CalcDragForce_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_CalcDragForce_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVehicleDynamicsComponent_CalcDragForce_Statics::VehicleDynamicsComponent_eventCalcDragForce_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVehicleDynamicsComponent_CalcDragForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleDynamicsComponent_CalcDragForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicleDynamicsComponent_CalcGravityForce_Statics
	{
		struct VehicleDynamicsComponent_eventCalcGravityForce_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleDynamicsComponent_CalcGravityForce_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleDynamicsComponent_eventCalcGravityForce_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleDynamicsComponent_CalcGravityForce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleDynamicsComponent_CalcGravityForce_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleDynamicsComponent_CalcGravityForce_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Force Calc\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Force Calc" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleDynamicsComponent_CalcGravityForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleDynamicsComponent, nullptr, "CalcGravityForce", nullptr, nullptr, Z_Construct_UFunction_UVehicleDynamicsComponent_CalcGravityForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_CalcGravityForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleDynamicsComponent_CalcGravityForce_Statics::VehicleDynamicsComponent_eventCalcGravityForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_CalcGravityForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleDynamicsComponent_CalcGravityForce_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_CalcGravityForce_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVehicleDynamicsComponent_CalcGravityForce_Statics::VehicleDynamicsComponent_eventCalcGravityForce_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVehicleDynamicsComponent_CalcGravityForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleDynamicsComponent_CalcGravityForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicleDynamicsComponent_CalcImpactForce_Statics
	{
		struct VehicleDynamicsComponent_eventCalcImpactForce_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleDynamicsComponent_CalcImpactForce_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleDynamicsComponent_eventCalcImpactForce_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleDynamicsComponent_CalcImpactForce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleDynamicsComponent_CalcImpactForce_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleDynamicsComponent_CalcImpactForce_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xcf\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xcf\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleDynamicsComponent_CalcImpactForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleDynamicsComponent, nullptr, "CalcImpactForce", nullptr, nullptr, Z_Construct_UFunction_UVehicleDynamicsComponent_CalcImpactForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_CalcImpactForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleDynamicsComponent_CalcImpactForce_Statics::VehicleDynamicsComponent_eventCalcImpactForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_CalcImpactForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleDynamicsComponent_CalcImpactForce_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_CalcImpactForce_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVehicleDynamicsComponent_CalcImpactForce_Statics::VehicleDynamicsComponent_eventCalcImpactForce_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVehicleDynamicsComponent_CalcImpactForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleDynamicsComponent_CalcImpactForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicleDynamicsComponent_CalcSuspensionForce_Statics
	{
		struct VehicleDynamicsComponent_eventCalcSuspensionForce_Parms
		{
			int32 WheelIdx;
			float DeltaTime;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_WheelIdx;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVehicleDynamicsComponent_CalcSuspensionForce_Statics::NewProp_WheelIdx = { "WheelIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleDynamicsComponent_eventCalcSuspensionForce_Parms, WheelIdx), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleDynamicsComponent_CalcSuspensionForce_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleDynamicsComponent_eventCalcSuspensionForce_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleDynamicsComponent_CalcSuspensionForce_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleDynamicsComponent_CalcSuspensionForce_Statics::NewProp_WheelIdx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleDynamicsComponent_CalcSuspensionForce_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleDynamicsComponent_CalcSuspensionForce_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xdf\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xc6\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xdf\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xc6\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleDynamicsComponent_CalcSuspensionForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleDynamicsComponent, nullptr, "CalcSuspensionForce", nullptr, nullptr, Z_Construct_UFunction_UVehicleDynamicsComponent_CalcSuspensionForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_CalcSuspensionForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleDynamicsComponent_CalcSuspensionForce_Statics::VehicleDynamicsComponent_eventCalcSuspensionForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_CalcSuspensionForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleDynamicsComponent_CalcSuspensionForce_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_CalcSuspensionForce_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVehicleDynamicsComponent_CalcSuspensionForce_Statics::VehicleDynamicsComponent_eventCalcSuspensionForce_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVehicleDynamicsComponent_CalcSuspensionForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleDynamicsComponent_CalcSuspensionForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicleDynamicsComponent_CalcVelocity_Statics
	{
		struct VehicleDynamicsComponent_eventCalcVelocity_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleDynamicsComponent_CalcVelocity_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleDynamicsComponent_eventCalcVelocity_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleDynamicsComponent_CalcVelocity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleDynamicsComponent_CalcVelocity_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleDynamicsComponent_CalcVelocity_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Final Calc\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Final Calc" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleDynamicsComponent_CalcVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleDynamicsComponent, nullptr, "CalcVelocity", nullptr, nullptr, Z_Construct_UFunction_UVehicleDynamicsComponent_CalcVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_CalcVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleDynamicsComponent_CalcVelocity_Statics::VehicleDynamicsComponent_eventCalcVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_CalcVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleDynamicsComponent_CalcVelocity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_CalcVelocity_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVehicleDynamicsComponent_CalcVelocity_Statics::VehicleDynamicsComponent_eventCalcVelocity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVehicleDynamicsComponent_CalcVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleDynamicsComponent_CalcVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicleDynamicsComponent_SelectGear_Statics
	{
		struct VehicleDynamicsComponent_eventSelectGear_Parms
		{
			int32 SelectNum;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SelectNum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVehicleDynamicsComponent_SelectGear_Statics::NewProp_SelectNum = { "SelectNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleDynamicsComponent_eventSelectGear_Parms, SelectNum), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleDynamicsComponent_SelectGear_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleDynamicsComponent_SelectGear_Statics::NewProp_SelectNum,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleDynamicsComponent_SelectGear_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Event Functions\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event Functions" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleDynamicsComponent_SelectGear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleDynamicsComponent, nullptr, "SelectGear", nullptr, nullptr, Z_Construct_UFunction_UVehicleDynamicsComponent_SelectGear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_SelectGear_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleDynamicsComponent_SelectGear_Statics::VehicleDynamicsComponent_eventSelectGear_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_SelectGear_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleDynamicsComponent_SelectGear_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_SelectGear_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVehicleDynamicsComponent_SelectGear_Statics::VehicleDynamicsComponent_eventSelectGear_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVehicleDynamicsComponent_SelectGear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleDynamicsComponent_SelectGear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicleDynamicsComponent_SphereTraceGround_Statics
	{
		struct VehicleDynamicsComponent_eventSphereTraceGround_Parms
		{
			int32 WheelIdx;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_WheelIdx;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVehicleDynamicsComponent_SphereTraceGround_Statics::NewProp_WheelIdx = { "WheelIdx", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleDynamicsComponent_eventSphereTraceGround_Parms, WheelIdx), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleDynamicsComponent_SphereTraceGround_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleDynamicsComponent_SphereTraceGround_Statics::NewProp_WheelIdx,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleDynamicsComponent_SphereTraceGround_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Calc Functions\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calc Functions" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleDynamicsComponent_SphereTraceGround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleDynamicsComponent, nullptr, "SphereTraceGround", nullptr, nullptr, Z_Construct_UFunction_UVehicleDynamicsComponent_SphereTraceGround_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_SphereTraceGround_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleDynamicsComponent_SphereTraceGround_Statics::VehicleDynamicsComponent_eventSphereTraceGround_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_SphereTraceGround_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleDynamicsComponent_SphereTraceGround_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_SphereTraceGround_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVehicleDynamicsComponent_SphereTraceGround_Statics::VehicleDynamicsComponent_eventSphereTraceGround_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVehicleDynamicsComponent_SphereTraceGround()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleDynamicsComponent_SphereTraceGround_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicleDynamicsComponent_TickVehicle_Statics
	{
		struct VehicleDynamicsComponent_eventTickVehicle_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleDynamicsComponent_TickVehicle_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleDynamicsComponent_eventTickVehicle_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleDynamicsComponent_TickVehicle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleDynamicsComponent_TickVehicle_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleDynamicsComponent_TickVehicle_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd SkeletalMesh\xef\xbf\xbd\xef\xbf\xbd Bone \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb8\xef\xbf\xbd \xef\xbf\xbd\xe8\xbf\xad\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd SkeletalMesh\xef\xbf\xbd\xef\xbf\xbd Bone \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb8\xef\xbf\xbd \xef\xbf\xbd\xe8\xbf\xad\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleDynamicsComponent_TickVehicle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleDynamicsComponent, nullptr, "TickVehicle", nullptr, nullptr, Z_Construct_UFunction_UVehicleDynamicsComponent_TickVehicle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_TickVehicle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleDynamicsComponent_TickVehicle_Statics::VehicleDynamicsComponent_eventTickVehicle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_TickVehicle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleDynamicsComponent_TickVehicle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_TickVehicle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVehicleDynamicsComponent_TickVehicle_Statics::VehicleDynamicsComponent_eventTickVehicle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVehicleDynamicsComponent_TickVehicle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleDynamicsComponent_TickVehicle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVehicleDynamicsComponent);
	UClass* Z_Construct_UClass_UVehicleDynamicsComponent_NoRegister()
	{
		return UVehicleDynamicsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVehicleDynamicsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccelRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AccelRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrakeRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakeRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxClimbingAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxClimbingAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Surfacefriction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Surfacefriction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DragCoeff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DragCoeff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedGearNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedGearNum;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GearMaxSpeedArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GearMaxSpeedArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GearMaxSpeedArray;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GearAccelerationArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GearAccelerationArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GearAccelerationArray;
		static const UECodeGen_Private::FIntPropertyParams NewProp_GearForwardArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GearForwardArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GearForwardArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMaxSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseMaxSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityForceCoeff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityForceCoeff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalcInterval_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CalcInterval;
		static const UECodeGen_Private::FNamePropertyParams NewProp_WheelBonesArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelBonesArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WheelBonesArray;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TrackBonesArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackBonesArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackBonesArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WheelBaseOffset_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelBaseOffset_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WheelBaseOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamperStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamperStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RestLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalMass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalMass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyRotateScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BodyRotateScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalForce_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FinalForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalBodyLoc_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FinalBodyLoc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalBodyRot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FinalBodyRot;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FinalWheelsLoc_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalWheelsLoc_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FinalWheelsLoc;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FinalGroundedLoc_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinalGroundedLoc_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FinalGroundedLoc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThrottleAxis_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrottleAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SteeringAxis_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SteeringAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeerNum_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GeerNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawTrace_MetaData[];
#endif
		static void NewProp_bDrawTrace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawTrace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBodyRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentBodyRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerSkeletalMeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerSkeletalMeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPawnMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPawnMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrevVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrevVelocity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroundHitPoint_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundHitPoint_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GroundHitPoint;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SuspensionCompression_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuspensionCompression_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SuspensionCompression;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PrevSuspensionCompression_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrevSuspensionCompression_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PrevSuspensionCompression;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWheelGrounded_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWheelGrounded_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bWheelGrounded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVehicleDynamicsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VehicleDynamicsPlugin,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVehicleDynamicsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyFinalTransform, "ApplyFinalTransform" }, // 395246450
		{ &Z_Construct_UFunction_UVehicleDynamicsComponent_BeginSetting, "BeginSetting" }, // 198088463
		{ &Z_Construct_UFunction_UVehicleDynamicsComponent_CalcDragForce, "CalcDragForce" }, // 1416402214
		{ &Z_Construct_UFunction_UVehicleDynamicsComponent_CalcGravityForce, "CalcGravityForce" }, // 1543093040
		{ &Z_Construct_UFunction_UVehicleDynamicsComponent_CalcImpactForce, "CalcImpactForce" }, // 1604931962
		{ &Z_Construct_UFunction_UVehicleDynamicsComponent_CalcSuspensionForce, "CalcSuspensionForce" }, // 3599356934
		{ &Z_Construct_UFunction_UVehicleDynamicsComponent_CalcVelocity, "CalcVelocity" }, // 3303626195
		{ &Z_Construct_UFunction_UVehicleDynamicsComponent_SelectGear, "SelectGear" }, // 1537967836
		{ &Z_Construct_UFunction_UVehicleDynamicsComponent_SphereTraceGround, "SphereTraceGround" }, // 1203481461
		{ &Z_Construct_UFunction_UVehicleDynamicsComponent_TickVehicle, "TickVehicle" }, // 1972325594
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "VehicleDynamicsComponent.h" },
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_AccelRate_MetaData[] = {
		{ "Category", "VelocityParam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Calc Setting Param : \xef\xbf\xbd\xe2\xba\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd K1A2 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calc Setting Param : \xef\xbf\xbd\xe2\xba\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd K1A2 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_AccelRate = { "AccelRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, AccelRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_AccelRate_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_AccelRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_BrakeRate_MetaData[] = {
		{ "Category", "VelocityParam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_BrakeRate = { "BrakeRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, BrakeRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_BrakeRate_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_BrakeRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_MaxClimbingAngle_MetaData[] = {
		{ "Category", "VelocityParam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_MaxClimbingAngle = { "MaxClimbingAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, MaxClimbingAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_MaxClimbingAngle_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_MaxClimbingAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_Surfacefriction_MetaData[] = {
		{ "Category", "VelocityParam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_Surfacefriction = { "Surfacefriction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, Surfacefriction), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_Surfacefriction_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_Surfacefriction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_DragCoeff_MetaData[] = {
		{ "Category", "VelocityParam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//  \xc7\xa5\xef\xbf\xbd\xe9\xb8\xb6\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc7\xa5\xef\xbf\xbd\xe9\xb8\xb6\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_DragCoeff = { "DragCoeff", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, DragCoeff), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_DragCoeff_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_DragCoeff_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SelectedGearNum_MetaData[] = {
		{ "Category", "VelocityParam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd) 0 ~ 1\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd) 0 ~ 1" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SelectedGearNum = { "SelectedGearNum", nullptr, (EPropertyFlags)0x0010000000000035, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, SelectedGearNum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SelectedGearNum_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SelectedGearNum_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GearMaxSpeedArray_Inner = { "GearMaxSpeedArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GearMaxSpeedArray_MetaData[] = {
		{ "Category", "VelocityParam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xbc\xef\xbf\xbd - \xef\xbf\xbd\xe2\xba\xbb\xef\xbf\xbd\xef\xbf\xbd : \xc3\xb9\xef\xbf\xbd\xef\xbf\xbd\xc2\xb0 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xbc\xef\xbf\xbd - \xef\xbf\xbd\xe2\xba\xbb\xef\xbf\xbd\xef\xbf\xbd : \xc3\xb9\xef\xbf\xbd\xef\xbf\xbd\xc2\xb0 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GearMaxSpeedArray = { "GearMaxSpeedArray", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, GearMaxSpeedArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GearMaxSpeedArray_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GearMaxSpeedArray_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GearAccelerationArray_Inner = { "GearAccelerationArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GearAccelerationArray_MetaData[] = {
		{ "Category", "VelocityParam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xee\xba\xb0 \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd \xef\xbf\xbd\xe8\xbf\xad(cm/s)\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xee\xba\xb0 \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd \xef\xbf\xbd\xe8\xbf\xad(cm/s)" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GearAccelerationArray = { "GearAccelerationArray", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, GearAccelerationArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GearAccelerationArray_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GearAccelerationArray_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GearForwardArray_Inner = { "GearForwardArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GearForwardArray_MetaData[] = {
		{ "Category", "VelocityParam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xee\xba\xb0 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb5\xef\xbf\xbd \xef\xbf\xbd\xe8\xbf\xad(cm/s)\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xee\xba\xb0 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb5\xef\xbf\xbd \xef\xbf\xbd\xe8\xbf\xad(cm/s)" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GearForwardArray = { "GearForwardArray", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, GearForwardArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GearForwardArray_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GearForwardArray_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_BaseMaxSpeed_MetaData[] = {
		{ "Category", "VelocityParam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xc8\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (0,1,2)\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xc8\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (0,1,2)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_BaseMaxSpeed = { "BaseMaxSpeed", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, BaseMaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_BaseMaxSpeed_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_BaseMaxSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_BaseAcceleration_MetaData[] = {
		{ "Category", "VelocityParam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xee\xba\xb0 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\xd3\xb5\xef\xbf\xbd(cm/s)\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xee\xba\xb0 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\xd3\xb5\xef\xbf\xbd(cm/s)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_BaseAcceleration = { "BaseAcceleration", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, BaseAcceleration), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_BaseAcceleration_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_BaseAcceleration_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GravityForceCoeff_MetaData[] = {
		{ "Category", "VelocityParam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xee\xba\xb0 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb5\xef\xbf\xbd(cm/s)\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xee\xba\xb0 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb5\xef\xbf\xbd(cm/s)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GravityForceCoeff = { "GravityForceCoeff", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, GravityForceCoeff), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GravityForceCoeff_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GravityForceCoeff_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_CalcInterval_MetaData[] = {
		{ "Category", "VelocityParam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xdf\xb7\xc2\xb0\xef\xbf\xbd\xef\xbf\xbd\xd3\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd 9.8 (cm/s^2)\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xdf\xb7\xc2\xb0\xef\xbf\xbd\xef\xbf\xbd\xd3\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd 9.8 (cm/s^2)" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_CalcInterval = { "CalcInterval", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, CalcInterval), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_CalcInterval_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_CalcInterval_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelBonesArray_Inner = { "WheelBonesArray", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelBonesArray_MetaData[] = {
		{ "Category", "Wheel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Vehicle Setting Param\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vehicle Setting Param" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelBonesArray = { "WheelBonesArray", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, WheelBonesArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelBonesArray_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelBonesArray_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_TrackBonesArray_Inner = { "TrackBonesArray", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_TrackBonesArray_MetaData[] = {
		{ "Category", "Wheel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xe8\xbf\xad \xef\xbf\xbd\xef\xbf\xbd\xc4\xaa\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xe8\xbf\xad \xef\xbf\xbd\xef\xbf\xbd\xc4\xaa\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_TrackBonesArray = { "TrackBonesArray", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, TrackBonesArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_TrackBonesArray_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_TrackBonesArray_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelBaseOffset_Inner = { "WheelBaseOffset", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelBaseOffset_MetaData[] = {
		{ "Category", "Wheel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xe8\xbf\xad \xef\xbf\xbd\xef\xbf\xbd\xc4\xaa\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xe8\xbf\xad \xef\xbf\xbd\xef\xbf\xbd\xc4\xaa\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelBaseOffset = { "WheelBaseOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, WheelBaseOffset), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelBaseOffset_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelBaseOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelRadius_MetaData[] = {
		{ "Category", "Wheel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xa1(\xef\xbf\xbd\xe2\xba\xbb \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1)\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc4\xa1(\xef\xbf\xbd\xe2\xba\xbb \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelRadius = { "WheelRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, WheelRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelRadius_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SpringStiffness_MetaData[] = {
		{ "Category", "Suspension" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = \"Suspension\") float SpringMaxExtension = 30; // \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (cm)\n//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = \"Suspension\") float SpringMinExtension = 5; // \xef\xbf\xbd\xd6\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (cm)\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = \"Suspension\") float SpringMaxExtension = 30;  \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (cm)\nUPROPERTY(EditAnywhere, BlueprintReadOnly, Category = \"Suspension\") float SpringMinExtension = 5;  \xef\xbf\xbd\xd6\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (cm)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SpringStiffness = { "SpringStiffness", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, SpringStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SpringStiffness_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SpringStiffness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_DamperStiffness_MetaData[] = {
		{ "Category", "Suspension" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_DamperStiffness = { "DamperStiffness", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, DamperStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_DamperStiffness_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_DamperStiffness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_RestLength_MetaData[] = {
		{ "Category", "Suspension" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_RestLength = { "RestLength", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, RestLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_RestLength_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_RestLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_TotalMass_MetaData[] = {
		{ "Category", "Body" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (cm)\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (cm)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_TotalMass = { "TotalMass", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, TotalMass), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_TotalMass_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_TotalMass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_BodyBox_MetaData[] = {
		{ "Category", "Body" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(kg)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(kg)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_BodyBox = { "BodyBox", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, BodyBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_BodyBox_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_BodyBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_BodyRotateScale_MetaData[] = {
		{ "Category", "Body" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xdf\xbd\xef\xbf\xbd \xef\xbf\xbd\xda\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xdf\xbd\xef\xbf\xbd \xef\xbf\xbd\xda\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_BodyRotateScale = { "BodyRotateScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, BodyRotateScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_BodyRotateScale_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_BodyRotateScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_FinalForce_MetaData[] = {
		{ "Category", "FinalValue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_FinalForce = { "FinalForce", nullptr, (EPropertyFlags)0x0010000000000035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, FinalForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_FinalForce_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_FinalForce_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_FinalBodyLoc_MetaData[] = {
		{ "Category", "FinalValue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xc5\xa9\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xc5\xa9\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_FinalBodyLoc = { "FinalBodyLoc", nullptr, (EPropertyFlags)0x0010000000000035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, FinalBodyLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_FinalBodyLoc_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_FinalBodyLoc_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_FinalBodyRot_MetaData[] = {
		{ "Category", "FinalValue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_FinalBodyRot = { "FinalBodyRot", nullptr, (EPropertyFlags)0x0010000000000035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, FinalBodyRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_FinalBodyRot_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_FinalBodyRot_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_FinalWheelsLoc_Inner = { "FinalWheelsLoc", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_FinalWheelsLoc_MetaData[] = {
		{ "Category", "FinalValue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xc8\xb8\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xc8\xb8\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_FinalWheelsLoc = { "FinalWheelsLoc", nullptr, (EPropertyFlags)0x0010000000000035, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, FinalWheelsLoc), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_FinalWheelsLoc_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_FinalWheelsLoc_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_FinalGroundedLoc_Inner = { "FinalGroundedLoc", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_FinalGroundedLoc_MetaData[] = {
		{ "Category", "FinalValue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_FinalGroundedLoc = { "FinalGroundedLoc", nullptr, (EPropertyFlags)0x0010000000000035, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, FinalGroundedLoc), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_FinalGroundedLoc_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_FinalGroundedLoc_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ThrottleAxis_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1(\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1(\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ThrottleAxis = { "ThrottleAxis", nullptr, (EPropertyFlags)0x0010000000020021, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, ThrottleAxis), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ThrottleAxis_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ThrottleAxis_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SteeringAxis_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xb2 \xef\xbf\xbd\xef\xbf\xbd\xc7\xb2\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xb2 \xef\xbf\xbd\xef\xbf\xbd\xc7\xb2" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SteeringAxis = { "SteeringAxis", nullptr, (EPropertyFlags)0x0010000000020021, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, SteeringAxis), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SteeringAxis_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SteeringAxis_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GeerNum_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc7\xb2\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc7\xb2" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GeerNum = { "GeerNum", nullptr, (EPropertyFlags)0x0010000000000021, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, GeerNum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GeerNum_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GeerNum_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_bDrawTrace_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc7\xb2\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc7\xb2" },
#endif
	};
#endif
	void Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_bDrawTrace_SetBit(void* Obj)
	{
		((UVehicleDynamicsComponent*)Obj)->bDrawTrace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_bDrawTrace = { "bDrawTrace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVehicleDynamicsComponent), &Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_bDrawTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_bDrawTrace_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_bDrawTrace_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_CurrentBodyRotation_MetaData[] = {
		{ "Category", "CalcState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc9\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc9\xbc\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_CurrentBodyRotation = { "CurrentBodyRotation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, CurrentBodyRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_CurrentBodyRotation_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_CurrentBodyRotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_OwnerSkeletalMeshComp_MetaData[] = {
		{ "Category", "CalcState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xc8\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe5\xb0\xaa\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xc8\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe5\xb0\xaa" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_OwnerSkeletalMeshComp = { "OwnerSkeletalMeshComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, OwnerSkeletalMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_OwnerSkeletalMeshComp_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_OwnerSkeletalMeshComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_OwnerPawnMovement_MetaData[] = {
		{ "Category", "CalcState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb7\xef\xbf\xbd\xc5\xbb \xef\xbf\xbd\xde\xbd\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb7\xef\xbf\xbd\xc5\xbb \xef\xbf\xbd\xde\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_OwnerPawnMovement = { "OwnerPawnMovement", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, OwnerPawnMovement), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_OwnerPawnMovement_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_OwnerPawnMovement_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_CurrentVelocity_MetaData[] = {
		{ "Category", "RuntimeState" },
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_CurrentVelocity = { "CurrentVelocity", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, CurrentVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_CurrentVelocity_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_CurrentVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_PrevVelocity_MetaData[] = {
		{ "Category", "RuntimeState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd (cm/s)\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd (cm/s)" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_PrevVelocity = { "PrevVelocity", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, PrevVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_PrevVelocity_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_PrevVelocity_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GroundHitPoint_Inner = { "GroundHitPoint", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GroundHitPoint_MetaData[] = {
		{ "Category", "RuntimeState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd (cm/s)\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd (cm/s)" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GroundHitPoint = { "GroundHitPoint", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, GroundHitPoint), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GroundHitPoint_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GroundHitPoint_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SuspensionCompression_Inner = { "SuspensionCompression", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SuspensionCompression_MetaData[] = {
		{ "Category", "RuntimeState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// SphereTrace \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SphereTrace \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SuspensionCompression = { "SuspensionCompression", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, SuspensionCompression), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SuspensionCompression_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SuspensionCompression_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_PrevSuspensionCompression_Inner = { "PrevSuspensionCompression", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_PrevSuspensionCompression_MetaData[] = {
		{ "Category", "RuntimeState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe0\xb7\xae(cm)\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe0\xb7\xae(cm)" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_PrevSuspensionCompression = { "PrevSuspensionCompression", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, PrevSuspensionCompression), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_PrevSuspensionCompression_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_PrevSuspensionCompression_MetaData) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_bWheelGrounded_Inner = { "bWheelGrounded", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_bWheelGrounded_MetaData[] = {
		{ "Category", "RuntimeState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe0\xb7\xae(cm)\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe0\xb7\xae(cm)" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_bWheelGrounded = { "bWheelGrounded", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, bWheelGrounded), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_bWheelGrounded_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_bWheelGrounded_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVehicleDynamicsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_AccelRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_BrakeRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_MaxClimbingAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_Surfacefriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_DragCoeff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SelectedGearNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GearMaxSpeedArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GearMaxSpeedArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GearAccelerationArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GearAccelerationArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GearForwardArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GearForwardArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_BaseMaxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_BaseAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GravityForceCoeff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_CalcInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelBonesArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelBonesArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_TrackBonesArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_TrackBonesArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelBaseOffset_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelBaseOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SpringStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_DamperStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_RestLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_TotalMass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_BodyBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_BodyRotateScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_FinalForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_FinalBodyLoc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_FinalBodyRot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_FinalWheelsLoc_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_FinalWheelsLoc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_FinalGroundedLoc_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_FinalGroundedLoc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ThrottleAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SteeringAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GeerNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_bDrawTrace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_CurrentBodyRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_OwnerSkeletalMeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_OwnerPawnMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_CurrentVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_PrevVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GroundHitPoint_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GroundHitPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SuspensionCompression_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SuspensionCompression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_PrevSuspensionCompression_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_PrevSuspensionCompression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_bWheelGrounded_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_bWheelGrounded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVehicleDynamicsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVehicleDynamicsComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::ClassParams = {
		&UVehicleDynamicsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVehicleDynamicsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UVehicleDynamicsComponent()
	{
		if (!Z_Registration_Info_UClass_UVehicleDynamicsComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVehicleDynamicsComponent.OuterSingleton, Z_Construct_UClass_UVehicleDynamicsComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVehicleDynamicsComponent.OuterSingleton;
	}
	template<> VEHICLEDYNAMICSPLUGIN_API UClass* StaticClass<UVehicleDynamicsComponent>()
	{
		return UVehicleDynamicsComponent::StaticClass();
	}

	void UVehicleDynamicsComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_SelectedGearNum(TEXT("SelectedGearNum"));
		static const FName Name_FinalForce(TEXT("FinalForce"));
		static const FName Name_FinalBodyLoc(TEXT("FinalBodyLoc"));
		static const FName Name_FinalBodyRot(TEXT("FinalBodyRot"));
		static const FName Name_FinalWheelsLoc(TEXT("FinalWheelsLoc"));
		static const FName Name_FinalGroundedLoc(TEXT("FinalGroundedLoc"));
		static const FName Name_ThrottleAxis(TEXT("ThrottleAxis"));
		static const FName Name_SteeringAxis(TEXT("SteeringAxis"));
		static const FName Name_GeerNum(TEXT("GeerNum"));

		const bool bIsValid = true
			&& Name_SelectedGearNum == ClassReps[(int32)ENetFields_Private::SelectedGearNum].Property->GetFName()
			&& Name_FinalForce == ClassReps[(int32)ENetFields_Private::FinalForce].Property->GetFName()
			&& Name_FinalBodyLoc == ClassReps[(int32)ENetFields_Private::FinalBodyLoc].Property->GetFName()
			&& Name_FinalBodyRot == ClassReps[(int32)ENetFields_Private::FinalBodyRot].Property->GetFName()
			&& Name_FinalWheelsLoc == ClassReps[(int32)ENetFields_Private::FinalWheelsLoc].Property->GetFName()
			&& Name_FinalGroundedLoc == ClassReps[(int32)ENetFields_Private::FinalGroundedLoc].Property->GetFName()
			&& Name_ThrottleAxis == ClassReps[(int32)ENetFields_Private::ThrottleAxis].Property->GetFName()
			&& Name_SteeringAxis == ClassReps[(int32)ENetFields_Private::SteeringAxis].Property->GetFName()
			&& Name_GeerNum == ClassReps[(int32)ENetFields_Private::GeerNum].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UVehicleDynamicsComponent"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVehicleDynamicsComponent);
	UVehicleDynamicsComponent::~UVehicleDynamicsComponent() {}
	struct Z_CompiledInDeferFile_FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVehicleDynamicsComponent, UVehicleDynamicsComponent::StaticClass, TEXT("UVehicleDynamicsComponent"), &Z_Registration_Info_UClass_UVehicleDynamicsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVehicleDynamicsComponent), 3120312855U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_3914546613(TEXT("/Script/VehicleDynamicsPlugin"),
		Z_CompiledInDeferFile_FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
