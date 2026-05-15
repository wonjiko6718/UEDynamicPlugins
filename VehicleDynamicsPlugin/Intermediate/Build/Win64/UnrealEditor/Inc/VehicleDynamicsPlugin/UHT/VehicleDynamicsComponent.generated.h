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

#define FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_13_SPARSE_DATA
#define FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyPosture); \
	DECLARE_FUNCTION(execCalcVelocity); \
	DECLARE_FUNCTION(execSphereTraceGround); \
	DECLARE_FUNCTION(execCalcSuspensionForce); \
	DECLARE_FUNCTION(execApplyGravity); \
	DECLARE_FUNCTION(execTickVehicle); \
	DECLARE_FUNCTION(execBeginSetting);


#define FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_13_ACCESSORS
#define FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVehicleDynamicsComponent(); \
	friend struct Z_Construct_UClass_UVehicleDynamicsComponent_Statics; \
public: \
	DECLARE_CLASS(UVehicleDynamicsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VehicleDynamicsPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVehicleDynamicsComponent)


#define FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVehicleDynamicsComponent(UVehicleDynamicsComponent&&); \
	NO_API UVehicleDynamicsComponent(const UVehicleDynamicsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVehicleDynamicsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehicleDynamicsComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVehicleDynamicsComponent) \
	NO_API virtual ~UVehicleDynamicsComponent();


#define FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_10_PROLOG
#define FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_13_SPARSE_DATA \
	FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_13_ACCESSORS \
	FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VEHICLEDYNAMICSPLUGIN_API UClass* StaticClass<class UVehicleDynamicsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CustomPluginsProject_Plugins_VehicleDynamicsPlugin_Source_VehicleDynamicsPlugin_Public_VehicleDynamicsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
