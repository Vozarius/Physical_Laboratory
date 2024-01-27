// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
#ifdef KANTANCHARTSUMG_SimpleCartesianPlot_generated_h
#error "SimpleCartesianPlot.generated.h already included, missing '#pragma once' in SimpleCartesianPlot.h"
#endif
#define KANTANCHARTSUMG_SimpleCartesianPlot_generated_h

#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleCartesianPlot_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_AddDatapoint) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SeriesId); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Point); \
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_AddDatapoint(Z_Param_SeriesId,Z_Param_Out_Point,Z_Param_Out_bSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_RemoveAllSeries) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_RemoveAllSeries(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_RemoveSeries) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Id); \
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_RemoveSeries(Z_Param_Id,Z_Param_Out_bSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_AddSeries) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_SeriesId); \
		P_GET_PROPERTY(UTextProperty,Z_Param_Name); \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_GET_UBOOL(Z_Param_bShowPoints); \
		P_GET_UBOOL(Z_Param_bShowLines); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_AddSeries(Z_Param_Out_SeriesId,Z_Param_Name,Z_Param_bEnabled,Z_Param_bShowPoints,Z_Param_bShowLines); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_AddSeriesWithId) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Id); \
		P_GET_PROPERTY(UTextProperty,Z_Param_Name); \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_GET_UBOOL(Z_Param_bShowPoints); \
		P_GET_UBOOL(Z_Param_bShowLines); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_AddSeriesWithId(Z_Param_Out_bSuccess,Z_Param_Id,Z_Param_Name,Z_Param_bEnabled,Z_Param_bShowPoints,Z_Param_bShowLines); \
		P_NATIVE_END; \
	}


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleCartesianPlot_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_AddDatapoint) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_SeriesId); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Point); \
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_AddDatapoint(Z_Param_SeriesId,Z_Param_Out_Point,Z_Param_Out_bSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_RemoveAllSeries) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_RemoveAllSeries(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_RemoveSeries) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Id); \
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_RemoveSeries(Z_Param_Id,Z_Param_Out_bSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_AddSeries) \
	{ \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_SeriesId); \
		P_GET_PROPERTY(UTextProperty,Z_Param_Name); \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_GET_UBOOL(Z_Param_bShowPoints); \
		P_GET_UBOOL(Z_Param_bShowLines); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_AddSeries(Z_Param_Out_SeriesId,Z_Param_Name,Z_Param_bEnabled,Z_Param_bShowPoints,Z_Param_bShowLines); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_AddSeriesWithId) \
	{ \
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Id); \
		P_GET_PROPERTY(UTextProperty,Z_Param_Name); \
		P_GET_UBOOL(Z_Param_bEnabled); \
		P_GET_UBOOL(Z_Param_bShowPoints); \
		P_GET_UBOOL(Z_Param_bShowLines); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_AddSeriesWithId(Z_Param_Out_bSuccess,Z_Param_Id,Z_Param_Name,Z_Param_bEnabled,Z_Param_bShowPoints,Z_Param_bShowLines); \
		P_NATIVE_END; \
	}


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleCartesianPlot_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleCartesianPlot(); \
	friend struct Z_Construct_UClass_USimpleCartesianPlot_Statics; \
public: \
	DECLARE_CLASS(USimpleCartesianPlot, UKantanCartesianPlotBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KantanChartsUMG"), NO_API) \
	DECLARE_SERIALIZER(USimpleCartesianPlot) \
	virtual UObject* _getUObject() const override { return const_cast<USimpleCartesianPlot*>(this); }


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleCartesianPlot_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSimpleCartesianPlot(); \
	friend struct Z_Construct_UClass_USimpleCartesianPlot_Statics; \
public: \
	DECLARE_CLASS(USimpleCartesianPlot, UKantanCartesianPlotBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KantanChartsUMG"), NO_API) \
	DECLARE_SERIALIZER(USimpleCartesianPlot) \
	virtual UObject* _getUObject() const override { return const_cast<USimpleCartesianPlot*>(this); }


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleCartesianPlot_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleCartesianPlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleCartesianPlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleCartesianPlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleCartesianPlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimpleCartesianPlot(USimpleCartesianPlot&&); \
	NO_API USimpleCartesianPlot(const USimpleCartesianPlot&); \
public:


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleCartesianPlot_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimpleCartesianPlot(USimpleCartesianPlot&&); \
	NO_API USimpleCartesianPlot(const USimpleCartesianPlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleCartesianPlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleCartesianPlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleCartesianPlot)


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleCartesianPlot_h_20_PRIVATE_PROPERTY_OFFSET
#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleCartesianPlot_h_14_PROLOG
#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleCartesianPlot_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleCartesianPlot_h_20_PRIVATE_PROPERTY_OFFSET \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleCartesianPlot_h_20_RPC_WRAPPERS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleCartesianPlot_h_20_INCLASS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleCartesianPlot_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleCartesianPlot_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleCartesianPlot_h_20_PRIVATE_PROPERTY_OFFSET \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleCartesianPlot_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleCartesianPlot_h_20_INCLASS_NO_PURE_DECLS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleCartesianPlot_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KANTANCHARTSUMG_API UClass* StaticClass<class USimpleCartesianPlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleCartesianPlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
