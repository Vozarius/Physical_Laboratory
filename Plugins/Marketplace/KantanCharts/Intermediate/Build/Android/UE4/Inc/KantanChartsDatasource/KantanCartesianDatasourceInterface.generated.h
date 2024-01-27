// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKantanCartesianDatapoint;
#ifdef KANTANCHARTSDATASOURCE_KantanCartesianDatasourceInterface_generated_h
#error "KantanCartesianDatasourceInterface.generated.h already included, missing '#pragma once' in KantanCartesianDatasourceInterface.h"
#endif
#define KANTANCHARTSDATASOURCE_KantanCartesianDatasourceInterface_generated_h

#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCartesianDatasourceInterface_h_16_RPC_WRAPPERS \
	virtual TArray<FKantanCartesianDatapoint> GetSeriesDatapoints_Implementation(int32 SeriesIdx) const { return TArray<FKantanCartesianDatapoint>(); }; \
	virtual FText GetSeriesName_Implementation(int32 SeriesIdx) const { return FText::GetEmpty(); }; \
	virtual FName GetSeriesId_Implementation(int32 CatIdx) const { return NAME_None; }; \
	virtual int32 GetNumSeries_Implementation() const { return 0; }; \
 \
	DECLARE_FUNCTION(execGetSeriesDatapoints) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SeriesIdx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FKantanCartesianDatapoint>*)Z_Param__Result=P_THIS->GetSeriesDatapoints_Implementation(Z_Param_SeriesIdx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSeriesName) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SeriesIdx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetSeriesName_Implementation(Z_Param_SeriesIdx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSeriesId) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CatIdx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetSeriesId_Implementation(Z_Param_CatIdx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumSeries) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumSeries_Implementation(); \
		P_NATIVE_END; \
	}


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCartesianDatasourceInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TArray<FKantanCartesianDatapoint> GetSeriesDatapoints_Implementation(int32 SeriesIdx) const { return TArray<FKantanCartesianDatapoint>(); }; \
	virtual FText GetSeriesName_Implementation(int32 SeriesIdx) const { return FText::GetEmpty(); }; \
	virtual FName GetSeriesId_Implementation(int32 CatIdx) const { return NAME_None; }; \
	virtual int32 GetNumSeries_Implementation() const { return 0; }; \
 \
	DECLARE_FUNCTION(execGetSeriesDatapoints) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SeriesIdx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FKantanCartesianDatapoint>*)Z_Param__Result=P_THIS->GetSeriesDatapoints_Implementation(Z_Param_SeriesIdx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSeriesName) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SeriesIdx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=P_THIS->GetSeriesName_Implementation(Z_Param_SeriesIdx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSeriesId) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CatIdx); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=P_THIS->GetSeriesId_Implementation(Z_Param_CatIdx); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumSeries) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumSeries_Implementation(); \
		P_NATIVE_END; \
	}


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCartesianDatasourceInterface_h_16_EVENT_PARMS \
	struct KantanCartesianDatasourceInterface_eventGetNumSeries_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		KantanCartesianDatasourceInterface_eventGetNumSeries_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct KantanCartesianDatasourceInterface_eventGetSeriesDatapoints_Parms \
	{ \
		int32 SeriesIdx; \
		TArray<FKantanCartesianDatapoint> ReturnValue; \
	}; \
	struct KantanCartesianDatasourceInterface_eventGetSeriesId_Parms \
	{ \
		int32 CatIdx; \
		FName ReturnValue; \
	}; \
	struct KantanCartesianDatasourceInterface_eventGetSeriesName_Parms \
	{ \
		int32 SeriesIdx; \
		FText ReturnValue; \
	};


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCartesianDatasourceInterface_h_16_CALLBACK_WRAPPERS
#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCartesianDatasourceInterface_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	KANTANCHARTSDATASOURCE_API UKantanCartesianDatasourceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKantanCartesianDatasourceInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(KANTANCHARTSDATASOURCE_API, UKantanCartesianDatasourceInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKantanCartesianDatasourceInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	KANTANCHARTSDATASOURCE_API UKantanCartesianDatasourceInterface(UKantanCartesianDatasourceInterface&&); \
	KANTANCHARTSDATASOURCE_API UKantanCartesianDatasourceInterface(const UKantanCartesianDatasourceInterface&); \
public:


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCartesianDatasourceInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	KANTANCHARTSDATASOURCE_API UKantanCartesianDatasourceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	KANTANCHARTSDATASOURCE_API UKantanCartesianDatasourceInterface(UKantanCartesianDatasourceInterface&&); \
	KANTANCHARTSDATASOURCE_API UKantanCartesianDatasourceInterface(const UKantanCartesianDatasourceInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(KANTANCHARTSDATASOURCE_API, UKantanCartesianDatasourceInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKantanCartesianDatasourceInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKantanCartesianDatasourceInterface)


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCartesianDatasourceInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUKantanCartesianDatasourceInterface(); \
	friend struct Z_Construct_UClass_UKantanCartesianDatasourceInterface_Statics; \
public: \
	DECLARE_CLASS(UKantanCartesianDatasourceInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/KantanChartsDatasource"), KANTANCHARTSDATASOURCE_API) \
	DECLARE_SERIALIZER(UKantanCartesianDatasourceInterface)


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCartesianDatasourceInterface_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCartesianDatasourceInterface_h_16_GENERATED_UINTERFACE_BODY() \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCartesianDatasourceInterface_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCartesianDatasourceInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCartesianDatasourceInterface_h_16_GENERATED_UINTERFACE_BODY() \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCartesianDatasourceInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCartesianDatasourceInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IKantanCartesianDatasourceInterface() {} \
public: \
	typedef UKantanCartesianDatasourceInterface UClassType; \
	typedef IKantanCartesianDatasourceInterface ThisClass; \
	static int32 Execute_GetNumSeries(const UObject* O); \
	static TArray<FKantanCartesianDatapoint> Execute_GetSeriesDatapoints(const UObject* O, int32 SeriesIdx); \
	static FName Execute_GetSeriesId(const UObject* O, int32 CatIdx); \
	static FText Execute_GetSeriesName(const UObject* O, int32 SeriesIdx); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCartesianDatasourceInterface_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~IKantanCartesianDatasourceInterface() {} \
public: \
	typedef UKantanCartesianDatasourceInterface UClassType; \
	typedef IKantanCartesianDatasourceInterface ThisClass; \
	static int32 Execute_GetNumSeries(const UObject* O); \
	static TArray<FKantanCartesianDatapoint> Execute_GetSeriesDatapoints(const UObject* O, int32 SeriesIdx); \
	static FName Execute_GetSeriesId(const UObject* O, int32 CatIdx); \
	static FText Execute_GetSeriesName(const UObject* O, int32 SeriesIdx); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCartesianDatasourceInterface_h_13_PROLOG \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCartesianDatasourceInterface_h_16_EVENT_PARMS


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCartesianDatasourceInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCartesianDatasourceInterface_h_16_RPC_WRAPPERS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCartesianDatasourceInterface_h_16_CALLBACK_WRAPPERS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCartesianDatasourceInterface_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCartesianDatasourceInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCartesianDatasourceInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCartesianDatasourceInterface_h_16_CALLBACK_WRAPPERS \
	Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCartesianDatasourceInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KANTANCHARTSDATASOURCE_API UClass* StaticClass<class UKantanCartesianDatasourceInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Physics_Laboratory_Plugins_Marketplace_KantanCharts_Source_KantanChartsDatasource_Public_KantanCartesianDatasourceInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
