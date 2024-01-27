// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KantanChartsDatasource/Public/KantanSimpleCartesianDatasource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKantanSimpleCartesianDatasource() {}
// Cross Module References
	KANTANCHARTSDATASOURCE_API UClass* Z_Construct_UClass_UKantanSimpleCartesianDatasource_NoRegister();
	KANTANCHARTSDATASOURCE_API UClass* Z_Construct_UClass_UKantanSimpleCartesianDatasource();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_KantanChartsDatasource();
	KANTANCHARTSDATASOURCE_API UFunction* Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddDatapoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	KANTANCHARTSDATASOURCE_API UFunction* Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeries();
	KANTANCHARTSDATASOURCE_API UFunction* Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeriesWithId();
	KANTANCHARTSDATASOURCE_API UFunction* Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_RemoveAllSeries();
	KANTANCHARTSDATASOURCE_API UFunction* Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_RemoveSeries();
	KANTANCHARTSDATASOURCE_API UFunction* Z_Construct_UFunction_UKantanSimpleCartesianDatasource_NewSimpleCartesianDatasource();
	KANTANCHARTSDATASOURCE_API UClass* Z_Construct_UClass_UKantanCartesianDatasourceInterface_NoRegister();
// End Cross Module References
	void UKantanSimpleCartesianDatasource::StaticRegisterNativesUKantanSimpleCartesianDatasource()
	{
		UClass* Class = UKantanSimpleCartesianDatasource::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_AddDatapoint", &UKantanSimpleCartesianDatasource::execBP_AddDatapoint },
			{ "BP_AddSeries", &UKantanSimpleCartesianDatasource::execBP_AddSeries },
			{ "BP_AddSeriesWithId", &UKantanSimpleCartesianDatasource::execBP_AddSeriesWithId },
			{ "BP_RemoveAllSeries", &UKantanSimpleCartesianDatasource::execBP_RemoveAllSeries },
			{ "BP_RemoveSeries", &UKantanSimpleCartesianDatasource::execBP_RemoveSeries },
			{ "NewSimpleCartesianDatasource", &UKantanSimpleCartesianDatasource::execNewSimpleCartesianDatasource },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddDatapoint_Statics
	{
		struct KantanSimpleCartesianDatasource_eventBP_AddDatapoint_Parms
		{
			FName SeriesId;
			FVector2D Point;
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SeriesId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddDatapoint_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((KantanSimpleCartesianDatasource_eventBP_AddDatapoint_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddDatapoint_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KantanSimpleCartesianDatasource_eventBP_AddDatapoint_Parms), &Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddDatapoint_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddDatapoint_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddDatapoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanSimpleCartesianDatasource_eventBP_AddDatapoint_Parms, Point), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddDatapoint_Statics::NewProp_Point_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddDatapoint_Statics::NewProp_Point_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddDatapoint_Statics::NewProp_SeriesId = { "SeriesId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanSimpleCartesianDatasource_eventBP_AddDatapoint_Parms, SeriesId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddDatapoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddDatapoint_Statics::NewProp_bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddDatapoint_Statics::NewProp_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddDatapoint_Statics::NewProp_SeriesId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddDatapoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "/*\n\x09""Adds a datapoint to the given series.\n\x09*/" },
		{ "DisplayName", "Add Datapoint" },
		{ "ModuleRelativePath", "Public/KantanSimpleCartesianDatasource.h" },
		{ "ToolTip", "Adds a datapoint to the given series." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddDatapoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanSimpleCartesianDatasource, nullptr, "BP_AddDatapoint", nullptr, nullptr, sizeof(KantanSimpleCartesianDatasource_eventBP_AddDatapoint_Parms), Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddDatapoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddDatapoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddDatapoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddDatapoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddDatapoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddDatapoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeries_Statics
	{
		struct KantanSimpleCartesianDatasource_eventBP_AddSeries_Parms
		{
			FText Name;
			FName SeriesId;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SeriesId;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeries_Statics::NewProp_SeriesId = { "SeriesId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanSimpleCartesianDatasource_eventBP_AddSeries_Parms, SeriesId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeries_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanSimpleCartesianDatasource_eventBP_AddSeries_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeries_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeries_Statics::NewProp_SeriesId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeries_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeries_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "/*\n\x09""Adds a new series using an auto-generated ID, which is returned.\n\x09*/" },
		{ "DisplayName", "Add Series" },
		{ "ModuleRelativePath", "Public/KantanSimpleCartesianDatasource.h" },
		{ "ToolTip", "Adds a new series using an auto-generated ID, which is returned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanSimpleCartesianDatasource, nullptr, "BP_AddSeries", nullptr, nullptr, sizeof(KantanSimpleCartesianDatasource_eventBP_AddSeries_Parms), Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeries_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeries_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeriesWithId_Statics
	{
		struct KantanSimpleCartesianDatasource_eventBP_AddSeriesWithId_Parms
		{
			FName Id;
			FText Name;
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeriesWithId_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((KantanSimpleCartesianDatasource_eventBP_AddSeriesWithId_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeriesWithId_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KantanSimpleCartesianDatasource_eventBP_AddSeriesWithId_Parms), &Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeriesWithId_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeriesWithId_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanSimpleCartesianDatasource_eventBP_AddSeriesWithId_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeriesWithId_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanSimpleCartesianDatasource_eventBP_AddSeriesWithId_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeriesWithId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeriesWithId_Statics::NewProp_bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeriesWithId_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeriesWithId_Statics::NewProp_Id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeriesWithId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "/*\n\x09""Adds a new series, using the given ID. If the ID is already in use, the function will fail.\n\x09*/" },
		{ "DisplayName", "Add Series With Id" },
		{ "ModuleRelativePath", "Public/KantanSimpleCartesianDatasource.h" },
		{ "ToolTip", "Adds a new series, using the given ID. If the ID is already in use, the function will fail." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeriesWithId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanSimpleCartesianDatasource, nullptr, "BP_AddSeriesWithId", nullptr, nullptr, sizeof(KantanSimpleCartesianDatasource_eventBP_AddSeriesWithId_Parms), Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeriesWithId_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeriesWithId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeriesWithId_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeriesWithId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeriesWithId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeriesWithId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_RemoveAllSeries_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_RemoveAllSeries_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "/*\n\x09Removes all series.\n\x09*/" },
		{ "DisplayName", "Remove All Series" },
		{ "ModuleRelativePath", "Public/KantanSimpleCartesianDatasource.h" },
		{ "ToolTip", "Removes all series." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_RemoveAllSeries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanSimpleCartesianDatasource, nullptr, "BP_RemoveAllSeries", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_RemoveAllSeries_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_RemoveAllSeries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_RemoveAllSeries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_RemoveAllSeries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_RemoveSeries_Statics
	{
		struct KantanSimpleCartesianDatasource_eventBP_RemoveSeries_Parms
		{
			FName Id;
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_RemoveSeries_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((KantanSimpleCartesianDatasource_eventBP_RemoveSeries_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_RemoveSeries_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KantanSimpleCartesianDatasource_eventBP_RemoveSeries_Parms), &Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_RemoveSeries_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_RemoveSeries_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanSimpleCartesianDatasource_eventBP_RemoveSeries_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_RemoveSeries_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_RemoveSeries_Statics::NewProp_bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_RemoveSeries_Statics::NewProp_Id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_RemoveSeries_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "/*\n\x09Removes the series with the given ID.\n\x09*/" },
		{ "DisplayName", "Remove Series" },
		{ "ModuleRelativePath", "Public/KantanSimpleCartesianDatasource.h" },
		{ "ToolTip", "Removes the series with the given ID." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_RemoveSeries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanSimpleCartesianDatasource, nullptr, "BP_RemoveSeries", nullptr, nullptr, sizeof(KantanSimpleCartesianDatasource_eventBP_RemoveSeries_Parms), Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_RemoveSeries_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_RemoveSeries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_RemoveSeries_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_RemoveSeries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_RemoveSeries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_RemoveSeries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanSimpleCartesianDatasource_NewSimpleCartesianDatasource_Statics
	{
		struct KantanSimpleCartesianDatasource_eventNewSimpleCartesianDatasource_Parms
		{
			UKantanSimpleCartesianDatasource* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKantanSimpleCartesianDatasource_NewSimpleCartesianDatasource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanSimpleCartesianDatasource_eventNewSimpleCartesianDatasource_Parms, ReturnValue), Z_Construct_UClass_UKantanSimpleCartesianDatasource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanSimpleCartesianDatasource_NewSimpleCartesianDatasource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanSimpleCartesianDatasource_NewSimpleCartesianDatasource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanSimpleCartesianDatasource_NewSimpleCartesianDatasource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/KantanSimpleCartesianDatasource.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanSimpleCartesianDatasource_NewSimpleCartesianDatasource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanSimpleCartesianDatasource, nullptr, "NewSimpleCartesianDatasource", nullptr, nullptr, sizeof(KantanSimpleCartesianDatasource_eventNewSimpleCartesianDatasource_Parms), Z_Construct_UFunction_UKantanSimpleCartesianDatasource_NewSimpleCartesianDatasource_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanSimpleCartesianDatasource_NewSimpleCartesianDatasource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanSimpleCartesianDatasource_NewSimpleCartesianDatasource_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanSimpleCartesianDatasource_NewSimpleCartesianDatasource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanSimpleCartesianDatasource_NewSimpleCartesianDatasource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanSimpleCartesianDatasource_NewSimpleCartesianDatasource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKantanSimpleCartesianDatasource_NoRegister()
	{
		return UKantanSimpleCartesianDatasource::StaticClass();
	}
	struct Z_Construct_UClass_UKantanSimpleCartesianDatasource_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKantanSimpleCartesianDatasource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsDatasource,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKantanSimpleCartesianDatasource_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddDatapoint, "BP_AddDatapoint" }, // 741339455
		{ &Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeries, "BP_AddSeries" }, // 1486979653
		{ &Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_AddSeriesWithId, "BP_AddSeriesWithId" }, // 698424897
		{ &Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_RemoveAllSeries, "BP_RemoveAllSeries" }, // 557572128
		{ &Z_Construct_UFunction_UKantanSimpleCartesianDatasource_BP_RemoveSeries, "BP_RemoveSeries" }, // 1585251978
		{ &Z_Construct_UFunction_UKantanSimpleCartesianDatasource_NewSimpleCartesianDatasource, "NewSimpleCartesianDatasource" }, // 1983219746
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanSimpleCartesianDatasource_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KantanSimpleCartesianDatasource.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/KantanSimpleCartesianDatasource.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UKantanSimpleCartesianDatasource_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UKantanCartesianDatasourceInterface_NoRegister, (int32)VTABLE_OFFSET(UKantanSimpleCartesianDatasource, IKantanCartesianDatasourceInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKantanSimpleCartesianDatasource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKantanSimpleCartesianDatasource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKantanSimpleCartesianDatasource_Statics::ClassParams = {
		&UKantanSimpleCartesianDatasource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		ARRAY_COUNT(InterfaceParams),
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKantanSimpleCartesianDatasource_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UKantanSimpleCartesianDatasource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKantanSimpleCartesianDatasource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKantanSimpleCartesianDatasource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKantanSimpleCartesianDatasource, 2423332806);
	template<> KANTANCHARTSDATASOURCE_API UClass* StaticClass<UKantanSimpleCartesianDatasource>()
	{
		return UKantanSimpleCartesianDatasource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKantanSimpleCartesianDatasource(Z_Construct_UClass_UKantanSimpleCartesianDatasource, &UKantanSimpleCartesianDatasource::StaticClass, TEXT("/Script/KantanChartsDatasource"), TEXT("UKantanSimpleCartesianDatasource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKantanSimpleCartesianDatasource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
