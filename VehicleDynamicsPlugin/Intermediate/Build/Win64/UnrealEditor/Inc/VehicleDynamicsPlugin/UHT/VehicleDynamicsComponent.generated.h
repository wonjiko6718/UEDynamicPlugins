// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VehicleDynamicsComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VEHICLEDYNAMICSPLUGIN_VehicleDynamicsComponent_generated_h
#error "VehicleDynamicsComponent.generated.h already included, missing '#pragma once' in VehicleDynamicsComponent.h"
#endif
#define VEHICLEDYNAMICSPLUGIN_VehicleDynamicsComponent_generated_h

#define FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_14_SPARSE_DATA
#define FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void CallSteering_Implementation(float InputAxis); \
	virtual void CallThrotlle_Implementation(float InputAxis); \
 \
	DECLARE_FUNCTION(execApplyReplicatedTransform); \
	DECLARE_FUNCTION(execApplyFinalTransform); \
	DECLARE_FUNCTION(execCalcVelocity); \
	DECLARE_FUNCTION(execCalcImpactForce); \
	DECLARE_FUNCTION(execCalcInertiaForce); \
	DECLARE_FUNCTION(execCalcDragForce); \
	DECLARE_FUNCTION(execCalcSuspensionForce); \
	DECLARE_FUNCTION(execCalcGravityForce); \
	DECLARE_FUNCTION(execCalcDriveForce); \
	DECLARE_FUNCTION(execSphereTraceGround); \
	DECLARE_FUNCTION(execCallSteering); \
	DECLARE_FUNCTION(execCallThrotlle); \
	DECLARE_FUNCTION(execSelectGear); \
	DECLARE_FUNCTION(execTickVehicle); \
	DECLARE_FUNCTION(execBeginSetting);


#define FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_14_ACCESSORS
#define FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_14_CALLBACK_WRAPPERS
#define FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVehicleDynamicsComponent(); \
	friend struct Z_Construct_UClass_UVehicleDynamicsComponent_Statics; \
public: \
	DECLARE_CLASS(UVehicleDynamicsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VehicleDynamicsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVehicleDynamicsComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SelectedGearNum=NETFIELD_REP_START, \
		FinalForce, \
		FinalBodyLoc, \
		FinalBodyRot, \
		FinalWheelsLoc, \
		FinalGroundedLoc, \
		ThrottleInput, \
		SteeringInput, \
		GeerNum, \
		NETFIELD_REP_END=GeerNum	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVehicleDynamicsComponent(UVehicleDynamicsComponent&&); \
	NO_API UVehicleDynamicsComponent(const UVehicleDynamicsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVehicleDynamicsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehicleDynamicsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVehicleDynamicsComponent) \
	NO_API virtual ~UVehicleDynamicsComponent();


#define FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_11_PROLOG
#define FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_14_SPARSE_DATA \
	FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_14_ACCESSORS \
	FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_14_CALLBACK_WRAPPERS \
	FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VEHICLEDYNAMICSPLUGIN_API UClass* StaticClass<class UVehicleDynamicsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
