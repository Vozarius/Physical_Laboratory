// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UKantanPointStyle;
struct FLinearColor;
struct FMargin;
struct FCartesianAxisConfig;
struct FCartesianAxisRange;
struct FVector2D;
#ifdef KANTANCHARTSUMG_KantanCartesianChartBase_generated_h
#error "KantanCartesianChartBase.generated.h already included, missing '#pragma once' in KantanCartesianChartBase.h"
#endif
#define KANTANCHARTSUMG_KantanCartesianChartBase_generated_h

#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCartesianChartBase_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSeriesStyleManualMapping_Statics; \
	KANTANCHARTSUMG_API static class UScriptStruct* StaticStruct();


template<> KANTANCHARTSUMG_API UScriptStruct* StaticStruct<struct FSeriesStyleManualMapping>();

#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCartesianChartBase_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConfigureSeries) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Id); \
		P_GET_UBOOL(Z_Param_bDrawPoints); \
		P_GET_UBOOL(Z_Param_bDrawLines); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConfigureSeries(Z_Param_Id,Z_Param_bDrawPoints,Z_Param_bDrawLines); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableSeries) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Id); \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableSeries(Z_Param_Id,Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSeriesStyleOverride) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SeriesId); \
		P_GET_OBJECT(UKantanPointStyle,Z_Param_PointStyle); \
		P_GET_STRUCT(FLinearColor,Z_Param_Color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddSeriesStyleOverride(Z_Param_SeriesId,Z_Param_PointStyle,Z_Param_Color); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAxisTitlePadding) \
	{ \
		P_GET_STRUCT_REF(FMargin,Z_Param_Out_InPadding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAxisTitlePadding(Z_Param_Out_InPadding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetYAxisConfig) \
	{ \
		P_GET_STRUCT_REF(FCartesianAxisConfig,Z_Param_Out_InCfg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetYAxisConfig(Z_Param_Out_InCfg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetXAxisConfig) \
	{ \
		P_GET_STRUCT_REF(FCartesianAxisConfig,Z_Param_Out_InCfg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetXAxisConfig(Z_Param_Out_InCfg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDataPointSize) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDataPointSize(EKantanDataPointSize::Type(Z_Param_InSize)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlotScaleByRange) \
	{ \
		P_GET_STRUCT_REF(FCartesianAxisRange,Z_Param_Out_InRangeX); \
		P_GET_STRUCT_REF(FCartesianAxisRange,Z_Param_Out_InRangeY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlotScaleByRange(Z_Param_Out_InRangeX,Z_Param_Out_InRangeY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlotScale) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InScale); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InFocalCoords); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlotScale(Z_Param_Out_InScale,Z_Param_Out_InFocalCoords); \
		P_NATIVE_END; \
	}


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCartesianChartBase_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConfigureSeries) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Id); \
		P_GET_UBOOL(Z_Param_bDrawPoints); \
		P_GET_UBOOL(Z_Param_bDrawLines); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConfigureSeries(Z_Param_Id,Z_Param_bDrawPoints,Z_Param_bDrawLines); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableSeries) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Id); \
		P_GET_UBOOL(Z_Param_bEnable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EnableSeries(Z_Param_Id,Z_Param_bEnable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddSeriesStyleOverride) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SeriesId); \
		P_GET_OBJECT(UKantanPointStyle,Z_Param_PointStyle); \
		P_GET_STRUCT(FLinearColor,Z_Param_Color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddSeriesStyleOverride(Z_Param_SeriesId,Z_Param_PointStyle,Z_Param_Color); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAxisTitlePadding) \
	{ \
		P_GET_STRUCT_REF(FMargin,Z_Param_Out_InPadding); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAxisTitlePadding(Z_Param_Out_InPadding); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetYAxisConfig) \
	{ \
		P_GET_STRUCT_REF(FCartesianAxisConfig,Z_Param_Out_InCfg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetYAxisConfig(Z_Param_Out_InCfg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetXAxisConfig) \
	{ \
		P_GET_STRUCT_REF(FCartesianAxisConfig,Z_Param_Out_InCfg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetXAxisConfig(Z_Param_Out_InCfg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDataPointSize) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDataPointSize(EKantanDataPointSize::Type(Z_Param_InSize)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlotScaleByRange) \
	{ \
		P_GET_STRUCT_REF(FCartesianAxisRange,Z_Param_Out_InRangeX); \
		P_GET_STRUCT_REF(FCartesianAxisRange,Z_Param_Out_InRangeY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlotScaleByRange(Z_Param_Out_InRangeX,Z_Param_Out_InRangeY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPlotScale) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InScale); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InFocalCoords); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetPlotScale(Z_Param_Out_InScale,Z_Param_Out_InFocalCoords); \
		P_NATIVE_END; \
	}


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCartesianChartBase_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKantanCartesianChartBase(); \
	friend struct Z_Construct_UClass_UKantanCartesianChartBase_Statics; \
public: \
	DECLARE_CLASS(UKantanCartesianChartBase, UKantanChart, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/KantanChartsUMG"), NO_API) \
	DECLARE_SERIALIZER(UKantanCartesianChartBase)


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCartesianChartBase_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUKantanCartesianChartBase(); \
	friend struct Z_Construct_UClass_UKantanCartesianChartBase_Statics; \
public: \
	DECLARE_CLASS(UKantanCartesianChartBase, UKantanChart, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/KantanChartsUMG"), NO_API) \
	DECLARE_SERIALIZER(UKantanCartesianChartBase)


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCartesianChartBase_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKantanCartesianChartBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKantanCartesianChartBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKantanCartesianChartBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKantanCartesianChartBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKantanCartesianChartBase(UKantanCartesianChartBase&&); \
	NO_API UKantanCartesianChartBase(const UKantanCartesianChartBase&); \
public:


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCartesianChartBase_h_40_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKantanCartesianChartBase(UKantanCartesianChartBase&&); \
	NO_API UKantanCartesianChartBase(const UKantanCartesianChartBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKantanCartesianChartBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKantanCartesianChartBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKantanCartesianChartBase)


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCartesianChartBase_h_40_PRIVATE_PROPERTY_OFFSET
#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCartesianChartBase_h_37_PROLOG
#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCartesianChartBase_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCartesianChartBase_h_40_PRIVATE_PROPERTY_OFFSET \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCartesianChartBase_h_40_RPC_WRAPPERS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCartesianChartBase_h_40_INCLASS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCartesianChartBase_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCartesianChartBase_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCartesianChartBase_h_40_PRIVATE_PROPERTY_OFFSET \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCartesianChartBase_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCartesianChartBase_h_40_INCLASS_NO_PURE_DECLS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCartesianChartBase_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KANTANCHARTSUMG_API UClass* StaticClass<class UKantanCartesianChartBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCartesianChartBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
