// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KantanChartsEditor/Private/KantanSimpleCategoryDatasourceFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKantanSimpleCategoryDatasourceFactory() {}
// Cross Module References
	KANTANCHARTSEDITOR_API UClass* Z_Construct_UClass_UKantanSimpleCategoryDatasourceFactory_NoRegister();
	KANTANCHARTSEDITOR_API UClass* Z_Construct_UClass_UKantanSimpleCategoryDatasourceFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_KantanChartsEditor();
// End Cross Module References
	void UKantanSimpleCategoryDatasourceFactory::StaticRegisterNativesUKantanSimpleCategoryDatasourceFactory()
	{
	}
	UClass* Z_Construct_UClass_UKantanSimpleCategoryDatasourceFactory_NoRegister()
	{
		return UKantanSimpleCategoryDatasourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UKantanSimpleCategoryDatasourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKantanSimpleCategoryDatasourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanSimpleCategoryDatasourceFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\nFactory class for simple category data source asset.\n*/" },
		{ "IncludePath", "KantanSimpleCategoryDatasourceFactory.h" },
		{ "ModuleRelativePath", "Private/KantanSimpleCategoryDatasourceFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Factory class for simple category data source asset." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKantanSimpleCategoryDatasourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKantanSimpleCategoryDatasourceFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKantanSimpleCategoryDatasourceFactory_Statics::ClassParams = {
		&UKantanSimpleCategoryDatasourceFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKantanSimpleCategoryDatasourceFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UKantanSimpleCategoryDatasourceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKantanSimpleCategoryDatasourceFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKantanSimpleCategoryDatasourceFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKantanSimpleCategoryDatasourceFactory, 2655388362);
	template<> KANTANCHARTSEDITOR_API UClass* StaticClass<UKantanSimpleCategoryDatasourceFactory>()
	{
		return UKantanSimpleCategoryDatasourceFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKantanSimpleCategoryDatasourceFactory(Z_Construct_UClass_UKantanSimpleCategoryDatasourceFactory, &UKantanSimpleCategoryDatasourceFactory::StaticClass, TEXT("/Script/KantanChartsEditor"), TEXT("UKantanSimpleCategoryDatasourceFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKantanSimpleCategoryDatasourceFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
