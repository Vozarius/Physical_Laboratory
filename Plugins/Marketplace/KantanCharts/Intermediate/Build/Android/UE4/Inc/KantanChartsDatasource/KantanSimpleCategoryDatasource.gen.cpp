// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KantanChartsDatasource/Public/KantanSimpleCategoryDatasource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKantanSimpleCategoryDatasource() {}
// Cross Module References
	KANTANCHARTSDATASOURCE_API UClass* Z_Construct_UClass_UKantanSimpleCategoryDatasource_NoRegister();
	KANTANCHARTSDATASOURCE_API UClass* Z_Construct_UClass_UKantanSimpleCategoryDatasource();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_KantanChartsDatasource();
	KANTANCHARTSDATASOURCE_API UFunction* Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategory();
	KANTANCHARTSDATASOURCE_API UFunction* Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategoryWithId();
	KANTANCHARTSDATASOURCE_API UFunction* Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_RemoveAllCategories();
	KANTANCHARTSDATASOURCE_API UFunction* Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_RemoveCategory();
	KANTANCHARTSDATASOURCE_API UFunction* Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_UpdateCategoryValue();
	KANTANCHARTSDATASOURCE_API UFunction* Z_Construct_UFunction_UKantanSimpleCategoryDatasource_NewSimpleCategoryDatasource();
	KANTANCHARTSDATASOURCE_API UClass* Z_Construct_UClass_UKantanCategoryDatasourceInterface_NoRegister();
