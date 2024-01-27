// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KantanChartsSlate/Public/Style/KantanCategoryStyleSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKantanCategoryStyleSet() {}
// Cross Module References
	KANTANCHARTSSLATE_API UClass* Z_Construct_UClass_UKantanCategoryStyleSet_NoRegister();
	KANTANCHARTSSLATE_API UClass* Z_Construct_UClass_UKantanCategoryStyleSet();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_KantanChartsSlate();
	KANTANCHARTSSLATE_API UScriptStruct* Z_Construct_UScriptStruct_FKantanCategoryStyle();
// End Cross Module References
	void UKantanCategoryStyleSet::StaticRegisterNativesUKantanCategoryStyleSet()
	{
	}
	UClass* Z_Construct_UClass_UKantanCategoryStyleSet_NoRegister()
	{
		return UKantanCategoryStyleSet::StaticClass();
	}
	struct Z_Construct_UClass_UKantanCategoryStyleSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Styles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Styles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Styles_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKantanCategoryStyleSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsSlate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanCategoryStyleSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// An asset storing a list of category styles used with a KantanCategoryChart\n" },
		{ "IncludePath", "Style/KantanCategoryStyleSet.h" },
		{ "ModuleRelativePath", "Public/Style/KantanCategoryStyleSet.h" },
		{ "ToolTip", "An asset storing a list of category styles used with a KantanCategoryChart" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanCategoryStyleSet_Statics::NewProp_Styles_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/*\n\x09List of category styles in this style set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Style/KantanCategoryStyleSet.h" },
		{ "ToolTip", "List of category styles in this style set." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UKantanCategoryStyleSet_Statics::NewProp_Styles = { "Styles", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanCategoryStyleSet, Styles), METADATA_PARAMS(Z_Construct_UClass_UKantanCategoryStyleSet_Statics::NewProp_Styles_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanCategoryStyleSet_Statics::NewProp_Styles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKantanCategoryStyleSet_Statics::NewProp_Styles_Inner = { "Styles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKantanCategoryStyle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKantanCategoryStyleSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanCategoryStyleSet_Statics::NewProp_Styles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanCategoryStyleSet_Statics::NewProp_Styles_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKantanCategoryStyleSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKantanCategoryStyleSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKantanCategoryStyleSet_Statics::ClassParams = {
		&UKantanCategoryStyleSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKantanCategoryStyleSet_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UKantanCategoryStyleSet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKantanCategoryStyleSet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UKantanCategoryStyleSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKantanCategoryStyleSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKantanCategoryStyleSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKantanCategoryStyleSet, 3261354989);
	template<> KANTANCHARTSSLATE_API UClass* StaticClass<UKantanCategoryStyleSet>()
	{
		return UKantanCategoryStyleSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKantanCategoryStyleSet(Z_Construct_UClass_UKantanCategoryStyleSet, &UKantanCategoryStyleSet::StaticClass, TEXT("/Script/KantanChartsSlate"), TEXT("UKantanCategoryStyleSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKantanCategoryStyleSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
