// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef KANTANCHARTSUMG_TimeSeriesPlot_generated_h
#error "TimeSeriesPlot.generated.h already included, missing '#pragma once' in TimeSeriesPlot.h"
#endif
#define KANTANCHARTSUMG_TimeSeriesPlot_generated_h

#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_TimeSeriesPlot_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetDatasource) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_InDatasource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetDatasource(Z_Param_InDatasource); \
		P_NATIVE_END; \
	}


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_TimeSeriesPlot_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetDatasource) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_InDatasource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetDatasource(Z_Param_InDatasource); \
		P_NATIVE_END; \
	}


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_TimeSeriesPlot_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimeSeriesPlot(); \
	friend struct Z_Construct_UClass_UTimeSeriesPlot_Statics; \
public: \
	DECLARE_CLASS(UTimeSeriesPlot, UKantanTimeSeriesPlotBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KantanChartsUMG"), NO_API) \
	DECLARE_SERIALIZER(UTimeSeriesPlot)


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_TimeSeriesPlot_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUTimeSeriesPlot(); \
	friend struct Z_Construct_UClass_UTimeSeriesPlot_Statics; \
public: \
	DECLARE_CLASS(UTimeSeriesPlot, UKantanTimeSeriesPlotBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KantanChartsUMG"), NO_API) \
	DECLARE_SERIALIZER(UTimeSeriesPlot)


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_TimeSeriesPlot_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTimeSeriesPlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimeSeriesPlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimeSeriesPlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimeSeriesPlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTimeSeriesPlot(UTimeSeriesPlot&&); \
	NO_API UTimeSeriesPlot(const UTimeSeriesPlot&); \
public:


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_TimeSeriesPlot_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTimeSeriesPlot(UTimeSeriesPlot&&); \
	NO_API UTimeSeriesPlot(const UTimeSeriesPlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimeSeriesPlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimeSeriesPlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimeSeriesPlot)


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_TimeSeriesPlot_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Datasource() { return STRUCT_OFFSET(UTimeSeriesPlot, Datasource); }


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_TimeSeriesPlot_h_13_PROLOG
#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_TimeSeriesPlot_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_TimeSeriesPlot_h_16_PRIVATE_PROPERTY_OFFSET \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_TimeSeriesPlot_h_16_RPC_WRAPPERS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_TimeSeriesPlot_h_16_INCLASS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_TimeSeriesPlot_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_TimeSeriesPlot_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_TimeSeriesPlot_h_16_PRIVATE_PROPERTY_OFFSET \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_TimeSeriesPlot_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_TimeSeriesPlot_h_16_INCLASS_NO_PURE_DECLS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_TimeSeriesPlot_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KANTANCHARTSUMG_API UClass* StaticClass<class UTimeSeriesPlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_TimeSeriesPlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