// End Cross Module References
	void UKantanSimpleCategoryDatasource::StaticRegisterNativesUKantanSimpleCategoryDatasource()
	{
		UClass* Class = UKantanSimpleCategoryDatasource::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_AddCategory", &UKantanSimpleCategoryDatasource::execBP_AddCategory },
			{ "BP_AddCategoryWithId", &UKantanSimpleCategoryDatasource::execBP_AddCategoryWithId },
			{ "BP_RemoveAllCategories", &UKantanSimpleCategoryDatasource::execBP_RemoveAllCategories },
			{ "BP_RemoveCategory", &UKantanSimpleCategoryDatasource::execBP_RemoveCategory },
			{ "BP_UpdateCategoryValue", &UKantanSimpleCategoryDatasource::execBP_UpdateCategoryValue },
			{ "NewSimpleCategoryDatasource", &UKantanSimpleCategoryDatasource::execNewSimpleCategoryDatasource },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategory_Statics
	{
		struct KantanSimpleCategoryDatasource_eventBP_AddCategory_Parms
		{
			FText Name;
			FName CatId;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CatId;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategory_Statics::NewProp_CatId = { "CatId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanSimpleCategoryDatasource_eventBP_AddCategory_Parms, CatId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategory_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanSimpleCategoryDatasource_eventBP_AddCategory_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategory_Statics::NewProp_CatId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategory_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "/*\n\x09""Adds a new category using an auto-generated ID, which is returned.\n\x09*/" },
		{ "DisplayName", "Add Category" },
		{ "ModuleRelativePath", "Public/KantanSimpleCategoryDatasource.h" },
		{ "ToolTip", "Adds a new category using an auto-generated ID, which is returned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanSimpleCategoryDatasource, nullptr, "BP_AddCategory", nullptr, nullptr, sizeof(KantanSimpleCategoryDatasource_eventBP_AddCategory_Parms), Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategoryWithId_Statics
	{
		struct KantanSimpleCategoryDatasource_eventBP_AddCategoryWithId_Parms
		{
			FName Id;
			FText Name;
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategoryWithId_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((KantanSimpleCategoryDatasource_eventBP_AddCategoryWithId_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategoryWithId_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KantanSimpleCategoryDatasource_eventBP_AddCategoryWithId_Parms), &Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategoryWithId_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategoryWithId_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanSimpleCategoryDatasource_eventBP_AddCategoryWithId_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategoryWithId_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanSimpleCategoryDatasource_eventBP_AddCategoryWithId_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategoryWithId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategoryWithId_Statics::NewProp_bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategoryWithId_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategoryWithId_Statics::NewProp_Id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategoryWithId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "/*\n\x09""Adds a new category, using the given ID. If the ID is already in use, the function will fail.\n\x09*/" },
		{ "DisplayName", "Add Category With Id" },
		{ "ModuleRelativePath", "Public/KantanSimpleCategoryDatasource.h" },
		{ "ToolTip", "Adds a new category, using the given ID. If the ID is already in use, the function will fail." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategoryWithId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanSimpleCategoryDatasource, nullptr, "BP_AddCategoryWithId", nullptr, nullptr, sizeof(KantanSimpleCategoryDatasource_eventBP_AddCategoryWithId_Parms), Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategoryWithId_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategoryWithId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategoryWithId_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategoryWithId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategoryWithId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategoryWithId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_RemoveAllCategories_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_RemoveAllCategories_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "/*\n\x09Removes all categories.\n\x09*/" },
		{ "DisplayName", "Remove All Categories" },
		{ "ModuleRelativePath", "Public/KantanSimpleCategoryDatasource.h" },
		{ "ToolTip", "Removes all categories." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_RemoveAllCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanSimpleCategoryDatasource, nullptr, "BP_RemoveAllCategories", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_RemoveAllCategories_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_RemoveAllCategories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_RemoveAllCategories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_RemoveAllCategories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_RemoveCategory_Statics
	{
		struct KantanSimpleCategoryDatasource_eventBP_RemoveCategory_Parms
		{
			FName Id;
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_RemoveCategory_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((KantanSimpleCategoryDatasource_eventBP_RemoveCategory_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_RemoveCategory_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KantanSimpleCategoryDatasource_eventBP_RemoveCategory_Parms), &Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_RemoveCategory_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_RemoveCategory_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanSimpleCategoryDatasource_eventBP_RemoveCategory_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_RemoveCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_RemoveCategory_Statics::NewProp_bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_RemoveCategory_Statics::NewProp_Id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_RemoveCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "/*\n\x09Removes the category with the given ID.\n\x09*/" },
		{ "DisplayName", "Remove Category" },
		{ "ModuleRelativePath", "Public/KantanSimpleCategoryDatasource.h" },
		{ "ToolTip", "Removes the category with the given ID." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_RemoveCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanSimpleCategoryDatasource, nullptr, "BP_RemoveCategory", nullptr, nullptr, sizeof(KantanSimpleCategoryDatasource_eventBP_RemoveCategory_Parms), Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_RemoveCategory_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_RemoveCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_RemoveCategory_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_RemoveCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_RemoveCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_RemoveCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_UpdateCategoryValue_Statics
	{
		struct KantanSimpleCategoryDatasource_eventBP_UpdateCategoryValue_Parms
		{
			FName Id;
			float Value;
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_UpdateCategoryValue_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((KantanSimpleCategoryDatasource_eventBP_UpdateCategoryValue_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_UpdateCategoryValue_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KantanSimpleCategoryDatasource_eventBP_UpdateCategoryValue_Parms), &Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_UpdateCategoryValue_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_UpdateCategoryValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanSimpleCategoryDatasource_eventBP_UpdateCategoryValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_UpdateCategoryValue_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanSimpleCategoryDatasource_eventBP_UpdateCategoryValue_Parms, Id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_UpdateCategoryValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_UpdateCategoryValue_Statics::NewProp_bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_UpdateCategoryValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_UpdateCategoryValue_Statics::NewProp_Id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_UpdateCategoryValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data" },
		{ "Comment", "/*\n\x09Sets the value for the given category.\n\x09*/" },
		{ "DisplayName", "Update Category Value" },
		{ "ModuleRelativePath", "Public/KantanSimpleCategoryDatasource.h" },
		{ "ToolTip", "Sets the value for the given category." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_UpdateCategoryValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanSimpleCategoryDatasource, nullptr, "BP_UpdateCategoryValue", nullptr, nullptr, sizeof(KantanSimpleCategoryDatasource_eventBP_UpdateCategoryValue_Parms), Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_UpdateCategoryValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_UpdateCategoryValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_UpdateCategoryValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_UpdateCategoryValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_UpdateCategoryValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_UpdateCategoryValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanSimpleCategoryDatasource_NewSimpleCategoryDatasource_Statics
	{
		struct KantanSimpleCategoryDatasource_eventNewSimpleCategoryDatasource_Parms
		{
			UKantanSimpleCategoryDatasource* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKantanSimpleCategoryDatasource_NewSimpleCategoryDatasource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanSimpleCategoryDatasource_eventNewSimpleCategoryDatasource_Parms, ReturnValue), Z_Construct_UClass_UKantanSimpleCategoryDatasource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanSimpleCategoryDatasource_NewSimpleCategoryDatasource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanSimpleCategoryDatasource_NewSimpleCategoryDatasource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanSimpleCategoryDatasource_NewSimpleCategoryDatasource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Kantan Charts" },
		{ "ModuleRelativePath", "Public/KantanSimpleCategoryDatasource.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanSimpleCategoryDatasource_NewSimpleCategoryDatasource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanSimpleCategoryDatasource, nullptr, "NewSimpleCategoryDatasource", nullptr, nullptr, sizeof(KantanSimpleCategoryDatasource_eventNewSimpleCategoryDatasource_Parms), Z_Construct_UFunction_UKantanSimpleCategoryDatasource_NewSimpleCategoryDatasource_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanSimpleCategoryDatasource_NewSimpleCategoryDatasource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanSimpleCategoryDatasource_NewSimpleCategoryDatasource_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanSimpleCategoryDatasource_NewSimpleCategoryDatasource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanSimpleCategoryDatasource_NewSimpleCategoryDatasource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanSimpleCategoryDatasource_NewSimpleCategoryDatasource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKantanSimpleCategoryDatasource_NoRegister()
	{
		return UKantanSimpleCategoryDatasource::StaticClass();
	}
	struct Z_Construct_UClass_UKantanSimpleCategoryDatasource_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKantanSimpleCategoryDatasource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsDatasource,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKantanSimpleCategoryDatasource_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategory, "BP_AddCategory" }, // 576227009
		{ &Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_AddCategoryWithId, "BP_AddCategoryWithId" }, // 3831535291
		{ &Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_RemoveAllCategories, "BP_RemoveAllCategories" }, // 4108584477
		{ &Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_RemoveCategory, "BP_RemoveCategory" }, // 3559881482
		{ &Z_Construct_UFunction_UKantanSimpleCategoryDatasource_BP_UpdateCategoryValue, "BP_UpdateCategoryValue" }, // 2099403976
		{ &Z_Construct_UFunction_UKantanSimpleCategoryDatasource_NewSimpleCategoryDatasource, "NewSimpleCategoryDatasource" }, // 1724358935
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanSimpleCategoryDatasource_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "KantanSimpleCategoryDatasource.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/KantanSimpleCategoryDatasource.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UKantanSimpleCategoryDatasource_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UKantanCategoryDatasourceInterface_NoRegister, (int32)VTABLE_OFFSET(UKantanSimpleCategoryDatasource, IKantanCategoryDatasourceInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKantanSimpleCategoryDatasource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKantanSimpleCategoryDatasource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKantanSimpleCategoryDatasource_Statics::ClassParams = {
		&UKantanSimpleCategoryDatasource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		ARRAY_COUNT(InterfaceParams),
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKantanSimpleCategoryDatasource_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UKantanSimpleCategoryDatasource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKantanSimpleCategoryDatasource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKantanSimpleCategoryDatasource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKantanSimpleCategoryDatasource, 2472287151);
	template<> KANTANCHARTSDATASOURCE_API UClass* StaticClass<UKantanSimpleCategoryDatasource>()
	{
		return UKantanSimpleCategoryDatasource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKantanSimpleCategoryDatasource(Z_Construct_UClass_UKantanSimpleCategoryDatasource, &UKantanSimpleCategoryDatasource::StaticClass, TEXT("/Script/KantanChartsDatasource"), TEXT("UKantanSimpleCategoryDatasource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKantanSimpleCategoryDatasource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
