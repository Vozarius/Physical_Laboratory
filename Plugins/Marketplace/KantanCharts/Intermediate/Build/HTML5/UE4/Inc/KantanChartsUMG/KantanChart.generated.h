// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMargin;
#ifdef KANTANCHARTSUMG_KantanChart_generated_h
#error "KantanChart.generated.h already included, missing '#pragma once' in KantanChart.h"
#endif
#define KANTANCHARTSUMG_KantanChart_generated_h

#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChart_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetUpdateTickRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUpdateTickRate(Z_Param_InRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetChartTitlePadding) \
	{ \
		P_GET_STRUCT_REF(FMargin,Z_Param_Out_InPadding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetChartTitlePadding(Z_Param_Out_InPadding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetChartTitle) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InTitle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetChartTitle(Z_Param_Out_InTitle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMargins) \
	{ \
		P_GET_STRUCT_REF(FMargin,Z_Param_Out_InMargins); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMargins(Z_Param_Out_InMargins); \
		P_NATIVE_END; \
	}


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChart_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetUpdateTickRate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InRate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUpdateTickRate(Z_Param_InRate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetChartTitlePadding) \
	{ \
		P_GET_STRUCT_REF(FMargin,Z_Param_Out_InPadding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetChartTitlePadding(Z_Param_Out_InPadding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetChartTitle) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_InTitle); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetChartTitle(Z_Param_Out_InTitle); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMargins) \
	{ \
		P_GET_STRUCT_REF(FMargin,Z_Param_Out_InMargins); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMargins(Z_Param_Out_InMargins); \
		P_NATIVE_END; \
	}


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChart_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKantanChart(); \
	friend struct Z_Construct_UClass_UKantanChart_Statics; \
public: \
	DECLARE_CLASS(UKantanChart, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/KantanChartsUMG"), NO_API) \
	DECLARE_SERIALIZER(UKantanChart)


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChart_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUKantanChart(); \
	friend struct Z_Construct_UClass_UKantanChart_Statics; \
public: \
	DECLARE_CLASS(UKantanChart, UWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/KantanChartsUMG"), NO_API) \
	DECLARE_SERIALIZER(UKantanChart)


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChart_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKantanChart(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKantanChart) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKantanChart); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKantanChart); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKantanChart(UKantanChart&&); \
	NO_API UKantanChart(const UKantanChart&); \
public:


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChart_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKantanChart(UKantanChart&&); \
	NO_API UKantanChart(const UKantanChart&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKantanChart); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKantanChart); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKantanChart)


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChart_h_17_PRIVATE_PROPERTY_OFFSET
#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChart_h_14_PROLOG
#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChart_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChart_h_17_PRIVATE_PROPERTY_OFFSET \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChart_h_17_RPC_WRAPPERS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChart_h_17_INCLASS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChart_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChart_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChart_h_17_PRIVATE_PROPERTY_OFFSET \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChart_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChart_h_17_INCLASS_NO_PURE_DECLS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChart_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KANTANCHARTSUMG_API UClass* StaticClass<class UKantanChart>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChart_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
