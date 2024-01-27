// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef KANTANCHARTSUMG_CartesianPlot_generated_h
#error "CartesianPlot.generated.h already included, missing '#pragma once' in CartesianPlot.h"
#endif
#define KANTANCHARTSUMG_CartesianPlot_generated_h

#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_CartesianPlot_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetDatasource) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_InDatasource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetDatasource(Z_Param_InDatasource); \
		P_NATIVE_END; \
	}


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_CartesianPlot_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetDatasource) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_InDatasource); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetDatasource(Z_Param_InDatasource); \
		P_NATIVE_END; \
	}


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_CartesianPlot_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCartesianPlot(); \
	friend struct Z_Construct_UClass_UCartesianPlot_Statics; \
public: \
	DECLARE_CLASS(UCartesianPlot, UKantanCartesianPlotBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KantanChartsUMG"), NO_API) \
	DECLARE_SERIALIZER(UCartesianPlot)


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_CartesianPlot_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCartesianPlot(); \
	friend struct Z_Construct_UClass_UCartesianPlot_Statics; \
public: \
	DECLARE_CLASS(UCartesianPlot, UKantanCartesianPlotBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KantanChartsUMG"), NO_API) \
	DECLARE_SERIALIZER(UCartesianPlot)


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_CartesianPlot_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCartesianPlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCartesianPlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCartesianPlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCartesianPlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCartesianPlot(UCartesianPlot&&); \
	NO_API UCartesianPlot(const UCartesianPlot&); \
public:


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_CartesianPlot_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCartesianPlot(UCartesianPlot&&); \
	NO_API UCartesianPlot(const UCartesianPlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCartesianPlot); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCartesianPlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCartesianPlot)


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_CartesianPlot_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Datasource() { return STRUCT_OFFSET(UCartesianPlot, Datasource); }


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_CartesianPlot_h_12_PROLOG
#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_CartesianPlot_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_CartesianPlot_h_15_PRIVATE_PROPERTY_OFFSET \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_CartesianPlot_h_15_RPC_WRAPPERS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_CartesianPlot_h_15_INCLASS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_CartesianPlot_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_CartesianPlot_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_CartesianPlot_h_15_PRIVATE_PROPERTY_OFFSET \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_CartesianPlot_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_CartesianPlot_h_15_INCLASS_NO_PURE_DECLS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_CartesianPlot_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KANTANCHARTSUMG_API UClass* StaticClass<class UCartesianPlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_CartesianPlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
