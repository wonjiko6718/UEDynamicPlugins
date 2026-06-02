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
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VehicleDynamicsPlugin();
	VEHICLEDYNAMICSPLUGIN_API UClass* Z_Construct_UClass_UVehicleDynamicsComponent();
	VEHICLEDYNAMICSPLUGIN_API UClass* Z_Construct_UClass_UVehicleDynamicsComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVehicleDynamicsComponent::execApplyPosture)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyPosture(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVehicleDynamicsComponent::execApplyImpact)
	{
		P_GET_STRUCT(FVector,Z_Param_ImpactForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyImpact(Z_Param_ImpactForce);
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
	DEFINE_FUNCTION(UVehicleDynamicsComponent::execSphereTraceGround)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_WheelIdx);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SphereTraceGround(Z_Param_WheelIdx);
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
	DEFINE_FUNCTION(UVehicleDynamicsComponent::execApplyGravity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyGravity(Z_Param_DeltaTime);
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
			{ "ApplyGravity", &UVehicleDynamicsComponent::execApplyGravity },
			{ "ApplyImpact", &UVehicleDynamicsComponent::execApplyImpact },
			{ "ApplyPosture", &UVehicleDynamicsComponent::execApplyPosture },
			{ "BeginSetting", &UVehicleDynamicsComponent::execBeginSetting },
			{ "CalcSuspensionForce", &UVehicleDynamicsComponent::execCalcSuspensionForce },
			{ "CalcVelocity", &UVehicleDynamicsComponent::execCalcVelocity },
			{ "SelectGear", &UVehicleDynamicsComponent::execSelectGear },
			{ "SphereTraceGround", &UVehicleDynamicsComponent::execSphereTraceGround },
			{ "TickVehicle", &UVehicleDynamicsComponent::execTickVehicle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyGravity_Statics
	{
		struct VehicleDynamicsComponent_eventApplyGravity_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyGravity_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleDynamicsComponent_eventApplyGravity_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyGravity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyGravity_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyGravity_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Calc Functions\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calc Functions" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyGravity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleDynamicsComponent, nullptr, "ApplyGravity", nullptr, nullptr, Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyGravity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyGravity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyGravity_Statics::VehicleDynamicsComponent_eventApplyGravity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyGravity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyGravity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyGravity_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyGravity_Statics::VehicleDynamicsComponent_eventApplyGravity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyGravity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyGravity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyImpact_Statics
	{
		struct VehicleDynamicsComponent_eventApplyImpact_Parms
		{
			FVector ImpactForce;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactForce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyImpact_Statics::NewProp_ImpactForce = { "ImpactForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleDynamicsComponent_eventApplyImpact_Parms, ImpactForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyImpact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyImpact_Statics::NewProp_ImpactForce,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyImpact_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd3\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyImpact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleDynamicsComponent, nullptr, "ApplyImpact", nullptr, nullptr, Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyImpact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyImpact_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyImpact_Statics::VehicleDynamicsComponent_eventApplyImpact_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyImpact_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyImpact_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyImpact_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyImpact_Statics::VehicleDynamicsComponent_eventApplyImpact_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyImpact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyImpact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyPosture_Statics
	{
		struct VehicleDynamicsComponent_eventApplyPosture_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyPosture_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleDynamicsComponent_eventApplyPosture_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyPosture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyPosture_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyPosture_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd - \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd - \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyPosture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleDynamicsComponent, nullptr, "ApplyPosture", nullptr, nullptr, Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyPosture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyPosture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyPosture_Statics::VehicleDynamicsComponent_eventApplyPosture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyPosture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyPosture_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyPosture_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyPosture_Statics::VehicleDynamicsComponent_eventApplyPosture_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyPosture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyPosture_Statics::FuncParams);
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
		{ "Comment", "// \xef\xbf\xbd\xdf\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, Z\xef\xbf\xbd\xef\xbf\xbd\xc4\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xdf\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, Z\xef\xbf\xbd\xef\xbf\xbd\xc4\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
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
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbd\xef\xbf\xbd - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1 \xc8\xae\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbd\xef\xbf\xbd - \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1 \xc8\xae\xef\xbf\xbd\xef\xbf\xbd" },
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
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd)" },
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnergyLossRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EnergyLossRate;
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
		static const UECodeGen_Private::FStructPropertyParams NewProp_WheelOffset_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelOffset_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WheelOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelMass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelMass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelSmoothing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelSmoothing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringMaxExtension_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringMaxExtension;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringMinExtension_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringMinExtension;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DampingCoeff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DampingCoeff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RestLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalMass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalMass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterOfMass_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CenterOfMass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRollAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRollAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPitchAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPitchAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodySmoothing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BodySmoothing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostureScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PostureScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactInputScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactInputScale;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactPitchVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactPitchVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactRollVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactRollVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactPitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImpactRoll_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImpactRoll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuspensionForceSum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SuspensionForceSum;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroundHitPoint_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundHitPoint_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GroundHitPoint;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelHeight_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WheelHeight_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WheelHeight;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SuspVelocity_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuspVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SuspVelocity;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGrounded_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsGrounded_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bIsGrounded;
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
		{ &Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyGravity, "ApplyGravity" }, // 3997423823
		{ &Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyImpact, "ApplyImpact" }, // 734475451
		{ &Z_Construct_UFunction_UVehicleDynamicsComponent_ApplyPosture, "ApplyPosture" }, // 2370297171
		{ &Z_Construct_UFunction_UVehicleDynamicsComponent_BeginSetting, "BeginSetting" }, // 198088463
		{ &Z_Construct_UFunction_UVehicleDynamicsComponent_CalcSuspensionForce, "CalcSuspensionForce" }, // 2394198387
		{ &Z_Construct_UFunction_UVehicleDynamicsComponent_CalcVelocity, "CalcVelocity" }, // 3030445705
		{ &Z_Construct_UFunction_UVehicleDynamicsComponent_SelectGear, "SelectGear" }, // 1537967836
		{ &Z_Construct_UFunction_UVehicleDynamicsComponent_SphereTraceGround, "SphereTraceGround" }, // 3818420779
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
		{ "Comment", "//Calc Setting Param\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calc Setting Param" },
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_EnergyLossRate_MetaData[] = {
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_EnergyLossRate = { "EnergyLossRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, EnergyLossRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_EnergyLossRate_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_EnergyLossRate_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_CalcInterval_MetaData[] = {
		{ "Category", "VelocityParam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xdf\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xe8\xbf\xad)\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xdf\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xe8\xbf\xad)" },
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelOffset_Inner = { "WheelOffset", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelOffset_MetaData[] = {
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
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelOffset = { "WheelOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, WheelOffset), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelOffset_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelOffset_MetaData) };
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelMass_MetaData[] = {
		{ "Category", "Wheel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdd\xb0\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd) - SphereTrace\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdd\xb0\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd) - SphereTrace\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelMass = { "WheelMass", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, WheelMass), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelMass_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelMass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelSmoothing_MetaData[] = {
		{ "Category", "Wheel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (kg)\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (kg)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelSmoothing = { "WheelSmoothing", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, WheelSmoothing), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelSmoothing_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelSmoothing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SpringMaxExtension_MetaData[] = {
		{ "Category", "Suspension" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd - \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xb5\xe5\xb7\xaf\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd - \xef\xbf\xbd\xc3\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xb5\xe5\xb7\xaf\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SpringMaxExtension = { "SpringMaxExtension", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, SpringMaxExtension), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SpringMaxExtension_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SpringMaxExtension_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SpringMinExtension_MetaData[] = {
		{ "Category", "Suspension" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (cm)\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (cm)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SpringMinExtension = { "SpringMinExtension", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, SpringMinExtension), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SpringMinExtension_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SpringMinExtension_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SpringStiffness_MetaData[] = {
		{ "Category", "Suspension" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd6\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (cm)\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd6\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (cm)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SpringStiffness = { "SpringStiffness", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, SpringStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SpringStiffness_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SpringStiffness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_DampingCoeff_MetaData[] = {
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_DampingCoeff = { "DampingCoeff", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, DampingCoeff), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_DampingCoeff_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_DampingCoeff_MetaData) };
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_RestLength = { "RestLength", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, RestLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_RestLength_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_RestLength_MetaData) };
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_CenterOfMass_MetaData[] = {
		{ "Category", "Body" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(kg)\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(kg)" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_CenterOfMass = { "CenterOfMass", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, CenterOfMass), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_CenterOfMass_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_CenterOfMass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_MaxRollAngle_MetaData[] = {
		{ "Category", "Body" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_MaxRollAngle = { "MaxRollAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, MaxRollAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_MaxRollAngle_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_MaxRollAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_MaxPitchAngle_MetaData[] = {
		{ "Category", "Body" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd Roll\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd Roll" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_MaxPitchAngle = { "MaxPitchAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, MaxPitchAngle), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_MaxPitchAngle_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_MaxPitchAngle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_BodySmoothing_MetaData[] = {
		{ "Category", "Body" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd Pitch\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd Pitch" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_BodySmoothing = { "BodySmoothing", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, BodySmoothing), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_BodySmoothing_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_BodySmoothing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_PostureScale_MetaData[] = {
		{ "Category", "Body" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc Interp \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc Interp \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_PostureScale = { "PostureScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, PostureScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_PostureScale_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_PostureScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactStiffness_MetaData[] = {
		{ "Category", "Body" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd (\xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xa9\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xad)\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd (\xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xa9\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xad)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactStiffness = { "ImpactStiffness", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, ImpactStiffness), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactStiffness_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactStiffness_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactDamping_MetaData[] = {
		{ "Category", "Body" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactDamping = { "ImpactDamping", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, ImpactDamping), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactDamping_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactDamping_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactInputScale_MetaData[] = {
		{ "Category", "Body" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactInputScale = { "ImpactInputScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, ImpactInputScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactInputScale_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactInputScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_FinalBodyLoc_MetaData[] = {
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
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc4\xa1" },
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactPitchVelocity_MetaData[] = {
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactPitchVelocity = { "ImpactPitchVelocity", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, ImpactPitchVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactPitchVelocity_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactPitchVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactRollVelocity_MetaData[] = {
		{ "Category", "RuntimeState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Pitch \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Pitch \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactRollVelocity = { "ImpactRollVelocity", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, ImpactRollVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactRollVelocity_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactRollVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactPitch_MetaData[] = {
		{ "Category", "RuntimeState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Roll \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Roll \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactPitch = { "ImpactPitch", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, ImpactPitch), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactPitch_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactPitch_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactRoll_MetaData[] = {
		{ "Category", "RuntimeState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Pitch\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Pitch" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactRoll = { "ImpactRoll", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, ImpactRoll), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactRoll_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactRoll_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GravityVelocity_MetaData[] = {
		{ "Category", "RuntimeState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Roll\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Roll" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GravityVelocity = { "GravityVelocity", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, GravityVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GravityVelocity_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GravityVelocity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SuspensionForceSum_MetaData[] = {
		{ "Category", "RuntimeState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xdf\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcf\xb0\xef\xbf\xbd\xef\xbf\xbd\xd3\xb5\xef\xbf\xbd (cm/s)\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xdf\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcf\xb0\xef\xbf\xbd\xef\xbf\xbd\xd3\xb5\xef\xbf\xbd (cm/s)" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SuspensionForceSum = { "SuspensionForceSum", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, SuspensionForceSum), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SuspensionForceSum_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SuspensionForceSum_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GroundHitPoint_Inner = { "GroundHitPoint", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GroundHitPoint_MetaData[] = {
		{ "Category", "RuntimeState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd0\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd0\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GroundHitPoint = { "GroundHitPoint", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, GroundHitPoint), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GroundHitPoint_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GroundHitPoint_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelHeight_Inner = { "WheelHeight", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelHeight_MetaData[] = {
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
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelHeight = { "WheelHeight", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, WheelHeight), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelHeight_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelHeight_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SuspVelocity_Inner = { "SuspVelocity", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SuspVelocity_MetaData[] = {
		{ "Category", "RuntimeState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb7\xef\xbf\xbd\xc5\xbb \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd - \xef\xbf\xbd\xc3\xbe\xee\xb3\xb2) (cm)\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb7\xef\xbf\xbd\xc5\xbb \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd - \xef\xbf\xbd\xc3\xbe\xee\xb3\xb2) (cm)" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SuspVelocity = { "SuspVelocity", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, SuspVelocity), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SuspVelocity_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SuspVelocity_MetaData) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_bIsGrounded_Inner = { "bIsGrounded", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_bIsGrounded_MetaData[] = {
		{ "Category", "RuntimeState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/VehicleDynamicsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_bIsGrounded = { "bIsGrounded", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleDynamicsComponent, bIsGrounded), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_bIsGrounded_MetaData), Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_bIsGrounded_MetaData) };
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
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_EnergyLossRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_CalcInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelBonesArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelBonesArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_TrackBonesArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_TrackBonesArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelOffset_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelMass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelSmoothing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SpringMaxExtension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SpringMinExtension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SpringStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_DampingCoeff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_RestLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_TotalMass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_CenterOfMass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_MaxRollAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_MaxPitchAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_BodySmoothing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_PostureScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactInputScale,
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
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactPitchVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactRollVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_ImpactRoll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GravityVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SuspensionForceSum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GroundHitPoint_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_GroundHitPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelHeight_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_WheelHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SuspVelocity_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_SuspVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_bIsGrounded_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleDynamicsComponent_Statics::NewProp_bIsGrounded,
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
		static const FName Name_FinalBodyLoc(TEXT("FinalBodyLoc"));
		static const FName Name_FinalBodyRot(TEXT("FinalBodyRot"));
		static const FName Name_FinalWheelsLoc(TEXT("FinalWheelsLoc"));
		static const FName Name_FinalGroundedLoc(TEXT("FinalGroundedLoc"));
		static const FName Name_ThrottleAxis(TEXT("ThrottleAxis"));
		static const FName Name_SteeringAxis(TEXT("SteeringAxis"));
		static const FName Name_GeerNum(TEXT("GeerNum"));

		const bool bIsValid = true
			&& Name_SelectedGearNum == ClassReps[(int32)ENetFields_Private::SelectedGearNum].Property->GetFName()
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
		{ Z_Construct_UClass_UVehicleDynamicsComponent, UVehicleDynamicsComponent::StaticClass, TEXT("UVehicleDynamicsComponent"), &Z_Registration_Info_UClass_UVehicleDynamicsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVehicleDynamicsComponent), 1829723255U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_2267050337(TEXT("/Script/VehicleDynamicsPlugin"),
		Z_CompiledInDeferFile_FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
