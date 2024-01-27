// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KantanChartsUMG/Public/SimpleTimeSeriesPlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleTimeSeriesPlot() {}
// Cross Module References
	KANTANCHARTSUMG_API UClass* Z_Construct_UClass_USimpleTimeSeriesPlot_NoRegister();
	KANTANCHARTSUMG_API UClass* Z_Construct_UClass_USimpleTimeSeriesPlot();
	KANTANCHARTSUMG_API UClass* Z_Construct_UClass_UKantanTimeSeriesPlotBase();
	UPackage* Z_Construct_UPackage__Script_KantanChartsUMG();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapointNow();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeries();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeriesWithId();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_RemoveAllSeries();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_RemoveSeries();
	KANTANCHARTSDATASOURCE_API UClass* Z_Construct_UClass_UKantanCartesianDatasourceInterface_NoRegister();
// End Cross Module References
	void USimpleTimeSeriesPlot::StaticRegisterNativesUSimpleTimeSeriesPlot()
	{
		UClass* Class = USimpleTimeSeriesPlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_AddDatapoint", &USimpleTimeSeriesPlot::execBP_AddDatapoint },
			{ "BP_AddDatapointNow", &USimpleTimeSeriesPlot::execBP_AddDatapointNow },
			{ "BP_AddSeries", &USimpleTimeSeriesPlot::execBP_AddSeries },
			{ "BP_AddSeriesWithId", &USimpleTimeSeriesPlot::execBP_AddSeriesWithId },
			{ "BP_RemoveAllSeries", &USimpleTimeSeriesPlot::execBP_RemoveAllSeries },
			{ "BP_RemoveSeries", &USimpleTimeSeriesPlot::execBP_RemoveSeries },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapoint_Statics
	{
		struct SimpleTimeSeriesPlot_eventBP_AddDatapoint_Parms
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
	void Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapoint_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((SimpleTimeSeriesPlot_eventBP_AddDatapoint_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapoint_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleTimeSeriesPlot_eventBP_AddDatapoint_Parms), &Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapoint_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapoint_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapoint_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleTimeSeriesPlot_eventBP_AddDatapoint_Parms, Point), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapoint_Statics::NewProp_Point_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapoint_Statics::NewProp_Point_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapoint_Statics::NewProp_SeriesId = { "SeriesId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleTimeSeriesPlot_eventBP_AddDatapoint_Parms, SeriesId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapoint_Statics::NewProp_bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapoint_Statics::NewProp_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapoint_Statics::NewProp_SeriesId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "/*\n\x09""Add a datapoint to the specified series.\n\x09*/" },
		{ "DisplayName", "Add Datapoint" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/SimpleTimeSeriesPlot.h" },
		{ "ToolTip", "Add a datapoint to the specified series." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleTimeSeriesPlot, nullptr, "BP_AddDatapoint", nullptr, nullptr, sizeof(SimpleTimeSeriesPlot_eventBP_AddDatapoint_Parms), Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapointNow_Statics
	{
		struct SimpleTimeSeriesPlot_eventBP_AddDatapointNow_Parms
		{
			FName SeriesId;
			float Value;
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SeriesId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapointNow_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((SimpleTimeSeriesPlot_eventBP_AddDatapointNow_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapointNow_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleTimeSeriesPlot_eventBP_AddDatapointNow_Parms), &Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapointNow_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapointNow_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleTimeSeriesPlot_eventBP_AddDatapointNow_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapointNow_Statics::NewProp_SeriesId = { "SeriesId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleTimeSeriesPlot_eventBP_AddDatapointNow_Parms, SeriesId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapointNow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapointNow_Statics::NewProp_bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapointNow_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapointNow_Statics::NewProp_SeriesId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapointNow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "/*\n\x09""Add a datapoint using the current game time as the x-axis value.\n\x09*/" },
		{ "DisplayName", "Add Datapoint Now" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/SimpleTimeSeriesPlot.h" },
		{ "ToolTip", "Add a datapoint using the current game time as the x-axis value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapointNow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleTimeSeriesPlot, nullptr, "BP_AddDatapointNow", nullptr, nullptr, sizeof(SimpleTimeSeriesPlot_eventBP_AddDatapointNow_Parms), Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapointNow_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapointNow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapointNow_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapointNow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapointNow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapointNow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeries_Statics
	{
		struct SimpleTimeSeriesPlot_eventBP_AddSeries_Parms
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
	void Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeries_Statics::NewProp_bShowLines_SetBit(void* Obj)
	{
		((SimpleTimeSeriesPlot_eventBP_AddSeries_Parms*)Obj)->bShowLines = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeries_Statics::NewProp_bShowLines = { "bShowLines", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleTimeSeriesPlot_eventBP_AddSeries_Parms), &Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeries_Statics::NewProp_bShowLines_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeries_Statics::NewProp_bShowPoints_SetBit(void* Obj)
	{
		((SimpleTimeSeriesPlot_eventBP_AddSeries_Parms*)Obj)->bShowPoints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeries_Statics::NewProp_bShowPoints = { "bShowPoints", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleTimeSeriesPlot_eventBP_AddSeries_Parms), &Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeries_Statics::NewProp_bShowPoints_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeries_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SimpleTimeSeriesPlot_eventBP_AddSeries_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeries_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleTimeSeriesPlot_eventBP_AddSeries_Parms), &Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeries_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeries_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleTimeSeriesPlot_eventBP_AddSeries_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeries_Statics::NewProp_SeriesId = { "SeriesId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleTimeSeriesPlot_eventBP_AddSeries_Parms, SeriesId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeries_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeries_Statics::NewProp_bShowLines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeries_Statics::NewProp_bShowPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeries_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeries_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeries_Statics::NewProp_SeriesId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeries_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "/*\n\x09""Add a series and return an auto-generated ID.\n\x09*/" },
		{ "CPP_Default_bEnabled", "true" },
		{ "CPP_Default_bShowLines", "false" },
		{ "CPP_Default_bShowPoints", "true" },
		{ "DisplayName", "Add Series" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/SimpleTimeSeriesPlot.h" },
		{ "ToolTip", "Add a series and return an auto-generated ID." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleTimeSeriesPlot, nullptr, "BP_AddSeries", nullptr, nullptr, sizeof(SimpleTimeSeriesPlot_eventBP_AddSeries_Parms), Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeries_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeries_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeriesWithId_Statics
	{
		struct SimpleTimeSeriesPlot_eventBP_AddSeriesWithId_Parms
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
	void Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeriesWithId_Statics::NewProp_bShowLines_SetBit(void* Obj)
	{
		((SimpleTimeSeriesPlot_eventBP_AddSeriesWithId_Parms*)Obj)->bShowLines = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeriesWithId_Statics::NewProp_bShowLines = { "bShowLines", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleTimeSeriesPlot_eventBP_AddSeriesWithId_Parms), &Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeriesWithId_Statics::NewProp_bShowLines_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeriesWithId_Statics::NewProp_bShowPoints_SetBit(void* Obj)
	{
		((SimpleTimeSeriesPlot_eventBP_AddSeriesWithId_Parms*)Obj)->bShowPoints = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeriesWithId_Statics::NewProp_bShowPoints = { "bShowPoints", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleTimeSeriesPlot_eventBP_AddSeriesWithId_Parms), &Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeriesWithId_Statics::NewProp_bShowPoints_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeriesWithId_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SimpleTimeSeriesPlot_eventBP_AddSeriesWithId_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeriesWithId_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleTimeSeriesPlot_eventBP_AddSeriesWithId_Parms), &Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeriesWithId_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeriesWithId_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleTimeSeriesPlot_eventBP_AddSeriesWithId_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeriesWithId_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleTimeSeriesPlot_eventBP_AddSeriesWithId_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeriesWithId_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((SimpleTimeSeriesPlot_eventBP_AddSeriesWithId_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeriesWithId_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleTimeSeriesPlot_eventBP_AddSeriesWithId_Parms), &Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeriesWithId_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeriesWithId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeriesWithId_Statics::NewProp_bShowLines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeriesWithId_Statics::NewProp_bShowPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeriesWithId_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeriesWithId_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeriesWithId_Statics::NewProp_Id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeriesWithId_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeriesWithId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "/*\n\x09""Add a series using the specified ID. Will fail if the ID is already in use.\n\x09*/" },
		{ "CPP_Default_bEnabled", "true" },
		{ "CPP_Default_bShowLines", "false" },
		{ "CPP_Default_bShowPoints", "true" },
		{ "DisplayName", "Add Series With Id" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/SimpleTimeSeriesPlot.h" },
		{ "ToolTip", "Add a series using the specified ID. Will fail if the ID is already in use." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeriesWithId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleTimeSeriesPlot, nullptr, "BP_AddSeriesWithId", nullptr, nullptr, sizeof(SimpleTimeSeriesPlot_eventBP_AddSeriesWithId_Parms), Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeriesWithId_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeriesWithId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeriesWithId_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeriesWithId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeriesWithId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeriesWithId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_RemoveAllSeries_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_RemoveAllSeries_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "/*\n\x09Remove all series from the plot.\n\x09*/" },
		{ "DisplayName", "Remove All Series" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/SimpleTimeSeriesPlot.h" },
		{ "ToolTip", "Remove all series from the plot." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_RemoveAllSeries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleTimeSeriesPlot, nullptr, "BP_RemoveAllSeries", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_RemoveAllSeries_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_RemoveAllSeries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_RemoveAllSeries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_RemoveAllSeries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_RemoveSeries_Statics
	{
		struct SimpleTimeSeriesPlot_eventBP_RemoveSeries_Parms
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
	void Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_RemoveSeries_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((SimpleTimeSeriesPlot_eventBP_RemoveSeries_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_RemoveSeries_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SimpleTimeSeriesPlot_eventBP_RemoveSeries_Parms), &Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_RemoveSeries_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_RemoveSeries_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SimpleTimeSeriesPlot_eventBP_RemoveSeries_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_RemoveSeries_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_RemoveSeries_Statics::NewProp_bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_RemoveSeries_Statics::NewProp_Id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_RemoveSeries_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "/*\n\x09Remove existing series with given ID.\n\x09*/" },
		{ "DisplayName", "Remove Series" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/SimpleTimeSeriesPlot.h" },
		{ "ToolTip", "Remove existing series with given ID." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_RemoveSeries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleTimeSeriesPlot, nullptr, "BP_RemoveSeries", nullptr, nullptr, sizeof(SimpleTimeSeriesPlot_eventBP_RemoveSeries_Parms), Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_RemoveSeries_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_RemoveSeries_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_RemoveSeries_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_RemoveSeries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_RemoveSeries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_RemoveSeries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USimpleTimeSeriesPlot_NoRegister()
	{
		return USimpleTimeSeriesPlot::StaticClass();
	}
	struct Z_Construct_UClass_USimpleTimeSeriesPlot_Statics
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
	UObject* (*const Z_Construct_UClass_USimpleTimeSeriesPlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKantanTimeSeriesPlotBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsUMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleTimeSeriesPlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapoint, "BP_AddDatapoint" }, // 1777986177
		{ &Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddDatapointNow, "BP_AddDatapointNow" }, // 4215126300
		{ &Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeries, "BP_AddSeries" }, // 1200366377
		{ &Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_AddSeriesWithId, "BP_AddSeriesWithId" }, // 1900997140
		{ &Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_RemoveAllSeries, "BP_RemoveAllSeries" }, // 1624419937
		{ &Z_Construct_UFunction_USimpleTimeSeriesPlot_BP_RemoveSeries, "BP_RemoveSeries" }, // 3116999746
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleTimeSeriesPlot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\nA simple cartesian plot widget specialized for plotting time-varying series, with integrated datasource.\n*/" },
		{ "DisplayName", "Time Series Plot" },
		{ "HideCategories", "Preview" },
		{ "IncludePath", "SimpleTimeSeriesPlot.h" },
		{ "ModuleRelativePath", "Public/SimpleTimeSeriesPlot.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A simple cartesian plot widget specialized for plotting time-varying series, with integrated datasource." },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USimpleTimeSeriesPlot_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UKantanCartesianDatasourceInterface_NoRegister, (int32)VTABLE_OFFSET(USimpleTimeSeriesPlot, IKantanCartesianDatasourceInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleTimeSeriesPlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleTimeSeriesPlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USimpleTimeSeriesPlot_Statics::ClassParams = {
		&USimpleTimeSeriesPlot::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USimpleTimeSeriesPlot_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USimpleTimeSeriesPlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleTimeSeriesPlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USimpleTimeSeriesPlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USimpleTimeSeriesPlot, 1928674251);
	template<> KANTANCHARTSUMG_API UClass* StaticClass<USimpleTimeSeriesPlot>()
	{
		return USimpleTimeSeriesPlot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USimpleTimeSeriesPlot(Z_Construct_UClass_USimpleTimeSeriesPlot, &USimpleTimeSeriesPlot::StaticClass, TEXT("/Script/KantanChartsUMG"), TEXT("USimpleTimeSeriesPlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleTimeSeriesPlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
