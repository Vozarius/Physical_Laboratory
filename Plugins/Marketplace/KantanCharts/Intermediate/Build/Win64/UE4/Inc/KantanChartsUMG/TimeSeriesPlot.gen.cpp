// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KantanChartsUMG/Public/TimeSeriesPlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeSeriesPlot() {}
// Cross Module References
	KANTANCHARTSUMG_API UClass* Z_Construct_UClass_UTimeSeriesPlot_NoRegister();
	KANTANCHARTSUMG_API UClass* Z_Construct_UClass_UTimeSeriesPlot();
	KANTANCHARTSUMG_API UClass* Z_Construct_UClass_UKantanTimeSeriesPlotBase();
	UPackage* Z_Construct_UPackage__Script_KantanChartsUMG();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_UTimeSeriesPlot_SetDatasource();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UTimeSeriesPlot::StaticRegisterNativesUTimeSeriesPlot()
	{
		UClass* Class = UTimeSeriesPlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDatasource", &UTimeSeriesPlot::execSetDatasource },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTimeSeriesPlot_SetDatasource_Statics
	{
		struct TimeSeriesPlot_eventSetDatasource_Parms
		{
			UObject* InDatasource;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InDatasource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTimeSeriesPlot_SetDatasource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TimeSeriesPlot_eventSetDatasource_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimeSeriesPlot_SetDatasource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TimeSeriesPlot_eventSetDatasource_Parms), &Z_Construct_UFunction_UTimeSeriesPlot_SetDatasource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTimeSeriesPlot_SetDatasource_Statics::NewProp_InDatasource = { "InDatasource", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TimeSeriesPlot_eventSetDatasource_Parms, InDatasource), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeSeriesPlot_SetDatasource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeSeriesPlot_SetDatasource_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeSeriesPlot_SetDatasource_Statics::NewProp_InDatasource,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTimeSeriesPlot_SetDatasource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "/*\n\x09Set the data source - the object must implement IKantanCartesianDatasourceInterface for this call to succeed.\n\x09*/" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/TimeSeriesPlot.h" },
		{ "ToolTip", "Set the data source - the object must implement IKantanCartesianDatasourceInterface for this call to succeed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeSeriesPlot_SetDatasource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimeSeriesPlot, nullptr, "SetDatasource", nullptr, nullptr, sizeof(TimeSeriesPlot_eventSetDatasource_Parms), Z_Construct_UFunction_UTimeSeriesPlot_SetDatasource_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTimeSeriesPlot_SetDatasource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTimeSeriesPlot_SetDatasource_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTimeSeriesPlot_SetDatasource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTimeSeriesPlot_SetDatasource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTimeSeriesPlot_SetDatasource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTimeSeriesPlot_NoRegister()
	{
		return UTimeSeriesPlot::StaticClass();
	}
	struct Z_Construct_UClass_UTimeSeriesPlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Datasource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Datasource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimeSeriesPlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKantanTimeSeriesPlotBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsUMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTimeSeriesPlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTimeSeriesPlot_SetDatasource, "SetDatasource" }, // 2590035058
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeSeriesPlot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\nA cartesian plot widget specialized for plotting time-varying series.\nCan be hooked up to any datasource object implementing IKantanCartesianDatasourceInterface.\n*/" },
		{ "DisplayName", "Time Series Plot (Advanced)" },
		{ "HideCategories", "Preview" },
		{ "IncludePath", "TimeSeriesPlot.h" },
		{ "ModuleRelativePath", "Public/TimeSeriesPlot.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A cartesian plot widget specialized for plotting time-varying series.\nCan be hooked up to any datasource object implementing IKantanCartesianDatasourceInterface." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeSeriesPlot_Statics::NewProp_Datasource_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "/*\n\x09""Datasource for the plot. Must implement IKantanCartesianDatasourceInterface.\n\x09Generally you should not set this directly in the editor, but through a call to SetDatasource.\n\x09*/" },
		{ "DisplayName", "Datasource" },
		{ "ModuleRelativePath", "Public/TimeSeriesPlot.h" },
		{ "ToolTip", "Datasource for the plot. Must implement IKantanCartesianDatasourceInterface.\nGenerally you should not set this directly in the editor, but through a call to SetDatasource." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTimeSeriesPlot_Statics::NewProp_Datasource = { "Datasource", nullptr, (EPropertyFlags)0x00200c0000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTimeSeriesPlot, Datasource), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTimeSeriesPlot_Statics::NewProp_Datasource_MetaData, ARRAY_COUNT(Z_Construct_UClass_UTimeSeriesPlot_Statics::NewProp_Datasource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimeSeriesPlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeSeriesPlot_Statics::NewProp_Datasource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimeSeriesPlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimeSeriesPlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTimeSeriesPlot_Statics::ClassParams = {
		&UTimeSeriesPlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTimeSeriesPlot_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UTimeSeriesPlot_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTimeSeriesPlot_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTimeSeriesPlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimeSeriesPlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTimeSeriesPlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTimeSeriesPlot, 685945847);
	template<> KANTANCHARTSUMG_API UClass* StaticClass<UTimeSeriesPlot>()
	{
		return UTimeSeriesPlot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTimeSeriesPlot(Z_Construct_UClass_UTimeSeriesPlot, &UTimeSeriesPlot::StaticClass, TEXT("/Script/KantanChartsUMG"), TEXT("UTimeSeriesPlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimeSeriesPlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
