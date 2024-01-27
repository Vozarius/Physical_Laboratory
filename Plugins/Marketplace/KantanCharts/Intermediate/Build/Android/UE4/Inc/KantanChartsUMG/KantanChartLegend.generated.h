// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UKantanCartesianChartBase;
struct FSlateBrush;
struct FMargin;
#ifdef KANTANCHARTSUMG_KantanChartLegend_generated_h
#error "KantanChartLegend.generated.h already included, missing '#pragma once' in KantanChartLegend.h"
#endif
#define KANTANCHARTSUMG_KantanChartLegend_generated_h

#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChartLegend_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetChart) \
	{ \
		P_GET_OBJECT(UKantanCartesianChartBase,Z_Param_InChart); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetChart(Z_Param_InChart); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFontSize) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InFontSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFontSize(Z_Param_InFontSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBackground) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_InBrush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBackground(Z_Param_Out_InBrush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSeriesPadding) \
	{ \
		P_GET_STRUCT_REF(FMargin,Z_Param_Out_InPadding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSeriesPadding(Z_Param_Out_InPadding); \
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


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChartLegend_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetChart) \
	{ \
		P_GET_OBJECT(UKantanCartesianChartBase,Z_Param_InChart); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetChart(Z_Param_InChart); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFontSize) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InFontSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFontSize(Z_Param_InFontSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBackground) \
	{ \
		P_GET_STRUCT_REF(FSlateBrush,Z_Param_Out_InBrush); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBackground(Z_Param_Out_InBrush); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSeriesPadding) \
	{ \
		P_GET_STRUCT_REF(FMargin,Z_Param_Out_InPadding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSeriesPadding(Z_Param_Out_InPadding); \
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


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChartLegend_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKantanChartLegend(); \
	friend struct Z_Construct_UClass_UKantanChartLegend_Statics; \
public: \
	DECLARE_CLASS(UKantanChartLegend, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KantanChartsUMG"), NO_API) \
	DECLARE_SERIALIZER(UKantanChartLegend)


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChartLegend_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUKantanChartLegend(); \
	friend struct Z_Construct_UClass_UKantanChartLegend_Statics; \
public: \
	DECLARE_CLASS(UKantanChartLegend, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KantanChartsUMG"), NO_API) \
	DECLARE_SERIALIZER(UKantanChartLegend)


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChartLegend_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKantanChartLegend(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKantanChartLegend) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKantanChartLegend); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKantanChartLegend); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKantanChartLegend(UKantanChartLegend&&); \
	NO_API UKantanChartLegend(const UKantanChartLegend&); \
public:


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChartLegend_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKantanChartLegend(UKantanChartLegend&&); \
	NO_API UKantanChartLegend(const UKantanChartLegend&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKantanChartLegend); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKantanChartLegend); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKantanChartLegend)


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChartLegend_h_19_PRIVATE_PROPERTY_OFFSET
#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChartLegend_h_16_PROLOG
#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChartLegend_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChartLegend_h_19_PRIVATE_PROPERTY_OFFSET \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChartLegend_h_19_RPC_WRAPPERS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChartLegend_h_19_INCLASS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChartLegend_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChartLegend_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChartLegend_h_19_PRIVATE_PROPERTY_OFFSET \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChartLegend_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChartLegend_h_19_INCLASS_NO_PURE_DECLS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChartLegend_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KANTANCHARTSUMG_API UClass* StaticClass<class UKantanChartLegend>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanChartLegend_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
