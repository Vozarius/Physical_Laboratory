// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KantanChartsUMG/Public/SimpleCartesianPlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleCartesianPlot() {}
// Cross Module References
	KANTANCHARTSUMG_API UClass* Z_Construct_UClass_USimpleCartesianPlot_NoRegister();
	KANTANCHARTSUMG_API UClass* Z_Construct_UClass_USimpleCartesianPlot();
	KANTANCHARTSUMG_API UClass* Z_Construct_UClass_UKantanCartesianPlotBase();
	UPackage* Z_Construct_UPackage__Script_KantanChartsUMG();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_USimpleCartesianPlot_BP_AddDatapoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeries();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeriesWithId();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_USimpleCartesianPlot_BP_RemoveAllSeries();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_USimpleCartesianPlot_BP_RemoveSeries();
	KANTANCHARTSDATASOURCE_API UClass* Z_Construct_UClass_UKantanCartesianDatasourceInterface_NoRegister();
// End Cross Module References
	void USimpleCartesianPlot::StaticRegisterNativesUSimpleCartesianPlot()
	{
		UClass* Class = USimpleCartesianPlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_AddDatapoint", &USimpleCartesianPlot::execBP_AddDatapoint },
			{ "BP_AddSeries", &USimpleCartesianPlot::execBP_AddSeries },
			{ "BP_AddSeriesWithId", &USimpleCartesianPlot::execBP_AddSeriesWithId },
			{ "BP_RemoveAllSeries", &USimpleCartesianPlot::execBP_RemoveAllSeries },
			{ "BP_RemoveSeries", &USimpleCartesianPlot::execBP_RemoveSeries },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleCartesianPlot_BP_AddDatapoint_Statics
	{
		struct SimpleCartesianPlot_eventBP_AddDatapoint_Parms
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
	void Z_Construct_UFunction_USimpleCartesianPlot_BP_AddDatapoint_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((SimpleCartesianPlot_eventBP_AddDatapoint_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleCartesianPlot_BP_AddDatapoint_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleCartesianPlot_eventBP_AddDatapoint_Parms), &Z_Construct_UFunction_USimpleCartesianPlot_BP_AddDatapoint_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleCartesianPlot_BP_AddDatapoint_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleCartesianPlot_BP_AddDatapoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleCartesianPlot_eventBP_AddDatapoint_Parms, Point), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_USimpleCartesianPlot_BP_AddDatapoint_Statics::NewProp_Point_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USimpleCartesianPlot_BP_AddDatapoint_Statics::NewProp_Point_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USimpleCartesianPlot_BP_AddDatapoint_Statics::NewProp_SeriesId = { "SeriesId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleCartesianPlot_eventBP_AddDatapoint_Parms, SeriesId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleCartesianPlot_BP_AddDatapoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCartesianPlot_BP_AddDatapoint_Statics::NewProp_bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCartesianPlot_BP_AddDatapoint_Statics::NewProp_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCartesianPlot_BP_AddDatapoint_Statics::NewProp_SeriesId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleCartesianPlot_BP_AddDatapoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "/*\n\x09""Adds a datapoint to the given series.\n\x09*/" },
		{ "DisplayName", "Add Datapoint" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/SimpleCartesianPlot.h" },
		{ "ToolTip", "Adds a datapoint to the given series." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleCartesianPlot_BP_AddDatapoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleCartesianPlot, nullptr, "BP_AddDatapoint", nullptr, nullptr, sizeof(SimpleCartesianPlot_eventBP_AddDatapoint_Parms), Z_Construct_UFunction_USimpleCartesianPlot_BP_AddDatapoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USimpleCartesianPlot_BP_AddDatapoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleCartesianPlot_BP_AddDatapoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USimpleCartesianPlot_BP_AddDatapoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleCartesianPlot_BP_AddDatapoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleCartesianPlot_BP_AddDatapoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeries_Statics
	{
		struct SimpleCartesianPlot_eventBP_AddSeries_Parms
		{
			FName SeriesId;
			FText Name;
			bool bEnabled;
			bool bShowPoints;
			bool bShowLines;
		};
		static void NewProp_bShowLines_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowLines;
		static void NewProp_bShowPoints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowPoints;
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SeriesId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeries_Statics::NewProp_bShowLines_SetBit(void* Obj)
	{
		((SimpleCartesianPlot_eventBP_AddSeries_Parms*)Obj)->bShowLines = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeries_Statics::NewProp_bShowLines = { "bShowLines", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleCartesianPlot_eventBP_AddSeries_Parms), &Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeries_Statics::NewProp_bShowLines_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeries_Statics::NewProp_bShowPoints_SetBit(void* Obj)
	{
		((SimpleCartesianPlot_eventBP_AddSeries_Parms*)Obj)->bShowPoints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeries_Statics::NewProp_bShowPoints = { "bShowPoints", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleCartesianPlot_eventBP_AddSeries_Parms), &Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeries_Statics::NewProp_bShowPoints_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeries_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SimpleCartesianPlot_eventBP_AddSeries_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeries_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleCartesianPlot_eventBP_AddSeries_Parms), &Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeries_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeries_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleCartesianPlot_eventBP_AddSeries_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeries_Statics::NewProp_SeriesId = { "SeriesId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleCartesianPlot_eventBP_AddSeries_Parms, SeriesId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeries_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeries_Statics::NewProp_bShowLines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeries_Statics::NewProp_bShowPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeries_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeries_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeries_Statics::NewProp_SeriesId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeries_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "/*\n\x09""Adds a new series to the plot using an auto-generated ID, which is returned.\n\x09*/" },
		{ "CPP_Default_bEnabled", "true" },
		{ "CPP_Default_bShowLines", "false" },
		{ "CPP_Default_bShowPoints", "true" },
		{ "DisplayName", "Add Series" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/SimpleCartesianPlot.h" },
		{ "ToolTip", "Adds a new series to the plot using an auto-generated ID, which is returned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleCartesianPlot, nullptr, "BP_AddSeries", nullptr, nullptr, sizeof(SimpleCartesianPlot_eventBP_AddSeries_Parms), Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeries_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeries_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeriesWithId_Statics
	{
		struct SimpleCartesianPlot_eventBP_AddSeriesWithId_Parms
		{
			bool bSuccess;
			FName Id;
			FText Name;
			bool bEnabled;
			bool bShowPoints;
			bool bShowLines;
		};
		static void NewProp_bShowLines_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowLines;
		static void NewProp_bShowPoints_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowPoints;
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Id;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeriesWithId_Statics::NewProp_bShowLines_SetBit(void* Obj)
	{
		((SimpleCartesianPlot_eventBP_AddSeriesWithId_Parms*)Obj)->bShowLines = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeriesWithId_Statics::NewProp_bShowLines = { "bShowLines", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleCartesianPlot_eventBP_AddSeriesWithId_Parms), &Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeriesWithId_Statics::NewProp_bShowLines_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeriesWithId_Statics::NewProp_bShowPoints_SetBit(void* Obj)
	{
		((SimpleCartesianPlot_eventBP_AddSeriesWithId_Parms*)Obj)->bShowPoints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeriesWithId_Statics::NewProp_bShowPoints = { "bShowPoints", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleCartesianPlot_eventBP_AddSeriesWithId_Parms), &Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeriesWithId_Statics::NewProp_bShowPoints_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeriesWithId_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SimpleCartesianPlot_eventBP_AddSeriesWithId_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeriesWithId_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleCartesianPlot_eventBP_AddSeriesWithId_Parms), &Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeriesWithId_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeriesWithId_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleCartesianPlot_eventBP_AddSeriesWithId_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeriesWithId_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleCartesianPlot_eventBP_AddSeriesWithId_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeriesWithId_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((SimpleCartesianPlot_eventBP_AddSeriesWithId_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeriesWithId_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleCartesianPlot_eventBP_AddSeriesWithId_Parms), &Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeriesWithId_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeriesWithId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeriesWithId_Statics::NewProp_bShowLines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeriesWithId_Statics::NewProp_bShowPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeriesWithId_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeriesWithId_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeriesWithId_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeriesWithId_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeriesWithId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "/*\n\x09""Adds a new series to the plot, using the given ID. If the ID is already in use, the function will fail.\n\x09*/" },
		{ "CPP_Default_bEnabled", "true" },
		{ "CPP_Default_bShowLines", "false" },
		{ "CPP_Default_bShowPoints", "true" },
		{ "DisplayName", "Add Series With Id" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/SimpleCartesianPlot.h" },
		{ "ToolTip", "Adds a new series to the plot, using the given ID. If the ID is already in use, the function will fail." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeriesWithId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleCartesianPlot, nullptr, "BP_AddSeriesWithId", nullptr, nullptr, sizeof(SimpleCartesianPlot_eventBP_AddSeriesWithId_Parms), Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeriesWithId_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeriesWithId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeriesWithId_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeriesWithId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeriesWithId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeriesWithId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleCartesianPlot_BP_RemoveAllSeries_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleCartesianPlot_BP_RemoveAllSeries_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "/*\n\x09Removes all series.\n\x09*/" },
		{ "DisplayName", "Remove All Series" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/SimpleCartesianPlot.h" },
		{ "ToolTip", "Removes all series." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleCartesianPlot_BP_RemoveAllSeries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleCartesianPlot, nullptr, "BP_RemoveAllSeries", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleCartesianPlot_BP_RemoveAllSeries_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USimpleCartesianPlot_BP_RemoveAllSeries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleCartesianPlot_BP_RemoveAllSeries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleCartesianPlot_BP_RemoveAllSeries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleCartesianPlot_BP_RemoveSeries_Statics
	{
		struct SimpleCartesianPlot_eventBP_RemoveSeries_Parms
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
	void Z_Construct_UFunction_USimpleCartesianPlot_BP_RemoveSeries_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((SimpleCartesianPlot_eventBP_RemoveSeries_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleCartesianPlot_BP_RemoveSeries_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleCartesianPlot_eventBP_RemoveSeries_Parms), &Z_Construct_UFunction_USimpleCartesianPlot_BP_RemoveSeries_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USimpleCartesianPlot_BP_RemoveSeries_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleCartesianPlot_eventBP_RemoveSeries_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleCartesianPlot_BP_RemoveSeries_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCartesianPlot_BP_RemoveSeries_Statics::NewProp_bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCartesianPlot_BP_RemoveSeries_Statics::NewProp_Id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleCartesianPlot_BP_RemoveSeries_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "/*\n\x09Removes the series with the given ID.\n\x09*/" },
		{ "DisplayName", "Remove Series" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/SimpleCartesianPlot.h" },
		{ "ToolTip", "Removes the series with the given ID." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleCartesianPlot_BP_RemoveSeries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleCartesianPlot, nullptr, "BP_RemoveSeries", nullptr, nullptr, sizeof(SimpleCartesianPlot_eventBP_RemoveSeries_Parms), Z_Construct_UFunction_USimpleCartesianPlot_BP_RemoveSeries_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USimpleCartesianPlot_BP_RemoveSeries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleCartesianPlot_BP_RemoveSeries_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USimpleCartesianPlot_BP_RemoveSeries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleCartesianPlot_BP_RemoveSeries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleCartesianPlot_BP_RemoveSeries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USimpleCartesianPlot_NoRegister()
	{
		return USimpleCartesianPlot::StaticClass();
	}
	struct Z_Construct_UClass_USimpleCartesianPlot_Statics
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
	UObject* (*const Z_Construct_UClass_USimpleCartesianPlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKantanCartesianPlotBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsUMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleCartesianPlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleCartesianPlot_BP_AddDatapoint, "BP_AddDatapoint" }, // 2908932245
		{ &Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeries, "BP_AddSeries" }, // 602590111
		{ &Z_Construct_UFunction_USimpleCartesianPlot_BP_AddSeriesWithId, "BP_AddSeriesWithId" }, // 2721747235
		{ &Z_Construct_UFunction_USimpleCartesianPlot_BP_RemoveAllSeries, "BP_RemoveAllSeries" }, // 2449832134
		{ &Z_Construct_UFunction_USimpleCartesianPlot_BP_RemoveSeries, "BP_RemoveSeries" }, // 2267145457
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleCartesianPlot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\nA simple cartesian plot widget with integrated data source.\n*/" },
		{ "DisplayName", "Cartesian Plot" },
		{ "HideCategories", "Preview" },
		{ "IncludePath", "SimpleCartesianPlot.h" },
		{ "ModuleRelativePath", "Public/SimpleCartesianPlot.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A simple cartesian plot widget with integrated data source." },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USimpleCartesianPlot_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UKantanCartesianDatasourceInterface_NoRegister, (int32)VTABLE_OFFSET(USimpleCartesianPlot, IKantanCartesianDatasourceInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleCartesianPlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleCartesianPlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USimpleCartesianPlot_Statics::ClassParams = {
		&USimpleCartesianPlot::StaticClass,
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
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USimpleCartesianPlot_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USimpleCartesianPlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleCartesianPlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USimpleCartesianPlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USimpleCartesianPlot, 2972292507);
	template<> KANTANCHARTSUMG_API UClass* StaticClass<USimpleCartesianPlot>()
	{
		return USimpleCartesianPlot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USimpleCartesianPlot(Z_Construct_UClass_USimpleCartesianPlot, &USimpleCartesianPlot::StaticClass, TEXT("/Script/KantanChartsUMG"), TEXT("USimpleCartesianPlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleCartesianPlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
