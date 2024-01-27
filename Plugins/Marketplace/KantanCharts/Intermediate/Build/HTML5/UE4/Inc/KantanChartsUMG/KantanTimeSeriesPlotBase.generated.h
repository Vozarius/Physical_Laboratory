// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCartesianRangeBound;
#ifdef KANTANCHARTSUMG_KantanTimeSeriesPlotBase_generated_h
#error "KantanTimeSeriesPlotBase.generated.h already included, missing '#pragma once' in KantanTimeSeriesPlotBase.h"
#endif
#define KANTANCHARTSUMG_KantanTimeSeriesPlotBase_generated_h

#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanTimeSeriesPlotBase_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetUpperValueBound) \
	{ \
		P_GET_STRUCT(FCartesianRangeBound,Z_Param_InUpperBound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUpperValueBound(Z_Param_InUpperBound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLowerValueBound) \
	{ \
		P_GET_STRUCT(FCartesianRangeBound,Z_Param_InLowerBound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLowerValueBound(Z_Param_InLowerBound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUpperTimeBound) \
	{ \
		P_GET_STRUCT(FCartesianRangeBound,Z_Param_InUpperBound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUpperTimeBound(Z_Param_InUpperBound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLowerTimeBound) \
	{ \
		P_GET_STRUCT(FCartesianRangeBound,Z_Param_InLowerBound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLowerTimeBound(Z_Param_InLowerBound); \
		P_NATIVE_END; \
	}


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanTimeSeriesPlotBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetUpperValueBound) \
	{ \
		P_GET_STRUCT(FCartesianRangeBound,Z_Param_InUpperBound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUpperValueBound(Z_Param_InUpperBound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLowerValueBound) \
	{ \
		P_GET_STRUCT(FCartesianRangeBound,Z_Param_InLowerBound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLowerValueBound(Z_Param_InLowerBound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUpperTimeBound) \
	{ \
		P_GET_STRUCT(FCartesianRangeBound,Z_Param_InUpperBound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUpperTimeBound(Z_Param_InUpperBound); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLowerTimeBound) \
	{ \
		P_GET_STRUCT(FCartesianRangeBound,Z_Param_InLowerBound); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLowerTimeBound(Z_Param_InLowerBound); \
		P_NATIVE_END; \
	}


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanTimeSeriesPlotBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKantanTimeSeriesPlotBase(); \
	friend struct Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics; \
public: \
	DECLARE_CLASS(UKantanTimeSeriesPlotBase, UKantanCartesianChartBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/KantanChartsUMG"), NO_API) \
	DECLARE_SERIALIZER(UKantanTimeSeriesPlotBase)


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanTimeSeriesPlotBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUKantanTimeSeriesPlotBase(); \
	friend struct Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics; \
public: \
	DECLARE_CLASS(UKantanTimeSeriesPlotBase, UKantanCartesianChartBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/KantanChartsUMG"), NO_API) \
	DECLARE_SERIALIZER(UKantanTimeSeriesPlotBase)


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanTimeSeriesPlotBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKantanTimeSeriesPlotBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKantanTimeSeriesPlotBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKantanTimeSeriesPlotBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKantanTimeSeriesPlotBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKantanTimeSeriesPlotBase(UKantanTimeSeriesPlotBase&&); \
	NO_API UKantanTimeSeriesPlotBase(const UKantanTimeSeriesPlotBase&); \
public:


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanTimeSeriesPlotBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKantanTimeSeriesPlotBase(UKantanTimeSeriesPlotBase&&); \
	NO_API UKantanTimeSeriesPlotBase(const UKantanTimeSeriesPlotBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKantanTimeSeriesPlotBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKantanTimeSeriesPlotBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKantanTimeSeriesPlotBase)


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanTimeSeriesPlotBase_h_16_PRIVATE_PROPERTY_OFFSET
#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanTimeSeriesPlotBase_h_13_PROLOG
#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanTimeSeriesPlotBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanTimeSeriesPlotBase_h_16_PRIVATE_PROPERTY_OFFSET \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanTimeSeriesPlotBase_h_16_RPC_WRAPPERS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanTimeSeriesPlotBase_h_16_INCLASS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanTimeSeriesPlotBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanTimeSeriesPlotBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanTimeSeriesPlotBase_h_16_PRIVATE_PROPERTY_OFFSET \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanTimeSeriesPlotBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanTimeSeriesPlotBase_h_16_INCLASS_NO_PURE_DECLS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanTimeSeriesPlotBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KANTANCHARTSUMG_API UClass* StaticClass<class UKantanTimeSeriesPlotBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanTimeSeriesPlotBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
