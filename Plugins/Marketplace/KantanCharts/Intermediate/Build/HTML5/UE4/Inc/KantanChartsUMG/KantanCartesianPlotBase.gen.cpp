// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KantanChartsUMG/Public/KantanCartesianPlotBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKantanCartesianPlotBase() {}
// Cross Module References
	KANTANCHARTSUMG_API UClass* Z_Construct_UClass_UKantanCartesianPlotBase_NoRegister();
	KANTANCHARTSUMG_API UClass* Z_Construct_UClass_UKantanCartesianPlotBase();
	KANTANCHARTSUMG_API UClass* Z_Construct_UClass_UKantanCartesianChartBase();
	UPackage* Z_Construct_UPackage__Script_KantanChartsUMG();
// End Cross Module References
	void UKantanCartesianPlotBase::StaticRegisterNativesUKantanCartesianPlotBase()
	{
	}
	UClass* Z_Construct_UClass_UKantanCartesianPlotBase_NoRegister()
	{
		return UKantanCartesianPlotBase::StaticClass();
	}
	struct Z_Construct_UClass_UKantanCartesianPlotBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKantanCartesianPlotBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UKantanCartesianChartBase,
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsUMG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanCartesianPlotBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\nUMG class implementing a cartesian chart.\n*/" },
		{ "HideCategories", "Preview" },
		{ "IncludePath", "KantanCartesianPlotBase.h" },
		{ "ModuleRelativePath", "Public/KantanCartesianPlotBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UMG class implementing a cartesian chart." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKantanCartesianPlotBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKantanCartesianPlotBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKantanCartesianPlotBase_Statics::ClassParams = {
		&UKantanCartesianPlotBase::StaticClass,
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
		0x00B000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UKantanCartesianPlotBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UKantanCartesianPlotBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKantanCartesianPlotBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKantanCartesianPlotBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKantanCartesianPlotBase, 1321064584);
	template<> KANTANCHARTSUMG_API UClass* StaticClass<UKantanCartesianPlotBase>()
	{
		return UKantanCartesianPlotBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKantanCartesianPlotBase(Z_Construct_UClass_UKantanCartesianPlotBase, &UKantanCartesianPlotBase::StaticClass, TEXT("/Script/KantanChartsUMG"), TEXT("UKantanCartesianPlotBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKantanCartesianPlotBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
