// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KantanChartsSlate/Public/Style/KantanBarChartStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKantanBarChartStyle() {}
// Cross Module References
	KANTANCHARTSSLATE_API UScriptStruct* Z_Construct_UScriptStruct_FKantanBarChartStyle();
	UPackage* Z_Construct_UPackage__Script_KantanChartsSlate();
	KANTANCHARTSSLATE_API UScriptStruct* Z_Construct_UScriptStruct_FKantanChartStyle();
	KANTANCHARTSSLATE_API UClass* Z_Construct_UClass_UKantanBarChartWidgetStyle_NoRegister();
	KANTANCHARTSSLATE_API UClass* Z_Construct_UClass_UKantanBarChartWidgetStyle();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
// End Cross Module References
class UScriptStruct* FKantanBarChartStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KANTANCHARTSSLATE_API uint32 Get_Z_Construct_UScriptStruct_FKantanBarChartStyle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKantanBarChartStyle, Z_Construct_UPackage__Script_KantanChartsSlate(), TEXT("KantanBarChartStyle"), sizeof(FKantanBarChartStyle), Get_Z_Construct_UScriptStruct_FKantanBarChartStyle_Hash());
	}
	return Singleton;
}
template<> KANTANCHARTSSLATE_API UScriptStruct* StaticStruct<FKantanBarChartStyle>()
{
	return FKantanBarChartStyle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKantanBarChartStyle(FKantanBarChartStyle::StaticStruct, TEXT("/Script/KantanChartsSlate"), TEXT("KantanBarChartStyle"), false, nullptr, nullptr);
static struct FScriptStruct_KantanChartsSlate_StaticRegisterNativesFKantanBarChartStyle
{
	FScriptStruct_KantanChartsSlate_StaticRegisterNativesFKantanBarChartStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KantanBarChartStyle")),new UScriptStruct::TCppStructOps<FKantanBarChartStyle>);
	}
} ScriptStruct_KantanChartsSlate_StaticRegisterNativesFKantanBarChartStyle;
	struct Z_Construct_UScriptStruct_FKantanBarChartStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarOutlineThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BarOutlineThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarOutlineOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BarOutlineOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BarOpacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanBarChartStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Style/KantanBarChartStyle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKantanBarChartStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKantanBarChartStyle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanBarChartStyle_Statics::NewProp_BarOutlineThickness_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/*\n\x09Thickness of bar outlines.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Style/KantanBarChartStyle.h" },
		{ "ToolTip", "Thickness of bar outlines." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKantanBarChartStyle_Statics::NewProp_BarOutlineThickness = { "BarOutlineThickness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKantanBarChartStyle, BarOutlineThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanBarChartStyle_Statics::NewProp_BarOutlineThickness_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanBarChartStyle_Statics::NewProp_BarOutlineThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanBarChartStyle_Statics::NewProp_BarOutlineOpacity_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/*\n\x09Outline opacity.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Style/KantanBarChartStyle.h" },
		{ "ToolTip", "Outline opacity." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKantanBarChartStyle_Statics::NewProp_BarOutlineOpacity = { "BarOutlineOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKantanBarChartStyle, BarOutlineOpacity), METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanBarChartStyle_Statics::NewProp_BarOutlineOpacity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanBarChartStyle_Statics::NewProp_BarOutlineOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanBarChartStyle_Statics::NewProp_BarOpacity_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/*\n\x09""Bar opacity: 1.0 = Fully opaque, 0.0 = Fully transparent.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Style/KantanBarChartStyle.h" },
		{ "ToolTip", "Bar opacity: 1.0 = Fully opaque, 0.0 = Fully transparent." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKantanBarChartStyle_Statics::NewProp_BarOpacity = { "BarOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKantanBarChartStyle, BarOpacity), METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanBarChartStyle_Statics::NewProp_BarOpacity_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanBarChartStyle_Statics::NewProp_BarOpacity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKantanBarChartStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanBarChartStyle_Statics::NewProp_BarOutlineThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanBarChartStyle_Statics::NewProp_BarOutlineOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanBarChartStyle_Statics::NewProp_BarOpacity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKantanBarChartStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsSlate,
		Z_Construct_UScriptStruct_FKantanChartStyle,
		&NewStructOps,
		"KantanBarChartStyle",
		sizeof(FKantanBarChartStyle),
		alignof(FKantanBarChartStyle),
		Z_Construct_UScriptStruct_FKantanBarChartStyle_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanBarChartStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanBarChartStyle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanBarChartStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKantanBarChartStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKantanBarChartStyle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KantanChartsSlate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KantanBarChartStyle"), sizeof(FKantanBarChartStyle), Get_Z_Construct_UScriptStruct_FKantanBarChartStyle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKantanBarChartStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKantanBarChartStyle_Hash() { return 2997236386U; }
	void UKantanBarChartWidgetStyle::StaticRegisterNativesUKantanBarChartWidgetStyle()
	{
	}
	UClass* Z_Construct_UClass_UKantanBarChartWidgetStyle_NoRegister()
	{
		return UKantanBarChartWidgetStyle::StaticClass();
	}
	struct Z_Construct_UClass_UKantanBarChartWidgetStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChartStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChartStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKantanBarChartWidgetStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USlateWidgetStyleContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsSlate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanBarChartWidgetStyle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Style/KantanBarChartStyle.h" },
		{ "ModuleRelativePath", "Public/Style/KantanBarChartStyle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanBarChartWidgetStyle_Statics::NewProp_ChartStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/Style/KantanBarChartStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKantanBarChartWidgetStyle_Statics::NewProp_ChartStyle = { "ChartStyle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanBarChartWidgetStyle, ChartStyle), Z_Construct_UScriptStruct_FKantanBarChartStyle, METADATA_PARAMS(Z_Construct_UClass_UKantanBarChartWidgetStyle_Statics::NewProp_ChartStyle_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanBarChartWidgetStyle_Statics::NewProp_ChartStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKantanBarChartWidgetStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanBarChartWidgetStyle_Statics::NewProp_ChartStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKantanBarChartWidgetStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKantanBarChartWidgetStyle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKantanBarChartWidgetStyle_Statics::ClassParams = {
		&UKantanBarChartWidgetStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKantanBarChartWidgetStyle_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UKantanBarChartWidgetStyle_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKantanBarChartWidgetStyle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UKantanBarChartWidgetStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKantanBarChartWidgetStyle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKantanBarChartWidgetStyle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKantanBarChartWidgetStyle, 885173394);
	template<> KANTANCHARTSSLATE_API UClass* StaticClass<UKantanBarChartWidgetStyle>()
	{
		return UKantanBarChartWidgetStyle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKantanBarChartWidgetStyle(Z_Construct_UClass_UKantanBarChartWidgetStyle, &UKantanBarChartWidgetStyle::StaticClass, TEXT("/Script/KantanChartsSlate"), TEXT("UKantanBarChartWidgetStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKantanBarChartWidgetStyle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
