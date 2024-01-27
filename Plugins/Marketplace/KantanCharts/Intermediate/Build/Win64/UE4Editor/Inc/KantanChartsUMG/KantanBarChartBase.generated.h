// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCartesianAxisConfig;
enum class EKantanBarValueExtents : uint8;
enum class EKantanBarLabelPosition : uint8;
enum class EKantanBarChartOrientation : uint8;
#ifdef KANTANCHARTSUMG_KantanBarChartBase_generated_h
#error "KantanBarChartBase.generated.h already included, missing '#pragma once' in KantanBarChartBase.h"
#endif
#define KANTANCHARTSUMG_KantanBarChartBase_generated_h

#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanBarChartBase_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetValueAxisConfig) \
	{ \
		P_GET_STRUCT_REF(FCartesianAxisConfig,Z_Param_Out_InCfg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetValueAxisConfig(Z_Param_Out_InCfg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetExtentsDisplay) \
	{ \
		P_GET_ENUM(EKantanBarValueExtents,Z_Param_InExtents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetExtentsDisplay(EKantanBarValueExtents(Z_Param_InExtents)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBarToGapRatio) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InRatio); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBarToGapRatio(Z_Param_InRatio); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLabelPosition) \
	{ \
		P_GET_ENUM(EKantanBarLabelPosition,Z_Param_InPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLabelPosition(EKantanBarLabelPosition(Z_Param_InPosition)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxBarValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InMaxValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaxBarValue(Z_Param_InMaxValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOrientation) \
	{ \
		P_GET_ENUM(EKantanBarChartOrientation,Z_Param_InOrientation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOrientation(EKantanBarChartOrientation(Z_Param_InOrientation)); \
		P_NATIVE_END; \
	}


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanBarChartBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetValueAxisConfig) \
	{ \
		P_GET_STRUCT_REF(FCartesianAxisConfig,Z_Param_Out_InCfg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetValueAxisConfig(Z_Param_Out_InCfg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetExtentsDisplay) \
	{ \
		P_GET_ENUM(EKantanBarValueExtents,Z_Param_InExtents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetExtentsDisplay(EKantanBarValueExtents(Z_Param_InExtents)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBarToGapRatio) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InRatio); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBarToGapRatio(Z_Param_InRatio); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLabelPosition) \
	{ \
		P_GET_ENUM(EKantanBarLabelPosition,Z_Param_InPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLabelPosition(EKantanBarLabelPosition(Z_Param_InPosition)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxBarValue) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InMaxValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaxBarValue(Z_Param_InMaxValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOrientation) \
	{ \
		P_GET_ENUM(EKantanBarChartOrientation,Z_Param_InOrientation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOrientation(EKantanBarChartOrientation(Z_Param_InOrientation)); \
		P_NATIVE_END; \
	}


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanBarChartBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKantanBarChartBase(); \
	friend struct Z_Construct_UClass_UKantanBarChartBase_Statics; \
public: \
	DECLARE_CLASS(UKantanBarChartBase, UKantanCategoryChart, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/KantanChartsUMG"), NO_API) \
	DECLARE_SERIALIZER(UKantanBarChartBase)


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanBarChartBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUKantanBarChartBase(); \
	friend struct Z_Construct_UClass_UKantanBarChartBase_Statics; \
public: \
	DECLARE_CLASS(UKantanBarChartBase, UKantanCategoryChart, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/KantanChartsUMG"), NO_API) \
	DECLARE_SERIALIZER(UKantanBarChartBase)


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanBarChartBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKantanBarChartBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKantanBarChartBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKantanBarChartBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKantanBarChartBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKantanBarChartBase(UKantanBarChartBase&&); \
	NO_API UKantanBarChartBase(const UKantanBarChartBase&); \
public:


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanBarChartBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKantanBarChartBase(UKantanBarChartBase&&); \
	NO_API UKantanBarChartBase(const UKantanBarChartBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKantanBarChartBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKantanBarChartBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKantanBarChartBase)


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanBarChartBase_h_13_PRIVATE_PROPERTY_OFFSET
#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanBarChartBase_h_10_PROLOG
#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanBarChartBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanBarChartBase_h_13_PRIVATE_PROPERTY_OFFSET \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanBarChartBase_h_13_RPC_WRAPPERS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanBarChartBase_h_13_INCLASS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanBarChartBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanBarChartBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanBarChartBase_h_13_PRIVATE_PROPERTY_OFFSET \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanBarChartBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanBarChartBase_h_13_INCLASS_NO_PURE_DECLS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanBarChartBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KANTANCHARTSUMG_API UClass* StaticClass<class UKantanBarChartBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanBarChartBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
