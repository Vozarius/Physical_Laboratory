// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
#ifdef KANTANCHARTSUMG_KantanCategoryChart_generated_h
#error "KantanCategoryChart.generated.h already included, missing '#pragma once' in KantanCategoryChart.h"
#endif
#define KANTANCHARTSUMG_KantanCategoryChart_generated_h

#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCategoryChart_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCategoryStyleManualMapping_Statics; \
	KANTANCHARTSUMG_API static class UScriptStruct* StaticStruct();


template<> KANTANCHARTSUMG_API UScriptStruct* StaticStruct<struct FCategoryStyleManualMapping>();

#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCategoryChart_h_39_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddCategoryStyleOverride) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_CategoryId); \
		P_GET_STRUCT(FLinearColor,Z_Param_Color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddCategoryStyleOverride(Z_Param_CategoryId,Z_Param_Color); \
		P_NATIVE_END; \
	}


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCategoryChart_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddCategoryStyleOverride) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_CategoryId); \
		P_GET_STRUCT(FLinearColor,Z_Param_Color); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddCategoryStyleOverride(Z_Param_CategoryId,Z_Param_Color); \
		P_NATIVE_END; \
	}


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCategoryChart_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKantanCategoryChart(); \
	friend struct Z_Construct_UClass_UKantanCategoryChart_Statics; \
public: \
	DECLARE_CLASS(UKantanCategoryChart, UKantanChart, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/KantanChartsUMG"), NO_API) \
	DECLARE_SERIALIZER(UKantanCategoryChart)


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCategoryChart_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUKantanCategoryChart(); \
	friend struct Z_Construct_UClass_UKantanCategoryChart_Statics; \
public: \
	DECLARE_CLASS(UKantanCategoryChart, UKantanChart, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/KantanChartsUMG"), NO_API) \
	DECLARE_SERIALIZER(UKantanCategoryChart)


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCategoryChart_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKantanCategoryChart(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKantanCategoryChart) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKantanCategoryChart); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKantanCategoryChart); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKantanCategoryChart(UKantanCategoryChart&&); \
	NO_API UKantanCategoryChart(const UKantanCategoryChart&); \
public:


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCategoryChart_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKantanCategoryChart(UKantanCategoryChart&&); \
	NO_API UKantanCategoryChart(const UKantanCategoryChart&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKantanCategoryChart); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKantanCategoryChart); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKantanCategoryChart)


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCategoryChart_h_39_PRIVATE_PROPERTY_OFFSET
#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCategoryChart_h_36_PROLOG
#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCategoryChart_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCategoryChart_h_39_PRIVATE_PROPERTY_OFFSET \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCategoryChart_h_39_RPC_WRAPPERS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCategoryChart_h_39_INCLASS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCategoryChart_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCategoryChart_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCategoryChart_h_39_PRIVATE_PROPERTY_OFFSET \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCategoryChart_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCategoryChart_h_39_INCLASS_NO_PURE_DECLS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCategoryChart_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KANTANCHARTSUMG_API UClass* StaticClass<class UKantanCategoryChart>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_KantanCategoryChart_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
