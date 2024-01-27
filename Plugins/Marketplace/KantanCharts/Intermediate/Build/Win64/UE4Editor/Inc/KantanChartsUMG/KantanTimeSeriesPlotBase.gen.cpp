// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KantanChartsUMG/Public/KantanTimeSeriesPlotBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKantanTimeSeriesPlotBase() {}
// Cross Module References
	KANTANCHARTSUMG_API UClass* Z_Construct_UClass_UKantanTimeSeriesPlotBase_NoRegister();
	KANTANCHARTSUMG_API UClass* Z_Construct_UClass_UKantanTimeSeriesPlotBase();
	KANTANCHARTSUMG_API UClass* Z_Construct_UClass_UKantanCartesianChartBase();
	UPackage* Z_Construct_UPackage__Script_KantanChartsUMG();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetLowerTimeBound();
	KANTANCHARTSSLATE_API UScriptStruct* Z_Construct_UScriptStruct_FCartesianRangeBound();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetLowerValueBound();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetUpperTimeBound();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetUpperValueBound();
// End Cross Module References
	void UKantanTimeSeriesPlotBase::StaticRegisterNativesUKantanTimeSeriesPlotBase()
	{
		UClass* Class = UKantanTimeSeriesPlotBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetLowerTimeBound", &UKantanTimeSeriesPlotBase::execSetLowerTimeBound },
			{ "SetLowerValueBound", &UKantanTimeSeriesPlotBase::execSetLowerValueBound },
			{ "SetUpperTimeBound", &UKantanTimeSeriesPlotBase::execSetUpperTimeBound },
			{ "SetUpperValueBound", &UKantanTimeSeriesPlotBase::execSetUpperValueBound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetLowerTimeBound_Statics
	{
		struct KantanTimeSeriesPlotBase_eventSetLowerTimeBound_Parms
		{
			FCartesianRangeBound InLowerBound;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLowerBound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetLowerTimeBound_Statics::NewProp_InLowerBound = { "InLowerBound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanTimeSeriesPlotBase_eventSetLowerTimeBound_Parms, InLowerBound), Z_Construct_UScriptStruct_FCartesianRangeBound, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetLowerTimeBound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetLowerTimeBound_Statics::NewProp_InLowerBound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetLowerTimeBound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Update lower time bound.\n\x09*/" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/KantanTimeSeriesPlotBase.h" },
		{ "ToolTip", "Update lower time bound." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetLowerTimeBound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanTimeSeriesPlotBase, nullptr, "SetLowerTimeBound", nullptr, nullptr, sizeof(KantanTimeSeriesPlotBase_eventSetLowerTimeBound_Parms), Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetLowerTimeBound_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetLowerTimeBound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetLowerTimeBound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetLowerTimeBound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetLowerTimeBound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetLowerTimeBound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetLowerValueBound_Statics
	{
		struct KantanTimeSeriesPlotBase_eventSetLowerValueBound_Parms
		{
			FCartesianRangeBound InLowerBound;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLowerBound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetLowerValueBound_Statics::NewProp_InLowerBound = { "InLowerBound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanTimeSeriesPlotBase_eventSetLowerValueBound_Parms, InLowerBound), Z_Construct_UScriptStruct_FCartesianRangeBound, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetLowerValueBound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetLowerValueBound_Statics::NewProp_InLowerBound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetLowerValueBound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Update lower value bound.\n\x09*/" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/KantanTimeSeriesPlotBase.h" },
		{ "ToolTip", "Update lower value bound." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetLowerValueBound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanTimeSeriesPlotBase, nullptr, "SetLowerValueBound", nullptr, nullptr, sizeof(KantanTimeSeriesPlotBase_eventSetLowerValueBound_Parms), Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetLowerValueBound_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetLowerValueBound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetLowerValueBound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetLowerValueBound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetLowerValueBound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetLowerValueBound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetUpperTimeBound_Statics
	{
		struct KantanTimeSeriesPlotBase_eventSetUpperTimeBound_Parms
		{
			FCartesianRangeBound InUpperBound;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InUpperBound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetUpperTimeBound_Statics::NewProp_InUpperBound = { "InUpperBound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanTimeSeriesPlotBase_eventSetUpperTimeBound_Parms, InUpperBound), Z_Construct_UScriptStruct_FCartesianRangeBound, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetUpperTimeBound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetUpperTimeBound_Statics::NewProp_InUpperBound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetUpperTimeBound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Update upper time bound.\n\x09*/" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/KantanTimeSeriesPlotBase.h" },
		{ "ToolTip", "Update upper time bound." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetUpperTimeBound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanTimeSeriesPlotBase, nullptr, "SetUpperTimeBound", nullptr, nullptr, sizeof(KantanTimeSeriesPlotBase_eventSetUpperTimeBound_Parms), Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetUpperTimeBound_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetUpperTimeBound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetUpperTimeBound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetUpperTimeBound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetUpperTimeBound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetUpperTimeBound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetUpperValueBound_Statics
	{
		struct KantanTimeSeriesPlotBase_eventSetUpperValueBound_Parms
		{
			FCartesianRangeBound InUpperBound;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InUpperBound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetUpperValueBound_Statics::NewProp_InUpperBound = { "InUpperBound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanTimeSeriesPlotBase_eventSetUpperValueBound_Parms, InUpperBound), Z_Construct_UScriptStruct_FCartesianRangeBound, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetUpperValueBound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetUpperValueBound_Statics::NewProp_InUpperBound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetUpperValueBound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Update upper value bound.\n\x09*/" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/KantanTimeSeriesPlotBase.h" },
		{ "ToolTip", "Update upper value bound." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetUpperValueBound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanTimeSeriesPlotBase, nullptr, "SetUpperValueBound", nullptr, nullptr, sizeof(KantanTimeSeriesPlotBase_eventSetUpperValueBound_Parms), Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetUpperValueBound_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetUpperValueBound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetUpperValueBound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetUpperValueBound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetUpperValueBound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetUpperValueBound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKantanTimeSeriesPlotBase_NoRegister()
	{
		return UKantanTimeSeriesPlotBase::StaticClass();
	}
	struct Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExtendValueRangeToZero_MetaData[];
#endif
		static void NewProp_bExtendValueRangeToZero_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExtendValueRangeToZero;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperValueBound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpperValueBound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowerValueBound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LowerValueBound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperTimeBound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpperTimeBound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowerTimeBound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LowerTimeBound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayTimeRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DisplayTimeRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFixedTimeRange_MetaData[];
#endif
		static void NewProp_bUseFixedTimeRange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFixedTimeRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKantanCartesianChartBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsUMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetLowerTimeBound, "SetLowerTimeBound" }, // 1811555288
		{ &Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetLowerValueBound, "SetLowerValueBound" }, // 3223854198
		{ &Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetUpperTimeBound, "SetUpperTimeBound" }, // 2169168331
		{ &Z_Construct_UFunction_UKantanTimeSeriesPlotBase_SetUpperValueBound, "SetUpperValueBound" }, // 137073947
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\nUMG class implementing a cartesian chart specialized for plotting time-varying series.\n*/" },
		{ "HideCategories", "Preview" },
		{ "IncludePath", "KantanTimeSeriesPlotBase.h" },
		{ "ModuleRelativePath", "Public/KantanTimeSeriesPlotBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UMG class implementing a cartesian chart specialized for plotting time-varying series." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_bExtendValueRangeToZero_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09If true and Fit to Data bounds are used for the Y axis, the axis range will be extended up or down as necessary, to include zero.\n\x09*/" },
		{ "ModuleRelativePath", "Public/KantanTimeSeriesPlotBase.h" },
		{ "ToolTip", "If true and Fit to Data bounds are used for the Y axis, the axis range will be extended up or down as necessary, to include zero." },
	};
#endif
	void Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_bExtendValueRangeToZero_SetBit(void* Obj)
	{
		((UKantanTimeSeriesPlotBase*)Obj)->bExtendValueRangeToZero = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_bExtendValueRangeToZero = { "bExtendValueRangeToZero", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKantanTimeSeriesPlotBase), &Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_bExtendValueRangeToZero_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_bExtendValueRangeToZero_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_bExtendValueRangeToZero_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_UpperValueBound_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Upper bound for the Y (value) axis.\n\x09*/" },
		{ "ModuleRelativePath", "Public/KantanTimeSeriesPlotBase.h" },
		{ "ToolTip", "Upper bound for the Y (value) axis." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_UpperValueBound = { "UpperValueBound", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanTimeSeriesPlotBase, UpperValueBound), Z_Construct_UScriptStruct_FCartesianRangeBound, METADATA_PARAMS(Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_UpperValueBound_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_UpperValueBound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_LowerValueBound_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Lower bound for the Y (value) axis.\n\x09*/" },
		{ "ModuleRelativePath", "Public/KantanTimeSeriesPlotBase.h" },
		{ "ToolTip", "Lower bound for the Y (value) axis." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_LowerValueBound = { "LowerValueBound", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanTimeSeriesPlotBase, LowerValueBound), Z_Construct_UScriptStruct_FCartesianRangeBound, METADATA_PARAMS(Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_LowerValueBound_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_LowerValueBound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_UpperTimeBound_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Upper bound for the X (time) axis.\n\x09*/" },
		{ "ModuleRelativePath", "Public/KantanTimeSeriesPlotBase.h" },
		{ "ToolTip", "Upper bound for the X (time) axis." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_UpperTimeBound = { "UpperTimeBound", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanTimeSeriesPlotBase, UpperTimeBound), Z_Construct_UScriptStruct_FCartesianRangeBound, METADATA_PARAMS(Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_UpperTimeBound_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_UpperTimeBound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_LowerTimeBound_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Lower bound for the X (time) axis.\n\x09*/" },
		{ "EditCondition", "!bUseFixedTimeRange" },
		{ "ModuleRelativePath", "Public/KantanTimeSeriesPlotBase.h" },
		{ "ToolTip", "Lower bound for the X (time) axis." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_LowerTimeBound = { "LowerTimeBound", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanTimeSeriesPlotBase, LowerTimeBound), Z_Construct_UScriptStruct_FCartesianRangeBound, METADATA_PARAMS(Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_LowerTimeBound_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_LowerTimeBound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_DisplayTimeRange_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09The length of time to display data for.\n\x09*/" },
		{ "EditCondition", "bUseFixedTimeRange" },
		{ "ModuleRelativePath", "Public/KantanTimeSeriesPlotBase.h" },
		{ "ToolTip", "The length of time to display data for." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_DisplayTimeRange = { "DisplayTimeRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanTimeSeriesPlotBase, DisplayTimeRange), METADATA_PARAMS(Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_DisplayTimeRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_DisplayTimeRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_bUseFixedTimeRange_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09Whether to display a fixed length of time on the X axis.\n\x09*/" },
		{ "ModuleRelativePath", "Public/KantanTimeSeriesPlotBase.h" },
		{ "ToolTip", "Whether to display a fixed length of time on the X axis." },
	};
#endif
	void Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_bUseFixedTimeRange_SetBit(void* Obj)
	{
		((UKantanTimeSeriesPlotBase*)Obj)->bUseFixedTimeRange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_bUseFixedTimeRange = { "bUseFixedTimeRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKantanTimeSeriesPlotBase), &Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_bUseFixedTimeRange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_bUseFixedTimeRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_bUseFixedTimeRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_bExtendValueRangeToZero,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_UpperValueBound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_LowerValueBound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_UpperTimeBound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_LowerTimeBound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_DisplayTimeRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::NewProp_bUseFixedTimeRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKantanTimeSeriesPlotBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::ClassParams = {
		&UKantanTimeSeriesPlotBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::PropPointers),
		0,
		0x00B000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKantanTimeSeriesPlotBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKantanTimeSeriesPlotBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKantanTimeSeriesPlotBase, 2633114105);
	template<> KANTANCHARTSUMG_API UClass* StaticClass<UKantanTimeSeriesPlotBase>()
	{
		return UKantanTimeSeriesPlotBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKantanTimeSeriesPlotBase(Z_Construct_UClass_UKantanTimeSeriesPlotBase, &UKantanTimeSeriesPlotBase::StaticClass, TEXT("/Script/KantanChartsUMG"), TEXT("UKantanTimeSeriesPlotBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKantanTimeSeriesPlotBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
