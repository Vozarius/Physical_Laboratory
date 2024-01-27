// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KantanChartsSlate/Public/Style/KantanSeriesStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKantanSeriesStyle() {}
// Cross Module References
	KANTANCHARTSSLATE_API UScriptStruct* Z_Construct_UScriptStruct_FKantanSeriesStyle();
	UPackage* Z_Construct_UPackage__Script_KantanChartsSlate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	KANTANCHARTSSLATE_API UClass* Z_Construct_UClass_UKantanPointStyle_NoRegister();
	KANTANCHARTSSLATE_API UClass* Z_Construct_UClass_UKantanPointStyle();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
class UScriptStruct* FKantanSeriesStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KANTANCHARTSSLATE_API uint32 Get_Z_Construct_UScriptStruct_FKantanSeriesStyle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKantanSeriesStyle, Z_Construct_UPackage__Script_KantanChartsSlate(), TEXT("KantanSeriesStyle"), sizeof(FKantanSeriesStyle), Get_Z_Construct_UScriptStruct_FKantanSeriesStyle_Hash());
	}
	return Singleton;
}
template<> KANTANCHARTSSLATE_API UScriptStruct* StaticStruct<FKantanSeriesStyle>()
{
	return FKantanSeriesStyle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKantanSeriesStyle(FKantanSeriesStyle::StaticStruct, TEXT("/Script/KantanChartsSlate"), TEXT("KantanSeriesStyle"), false, nullptr, nullptr);
static struct FScriptStruct_KantanChartsSlate_StaticRegisterNativesFKantanSeriesStyle
{
	FScriptStruct_KantanChartsSlate_StaticRegisterNativesFKantanSeriesStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KantanSeriesStyle")),new UScriptStruct::TCppStructOps<FKantanSeriesStyle>);
	}
} ScriptStruct_KantanChartsSlate_StaticRegisterNativesFKantanSeriesStyle;
	struct Z_Construct_UScriptStruct_FKantanSeriesStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PointStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StyleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StyleId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanSeriesStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Defines visual properties that can be configured per series\n" },
		{ "ModuleRelativePath", "Public/Style/KantanSeriesStyle.h" },
		{ "ToolTip", "Defines visual properties that can be configured per series" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKantanSeriesStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKantanSeriesStyle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanSeriesStyle_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/*\n\x09""Color to use when drawing the series.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Style/KantanSeriesStyle.h" },
		{ "ToolTip", "Color to use when drawing the series." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKantanSeriesStyle_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKantanSeriesStyle, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanSeriesStyle_Statics::NewProp_Color_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanSeriesStyle_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanSeriesStyle_Statics::NewProp_PointStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/*\n\x09Point style asset.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Style/KantanSeriesStyle.h" },
		{ "ToolTip", "Point style asset." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FKantanSeriesStyle_Statics::NewProp_PointStyle = { "PointStyle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKantanSeriesStyle, PointStyle), Z_Construct_UClass_UKantanPointStyle_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanSeriesStyle_Statics::NewProp_PointStyle_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanSeriesStyle_Statics::NewProp_PointStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanSeriesStyle_Statics::NewProp_StyleId_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/*\n\x09Unique ID for the series.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Style/KantanSeriesStyle.h" },
		{ "ToolTip", "Unique ID for the series." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FKantanSeriesStyle_Statics::NewProp_StyleId = { "StyleId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKantanSeriesStyle, StyleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanSeriesStyle_Statics::NewProp_StyleId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanSeriesStyle_Statics::NewProp_StyleId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKantanSeriesStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanSeriesStyle_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanSeriesStyle_Statics::NewProp_PointStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanSeriesStyle_Statics::NewProp_StyleId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKantanSeriesStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsSlate,
		nullptr,
		&NewStructOps,
		"KantanSeriesStyle",
		sizeof(FKantanSeriesStyle),
		alignof(FKantanSeriesStyle),
		Z_Construct_UScriptStruct_FKantanSeriesStyle_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanSeriesStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanSeriesStyle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanSeriesStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKantanSeriesStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKantanSeriesStyle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KantanChartsSlate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KantanSeriesStyle"), sizeof(FKantanSeriesStyle), Get_Z_Construct_UScriptStruct_FKantanSeriesStyle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKantanSeriesStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKantanSeriesStyle_Hash() { return 557053115U; }
	void UKantanPointStyle::StaticRegisterNativesUKantanPointStyle()
	{
	}
	UClass* Z_Construct_UClass_UKantanPointStyle_NoRegister()
	{
		return UKantanPointStyle::StaticClass();
	}
	struct Z_Construct_UClass_UKantanPointStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointSizeTextureOffsets_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointSizeTextureOffsets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataPointTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataPointTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKantanPointStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsSlate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanPointStyle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Style/KantanSeriesStyle.h" },
		{ "ModuleRelativePath", "Public/Style/KantanSeriesStyle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanPointStyle_Statics::NewProp_PointSizeTextureOffsets_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/*\n\x09Pixel (x, y) offsets into the texture for each point size.\n\x09The image sections should be 5x5, 7x7 and 9x9 respectively.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Style/KantanSeriesStyle.h" },
		{ "ToolTip", "Pixel (x, y) offsets into the texture for each point size.\nThe image sections should be 5x5, 7x7 and 9x9 respectively." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UKantanPointStyle_Statics::NewProp_PointSizeTextureOffsets = { "PointSizeTextureOffsets", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(PointSizeTextureOffsets, UKantanPointStyle), STRUCT_OFFSET(UKantanPointStyle, PointSizeTextureOffsets), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UKantanPointStyle_Statics::NewProp_PointSizeTextureOffsets_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanPointStyle_Statics::NewProp_PointSizeTextureOffsets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanPointStyle_Statics::NewProp_DataPointTexture_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/*\n\x09Texture providing datapoint image in different sizes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Style/KantanSeriesStyle.h" },
		{ "ToolTip", "Texture providing datapoint image in different sizes." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UKantanPointStyle_Statics::NewProp_DataPointTexture = { "DataPointTexture", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKantanPointStyle, DataPointTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UKantanPointStyle_Statics::NewProp_DataPointTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UKantanPointStyle_Statics::NewProp_DataPointTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKantanPointStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanPointStyle_Statics::NewProp_PointSizeTextureOffsets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKantanPointStyle_Statics::NewProp_DataPointTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKantanPointStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKantanPointStyle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKantanPointStyle_Statics::ClassParams = {
		&UKantanPointStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKantanPointStyle_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UKantanPointStyle_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKantanPointStyle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UKantanPointStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKantanPointStyle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKantanPointStyle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKantanPointStyle, 3633230292);
	template<> KANTANCHARTSSLATE_API UClass* StaticClass<UKantanPointStyle>()
	{
		return UKantanPointStyle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKantanPointStyle(Z_Construct_UClass_UKantanPointStyle, &UKantanPointStyle::StaticClass, TEXT("/Script/KantanChartsSlate"), TEXT("UKantanPointStyle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKantanPointStyle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
