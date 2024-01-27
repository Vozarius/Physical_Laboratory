// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KANTANCHARTSDATASOURCE_KantanCategoryDatasourceInterface_generated_h
#error "KantanCategoryDatasourceInterface.generated.h already included, missing '#pragma once' in KantanCategoryDatasourceInterface.h"
#endif
#define KANTANCHARTSDATASOURCE_KantanCategoryDatasourceInterface_generated_h

#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCategoryDatasourceInterface_h_15_RPC_WRAPPERS \
	virtual float GetCategoryValue_Implementation(int32 CatIdx) const { return 0; }; \
	virtual FText GetCategoryName_Implementation(int32 CatIdx) const { return FText::GetEmpty(); }; \
	virtual FName GetCategoryId_Implementation(int32 CatIdx) const { return NAME_None; }; \
	virtual int32 GetNumCategories_Implementation() const { return 0; }; \
 \
	DECLARE_FUNCTION(execGetCategoryValue) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CatIdx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCategoryValue_Implementation(Z_Param_CatIdx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCategoryName) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CatIdx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetCategoryName_Implementation(Z_Param_CatIdx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCategoryId) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CatIdx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetCategoryId_Implementation(Z_Param_CatIdx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumCategories) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumCategories_Implementation(); \
		P_NATIVE_END; \
	}


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCategoryDatasourceInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual float GetCategoryValue_Implementation(int32 CatIdx) const { return 0; }; \
	virtual FText GetCategoryName_Implementation(int32 CatIdx) const { return FText::GetEmpty(); }; \
	virtual FName GetCategoryId_Implementation(int32 CatIdx) const { return NAME_None; }; \
	virtual int32 GetNumCategories_Implementation() const { return 0; }; \
 \
	DECLARE_FUNCTION(execGetCategoryValue) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CatIdx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCategoryValue_Implementation(Z_Param_CatIdx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCategoryName) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CatIdx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetCategoryName_Implementation(Z_Param_CatIdx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCategoryId) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CatIdx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetCategoryId_Implementation(Z_Param_CatIdx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumCategories) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumCategories_Implementation(); \
		P_NATIVE_END; \
	}


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCategoryDatasourceInterface_h_15_EVENT_PARMS \
	struct KantanCategoryDatasourceInterface_eventGetCategoryId_Parms \
	{ \
		int32 CatIdx; \
		FName ReturnValue; \
	}; \
	struct KantanCategoryDatasourceInterface_eventGetCategoryName_Parms \
	{ \
		int32 CatIdx; \
		FText ReturnValue; \
	}; \
	struct KantanCategoryDatasourceInterface_eventGetCategoryValue_Parms \
	{ \
		int32 CatIdx; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		KantanCategoryDatasourceInterface_eventGetCategoryValue_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct KantanCategoryDatasourceInterface_eventGetNumCategories_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		KantanCategoryDatasourceInterface_eventGetNumCategories_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCategoryDatasourceInterface_h_15_CALLBACK_WRAPPERS
#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCategoryDatasourceInterface_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	KANTANCHARTSDATASOURCE_API UKantanCategoryDatasourceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKantanCategoryDatasourceInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(KANTANCHARTSDATASOURCE_API, UKantanCategoryDatasourceInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKantanCategoryDatasourceInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	KANTANCHARTSDATASOURCE_API UKantanCategoryDatasourceInterface(UKantanCategoryDatasourceInterface&&); \
	KANTANCHARTSDATASOURCE_API UKantanCategoryDatasourceInterface(const UKantanCategoryDatasourceInterface&); \
public:


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCategoryDatasourceInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	KANTANCHARTSDATASOURCE_API UKantanCategoryDatasourceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	KANTANCHARTSDATASOURCE_API UKantanCategoryDatasourceInterface(UKantanCategoryDatasourceInterface&&); \
	KANTANCHARTSDATASOURCE_API UKantanCategoryDatasourceInterface(const UKantanCategoryDatasourceInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(KANTANCHARTSDATASOURCE_API, UKantanCategoryDatasourceInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKantanCategoryDatasourceInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKantanCategoryDatasourceInterface)


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCategoryDatasourceInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUKantanCategoryDatasourceInterface(); \
	friend struct Z_Construct_UClass_UKantanCategoryDatasourceInterface_Statics; \
public: \
	DECLARE_CLASS(UKantanCategoryDatasourceInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/KantanChartsDatasource"), KANTANCHARTSDATASOURCE_API) \
	DECLARE_SERIALIZER(UKantanCategoryDatasourceInterface)


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCategoryDatasourceInterface_h_15_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCategoryDatasourceInterface_h_15_GENERATED_UINTERFACE_BODY() \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCategoryDatasourceInterface_h_15_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCategoryDatasourceInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCategoryDatasourceInterface_h_15_GENERATED_UINTERFACE_BODY() \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCategoryDatasourceInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCategoryDatasourceInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IKantanCategoryDatasourceInterface() {} \
public: \
	typedef UKantanCategoryDatasourceInterface UClassType; \
	typedef IKantanCategoryDatasourceInterface ThisClass; \
	static FName Execute_GetCategoryId(const UObject* O, int32 CatIdx); \
	static FText Execute_GetCategoryName(const UObject* O, int32 CatIdx); \
	static float Execute_GetCategoryValue(const UObject* O, int32 CatIdx); \
	static int32 Execute_GetNumCategories(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCategoryDatasourceInterface_h_15_INCLASS_IINTERFACE \
protected: \
	virtual ~IKantanCategoryDatasourceInterface() {} \
public: \
	typedef UKantanCategoryDatasourceInterface UClassType; \
	typedef IKantanCategoryDatasourceInterface ThisClass; \
	static FName Execute_GetCategoryId(const UObject* O, int32 CatIdx); \
	static FText Execute_GetCategoryName(const UObject* O, int32 CatIdx); \
	static float Execute_GetCategoryValue(const UObject* O, int32 CatIdx); \
	static int32 Execute_GetNumCategories(const UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCategoryDatasourceInterface_h_12_PROLOG \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCategoryDatasourceInterface_h_15_EVENT_PARMS


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCategoryDatasourceInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCategoryDatasourceInterface_h_15_RPC_WRAPPERS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCategoryDatasourceInterface_h_15_CALLBACK_WRAPPERS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCategoryDatasourceInterface_h_15_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCategoryDatasourceInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCategoryDatasourceInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCategoryDatasourceInterface_h_15_CALLBACK_WRAPPERS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCategoryDatasourceInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KANTANCHARTSDATASOURCE_API UClass* StaticClass<class UKantanCategoryDatasourceInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCategoryDatasourceInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
