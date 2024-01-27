// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KantanChartsUMG/Public/KantanCategoryChart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKantanCategoryChart() {}
// Cross Module References
	KANTANCHARTSUMG_API UScriptStruct* Z_Construct_UScriptStruct_FCategoryStyleManualMapping();
	UPackage* Z_Construct_UPackage__Script_KantanChartsUMG();
	KANTANCHARTSSLATE_API UScriptStruct* Z_Construct_UScriptStruct_FKantanCategoryStyle();
	KANTANCHARTSUMG_API UClass* Z_Construct_UClass_UKantanCategoryChart_NoRegister();
	KANTANCHARTSUMG_API UClass* Z_Construct_UClass_UKantanCategoryChart();
	KANTANCHARTSUMG_API UClass* Z_Construct_UClass_UKantanChart();
	KANTANCHARTSUMG_API UFunction* Z_Construct_UFunction_UKantanCategoryChart_AddCategoryStyleOverride();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	KANTANCHARTSSLATE_API UClass* Z_Construct_UClass_UKantanCategoryStyleSet_NoRegister();
// End Cross Module References
class UScriptStruct* FCategoryStyleManualMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KANTANCHARTSUMG_API uint32 Get_Z_Construct_UScriptStruct_FCategoryStyleManualMapping_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCategoryStyleManualMapping, Z_Construct_UPackage__Script_KantanChartsUMG(), TEXT("CategoryStyleManualMapping"), sizeof(FCategoryStyleManualMapping), Get_Z_Construct_UScriptStruct_FCategoryStyleManualMapping_Hash());
	}
	return Singleton;
}
template<> KANTANCHARTSUMG_API UScriptStruct* StaticStruct<FCategoryStyleManualMapping>()
{
	return FCategoryStyleManualMapping::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCategoryStyleManualMapping(FCategoryStyleManualMapping::StaticStruct, TEXT("/Script/KantanChartsUMG"), TEXT("CategoryStyleManualMapping"), false, nullptr, nullptr);
static struct FScriptStruct_KantanChartsUMG_StaticRegisterNativesFCategoryStyleManualMapping
{
	FScriptStruct_KantanChartsUMG_StaticRegisterNativesFCategoryStyleManualMapping()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CategoryStyleManualMapping")),new UScriptStruct::TCppStructOps<FCategoryStyleManualMapping>);
	}
} ScriptStruct_KantanChartsUMG_StaticRegisterNativesFCategoryStyleManualMapping;
	struct Z_Construct_UScriptStruct_FCategoryStyleManualMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Style;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CategoryId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCategoryStyleManualMapping_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\nA mapping from a category id to a category style.\nUsed when we want to specify manually which style a particular category in the datasource should use.\n*/" },
		{ "ModuleRelativePath", "Public/KantanCategoryChart.h" },
		{ "ToolTip", "A mapping from a category id to a category style.\nUsed when we want to specify manually which style a particular category in the datasource should use." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCategoryStyleManualMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCategoryStyleManualMapping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCategoryStyleManualMapping_Statics::NewProp_Style_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/KantanCategoryChart.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCategoryStyleManualMapping_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCategoryStyleManualMapping, Style), Z_Construct_UScriptStruct_FKantanCategoryStyle, METADATA_PARAMS(Z_Construct_UScriptStruct_FCategoryStyleManualMapping_Statics::NewProp_Style_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCategoryStyleManualMapping_Statics::NewProp_Style_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCategoryStyleManualMapping_Statics::NewProp_CategoryId_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/KantanCategoryChart.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCategoryStyleManualMapping_Statics::NewProp_CategoryId = { "CategoryId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCategoryStyleManualMapping, CategoryId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCategoryStyleManualMapping_Statics::NewProp_CategoryId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCategoryStyleManualMapping_Statics::NewProp_CategoryId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCategoryStyleManualMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCategoryStyleManualMapping_Statics::NewProp_Style,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCategoryStyleManualMapping_Statics::NewProp_CategoryId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCategoryStyleManualMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsUMG,
		nullptr,
		&NewStructOps,
		"CategoryStyleManualMapping",
		sizeof(FCategoryStyleManualMapping),
		alignof(FCategoryStyleManualMapping),
		Z_Construct_UScriptStruct_FCategoryStyleManualMapping_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCategoryStyleManualMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCategoryStyleManualMapping_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCategoryStyleManualMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCategoryStyleManualMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCategoryStyleManualMapping_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KantanChartsUMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CategoryStyleManualMapping"), sizeof(FCategoryStyleManualMapping), Get_Z_Construct_UScriptStruct_FCategoryStyleManualMapping_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCategoryStyleManualMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCategoryStyleManualMapping_Hash() { return 746531612U; }
	void UKantanCategoryChart::StaticRegisterNativesUKantanCategoryChart()
	{
		UClass* Class = UKantanCategoryChart::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCategoryStyleOverride", &UKantanCategoryChart::execAddCategoryStyleOverride },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKantanCategoryChart_AddCategoryStyleOverride_Statics
	{
		struct KantanCategoryChart_eventAddCategoryStyleOverride_Parms
		{
			FName CategoryId;
			FLinearColor Color;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CategoryId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKantanCategoryChart_AddCategoryStyleOverride_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanCategoryChart_eventAddCategoryStyleOverride_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKantanCategoryChart_AddCategoryStyleOverride_Statics::NewProp_CategoryId = { "CategoryId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanCategoryChart_eventAddCategoryStyleOverride_Parms, CategoryId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanCategoryChart_AddCategoryStyleOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCategoryChart_AddCategoryStyleOverride_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCategoryChart_AddCategoryStyleOverride_Statics::NewProp_CategoryId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanCategoryChart_AddCategoryStyleOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Category Styles" },
		{ "Comment", "/*\n\x09Set up a manual category style for the given category id. Manual styles will take precedence over\n\x09""default and auto styles.\n\x09*/" },
		{ "Keywords", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/KantanCategoryChart.h" },
		{ "ToolTip", "Set up a manual category style for the given category id. Manual styles will take precedence over\ndefault and auto styles." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanCategoryChart_AddCategoryStyleOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanCategoryChart, nullptr, "AddCategoryStyleOverride", nullptr, nullptr, sizeof(KantanCategoryChart_eventAddCategoryStyleOverride_Parms), Z_Construct_UFunction_UKantanCategoryChart_AddCategoryStyleOverride_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanCategoryChart_AddCategoryStyleOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanCategoryChart_AddCategoryStyleOverride_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanCategoryChart_AddCategoryStyleOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanCategoryChart_AddCategoryStyleOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanCategoryChart_AddCategoryStyleOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKantanCategoryChart_NoRegister()
	{
		return UKantanCategoryChart::StaticClass();
	}
	struct Z_Construct_UClass_UKantanCategoryChart_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ManualStyleMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ManualStyleMappings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ManualStyleMappings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryStyleSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CategoryStyleSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoPerCategoryStyles_MetaData[];
#endif
		static void NewProp_bAutoPerCategoryStyles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoPerCategoryStyles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKantanCategoryChart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKantanChart,
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsUMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKantanCategoryChart_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKantanCategoryChart_AddCategoryStyleOverride, "AddCategoryStyleOverride" }, // 3093435460
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanCategoryChart_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\nBase UMG class for category charts.\nCannot be instantiated itself.\n*/" },
		{ "IncludePath", "KantanCategoryChart.h" },
		{ "ModuleRelativePath", "Public/KantanCategoryChart.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base UMG class for category charts.\nCannot be instantiated itself." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanCategoryChart_Statics::NewProp_ManualStyleMappings_MetaData[] = {
		{ "Category", "Category Styles" },
		{ "Comment", "/*\n\x09Provides an override to allow specifying a particular style to be assigned to a category with a given ID.\n\x09*/" },
		{ "ModuleRelativePath", "Public/KantanCategoryChart.h" },
		{ "ToolTip", "Provides an override to allow specifying a particular style to be assigned to a category with a given ID." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKantanCategoryChart_Statics::NewProp_ManualStyleMappings = { "ManualStyleMappings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanCategoryChart, ManualStyleMappings), METADATA_PARAMS(Z_Construct_UClass_UKantanCategoryChart_Statics::NewProp_ManualStyleMappings_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanCategoryChart_Statics::NewProp_ManualStyleMappings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKantanCategoryChart_Statics::NewProp_ManualStyleMappings_Inner = { "ManualStyleMappings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCategoryStyleManualMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanCategoryChart_Statics::NewProp_CategoryStyleSet_MetaData[] = {
		{ "Category", "Category Styles" },
		{ "Comment", "/*\n\x09The style set which defines the various visual styles available to draw categories.\n\x09*/" },
		{ "ModuleRelativePath", "Public/KantanCategoryChart.h" },
		{ "ToolTip", "The style set which defines the various visual styles available to draw categories." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKantanCategoryChart_Statics::NewProp_CategoryStyleSet = { "CategoryStyleSet", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanCategoryChart, CategoryStyleSet), Z_Construct_UClass_UKantanCategoryStyleSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKantanCategoryChart_Statics::NewProp_CategoryStyleSet_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanCategoryChart_Statics::NewProp_CategoryStyleSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanCategoryChart_Statics::NewProp_bAutoPerCategoryStyles_MetaData[] = {
		{ "Category", "Category Styles" },
		{ "Comment", "/*\n\x09If enabled, each category will be automatically assigned an unused visual style.\n\x09If disabled, all categories will use the default style.\n\x09This can be overridden via ManualStyleMappings.\n\x09*/" },
		{ "ModuleRelativePath", "Public/KantanCategoryChart.h" },
		{ "ToolTip", "If enabled, each category will be automatically assigned an unused visual style.\nIf disabled, all categories will use the default style.\nThis can be overridden via ManualStyleMappings." },
	};
#endif
	void Z_Construct_UClass_UKantanCategoryChart_Statics::NewProp_bAutoPerCategoryStyles_SetBit(void* Obj)
	{
		((UKantanCategoryChart*)Obj)->bAutoPerCategoryStyles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UKantanCategoryChart_Statics::NewProp_bAutoPerCategoryStyles = { "bAutoPerCategoryStyles", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UKantanCategoryChart), &Z_Construct_UClass_UKantanCategoryChart_Statics::NewProp_bAutoPerCategoryStyles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UKantanCategoryChart_Statics::NewProp_bAutoPerCategoryStyles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanCategoryChart_Statics::NewProp_bAutoPerCategoryStyles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKantanCategoryChart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanCategoryChart_Statics::NewProp_ManualStyleMappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanCategoryChart_Statics::NewProp_ManualStyleMappings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanCategoryChart_Statics::NewProp_CategoryStyleSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanCategoryChart_Statics::NewProp_bAutoPerCategoryStyles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKantanCategoryChart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKantanCategoryChart>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKantanCategoryChart_Statics::ClassParams = {
		&UKantanCategoryChart::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UKantanCategoryChart_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UKantanCategoryChart_Statics::PropPointers),
		0,
		0x00B000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UKantanCategoryChart_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UKantanCategoryChart_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKantanCategoryChart()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKantanCategoryChart_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKantanCategoryChart, 2592043820);
	template<> KANTANCHARTSUMG_API UClass* StaticClass<UKantanCategoryChart>()
	{
		return UKantanCategoryChart::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKantanCategoryChart(Z_Construct_UClass_UKantanCategoryChart, &UKantanCategoryChart::StaticClass, TEXT("/Script/KantanChartsUMG"), TEXT("UKantanCategoryChart"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKantanCategoryChart);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
