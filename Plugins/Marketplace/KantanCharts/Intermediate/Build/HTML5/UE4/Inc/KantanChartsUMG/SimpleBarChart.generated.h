// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KANTANCHARTSUMG_SimpleBarChart_generated_h
#error "SimpleBarChart.generated.h already included, missing '#pragma once' in SimpleBarChart.h"
#endif
#define KANTANCHARTSUMG_SimpleBarChart_generated_h

#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleBarChart_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_UpdateCategoryValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Id); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_UpdateCategoryValue(Z_Param_Id,Z_Param_Value,Z_Param_Out_bSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_RemoveAllCategories) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_RemoveAllCategories(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_RemoveCategory) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Id); \
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_RemoveCategory(Z_Param_Id,Z_Param_Out_bSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_AddCategory) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_Name); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_CatId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_AddCategory(Z_Param_Name,Z_Param_Out_CatId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_AddCategoryWithId) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Id); \
		P_GET_PROPERTY(UTextProperty,Z_Param_Name); \
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_AddCategoryWithId(Z_Param_Id,Z_Param_Name,Z_Param_Out_bSuccess); \
		P_NATIVE_END; \
	}


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleBarChart_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_UpdateCategoryValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Id); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_UpdateCategoryValue(Z_Param_Id,Z_Param_Value,Z_Param_Out_bSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_RemoveAllCategories) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_RemoveAllCategories(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_RemoveCategory) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Id); \
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_RemoveCategory(Z_Param_Id,Z_Param_Out_bSuccess); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_AddCategory) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_Name); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_CatId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_AddCategory(Z_Param_Name,Z_Param_Out_CatId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBP_AddCategoryWithId) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Id); \
		P_GET_PROPERTY(UTextProperty,Z_Param_Name); \
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BP_AddCategoryWithId(Z_Param_Id,Z_Param_Name,Z_Param_Out_bSuccess); \
		P_NATIVE_END; \
	}


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleBarChart_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSimpleBarChart(); \
	friend struct Z_Construct_UClass_USimpleBarChart_Statics; \
public: \
	DECLARE_CLASS(USimpleBarChart, UKantanBarChartBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KantanChartsUMG"), NO_API) \
	DECLARE_SERIALIZER(USimpleBarChart) \
	virtual UObject* _getUObject() const override { return const_cast<USimpleBarChart*>(this); }


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleBarChart_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSimpleBarChart(); \
	friend struct Z_Construct_UClass_USimpleBarChart_Statics; \
public: \
	DECLARE_CLASS(USimpleBarChart, UKantanBarChartBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/KantanChartsUMG"), NO_API) \
	DECLARE_SERIALIZER(USimpleBarChart) \
	virtual UObject* _getUObject() const override { return const_cast<USimpleBarChart*>(this); }


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleBarChart_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USimpleBarChart(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleBarChart) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleBarChart); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleBarChart); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimpleBarChart(USimpleBarChart&&); \
	NO_API USimpleBarChart(const USimpleBarChart&); \
public:


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleBarChart_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USimpleBarChart(USimpleBarChart&&); \
	NO_API USimpleBarChart(const USimpleBarChart&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USimpleBarChart); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USimpleBarChart); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USimpleBarChart)


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleBarChart_h_20_PRIVATE_PROPERTY_OFFSET
#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleBarChart_h_14_PROLOG
#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleBarChart_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleBarChart_h_20_PRIVATE_PROPERTY_OFFSET \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleBarChart_h_20_RPC_WRAPPERS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleBarChart_h_20_INCLASS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleBarChart_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleBarChart_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleBarChart_h_20_PRIVATE_PROPERTY_OFFSET \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleBarChart_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleBarChart_h_20_INCLASS_NO_PURE_DECLS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleBarChart_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KANTANCHARTSUMG_API UClass* StaticClass<class USimpleBarChart>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsUMG_Public_SimpleBarChart_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
