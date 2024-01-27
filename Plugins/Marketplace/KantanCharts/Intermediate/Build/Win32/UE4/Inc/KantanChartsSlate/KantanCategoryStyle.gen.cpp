// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KantanChartsSlate/Public/Style/KantanCategoryStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKantanCategoryStyle() {}
// Cross Module References
	KANTANCHARTSSLATE_API UScriptStruct* Z_Construct_UScriptStruct_FKantanCategoryStyle();
	UPackage* Z_Construct_UPackage__Script_KantanChartsSlate();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
class UScriptStruct* FKantanCategoryStyle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KANTANCHARTSSLATE_API uint32 Get_Z_Construct_UScriptStruct_FKantanCategoryStyle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKantanCategoryStyle, Z_Construct_UPackage__Script_KantanChartsSlate(), TEXT("KantanCategoryStyle"), sizeof(FKantanCategoryStyle), Get_Z_Construct_UScriptStruct_FKantanCategoryStyle_Hash());
	}
	return Singleton;
}
template<> KANTANCHARTSSLATE_API UScriptStruct* StaticStruct<FKantanCategoryStyle>()
{
	return FKantanCategoryStyle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKantanCategoryStyle(FKantanCategoryStyle::StaticStruct, TEXT("/Script/KantanChartsSlate"), TEXT("KantanCategoryStyle"), false, nullptr, nullptr);
static struct FScriptStruct_KantanChartsSlate_StaticRegisterNativesFKantanCategoryStyle
{
	FScriptStruct_KantanChartsSlate_StaticRegisterNativesFKantanCategoryStyle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KantanCategoryStyle")),new UScriptStruct::TCppStructOps<FKantanCategoryStyle>);
	}
} ScriptStruct_KantanChartsSlate_StaticRegisterNativesFKantanCategoryStyle;
	struct Z_Construct_UScriptStruct_FKantanCategoryStyle_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryStyleId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CategoryStyleId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanCategoryStyle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Defines visual properties that can be configured per category\n" },
		{ "ModuleRelativePath", "Public/Style/KantanCategoryStyle.h" },
		{ "ToolTip", "Defines visual properties that can be configured per category" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKantanCategoryStyle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKantanCategoryStyle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanCategoryStyle_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/*\n\x09""Color to draw the category.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Style/KantanCategoryStyle.h" },
		{ "ToolTip", "Color to draw the category." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKantanCategoryStyle_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKantanCategoryStyle, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanCategoryStyle_Statics::NewProp_Color_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanCategoryStyle_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKantanCategoryStyle_Statics::NewProp_CategoryStyleId_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/*\n\x09Unique ID for the style.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Style/KantanCategoryStyle.h" },
		{ "ToolTip", "Unique ID for the style." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FKantanCategoryStyle_Statics::NewProp_CategoryStyleId = { "CategoryStyleId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKantanCategoryStyle, CategoryStyleId), METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanCategoryStyle_Statics::NewProp_CategoryStyleId_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanCategoryStyle_Statics::NewProp_CategoryStyleId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKantanCategoryStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanCategoryStyle_Statics::NewProp_Color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKantanCategoryStyle_Statics::NewProp_CategoryStyleId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKantanCategoryStyle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsSlate,
		nullptr,
		&NewStructOps,
		"KantanCategoryStyle",
		sizeof(FKantanCategoryStyle),
		alignof(FKantanCategoryStyle),
		Z_Construct_UScriptStruct_FKantanCategoryStyle_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanCategoryStyle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKantanCategoryStyle_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FKantanCategoryStyle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKantanCategoryStyle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKantanCategoryStyle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KantanChartsSlate();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KantanCategoryStyle"), sizeof(FKantanCategoryStyle), Get_Z_Construct_UScriptStruct_FKantanCategoryStyle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKantanCategoryStyle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKantanCategoryStyle_Hash() { return 320601408U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
