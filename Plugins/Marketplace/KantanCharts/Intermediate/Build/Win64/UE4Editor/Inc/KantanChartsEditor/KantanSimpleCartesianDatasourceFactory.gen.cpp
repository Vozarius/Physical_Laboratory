// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KantanChartsEditor/Private/KantanSimpleCartesianDatasourceFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKantanSimpleCartesianDatasourceFactory() {}
// Cross Module References
	KANTANCHARTSEDITOR_API UClass* Z_Construct_UClass_UKantanSimpleCartesianDatasourceFactory_NoRegister();
	KANTANCHARTSEDITOR_API UClass* Z_Construct_UClass_UKantanSimpleCartesianDatasourceFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_KantanChartsEditor();
// End Cross Module References
	void UKantanSimpleCartesianDatasourceFactory::StaticRegisterNativesUKantanSimpleCartesianDatasourceFactory()
	{
	}
	UClass* Z_Construct_UClass_UKantanSimpleCartesianDatasourceFactory_NoRegister()
	{
		return UKantanSimpleCartesianDatasourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UKantanSimpleCartesianDatasourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKantanSimpleCartesianDatasourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanSimpleCartesianDatasourceFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\nFactory class for simple cartesian data source asset.\n*/" },
		{ "IncludePath", "KantanSimpleCartesianDatasourceFactory.h" },
		{ "ModuleRelativePath", "Private/KantanSimpleCartesianDatasourceFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Factory class for simple cartesian data source asset." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKantanSimpleCartesianDatasourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKantanSimpleCartesianDatasourceFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKantanSimpleCartesianDatasourceFactory_Statics::ClassParams = {
		&UKantanSimpleCartesianDatasourceFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UKantanSimpleCartesianDatasourceFactory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UKantanSimpleCartesianDatasourceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKantanSimpleCartesianDatasourceFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKantanSimpleCartesianDatasourceFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKantanSimpleCartesianDatasourceFactory, 2547155655);
	template<> KANTANCHARTSEDITOR_API UClass* StaticClass<UKantanSimpleCartesianDatasourceFactory>()
	{
		return UKantanSimpleCartesianDatasourceFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKantanSimpleCartesianDatasourceFactory(Z_Construct_UClass_UKantanSimpleCartesianDatasourceFactory, &UKantanSimpleCartesianDatasourceFactory::StaticClass, TEXT("/Script/KantanChartsEditor"), TEXT("UKantanSimpleCartesianDatasourceFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKantanSimpleCartesianDatasourceFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
