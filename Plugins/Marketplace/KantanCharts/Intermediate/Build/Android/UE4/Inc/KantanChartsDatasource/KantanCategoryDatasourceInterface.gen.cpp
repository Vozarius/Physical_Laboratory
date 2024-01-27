// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KantanChartsDatasource/Public/KantanCategoryDatasourceInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKantanCategoryDatasourceInterface() {}
// Cross Module References
	KANTANCHARTSDATASOURCE_API UClass* Z_Construct_UClass_UKantanCategoryDatasourceInterface_NoRegister();
	KANTANCHARTSDATASOURCE_API UClass* Z_Construct_UClass_UKantanCategoryDatasourceInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_KantanChartsDatasource();
	KANTANCHARTSDATASOURCE_API UFunction* Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryId();
	KANTANCHARTSDATASOURCE_API UFunction* Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryName();
	KANTANCHARTSDATASOURCE_API UFunction* Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryValue();
	KANTANCHARTSDATASOURCE_API UFunction* Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetNumCategories();
// End Cross Module References
	FName IKantanCategoryDatasourceInterface::GetCategoryId(int32 CatIdx) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCategoryId instead.");
		KantanCategoryDatasourceInterface_eventGetCategoryId_Parms Parms;
		return Parms.ReturnValue;
	}
	FText IKantanCategoryDatasourceInterface::GetCategoryName(int32 CatIdx) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCategoryName instead.");
		KantanCategoryDatasourceInterface_eventGetCategoryName_Parms Parms;
		return Parms.ReturnValue;
	}
	float IKantanCategoryDatasourceInterface::GetCategoryValue(int32 CatIdx) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetCategoryValue instead.");
		KantanCategoryDatasourceInterface_eventGetCategoryValue_Parms Parms;
		return Parms.ReturnValue;
	}
	int32 IKantanCategoryDatasourceInterface::GetNumCategories() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetNumCategories instead.");
		KantanCategoryDatasourceInterface_eventGetNumCategories_Parms Parms;
		return Parms.ReturnValue;
	}
	void UKantanCategoryDatasourceInterface::StaticRegisterNativesUKantanCategoryDatasourceInterface()
	{
		UClass* Class = UKantanCategoryDatasourceInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCategoryId", &IKantanCategoryDatasourceInterface::execGetCategoryId },
			{ "GetCategoryName", &IKantanCategoryDatasourceInterface::execGetCategoryName },
			{ "GetCategoryValue", &IKantanCategoryDatasourceInterface::execGetCategoryValue },
			{ "GetNumCategories", &IKantanCategoryDatasourceInterface::execGetNumCategories },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryId_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CatIdx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanCategoryDatasourceInterface_eventGetCategoryId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryId_Statics::NewProp_CatIdx = { "CatIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanCategoryDatasourceInterface_eventGetCategoryId_Parms, CatIdx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryId_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryId_Statics::NewProp_CatIdx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Category Datasource" },
		{ "ModuleRelativePath", "Public/KantanCategoryDatasourceInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanCategoryDatasourceInterface, nullptr, "GetCategoryId", nullptr, nullptr, sizeof(KantanCategoryDatasourceInterface_eventGetCategoryId_Parms), Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryId_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryId_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryName_Statics
	{
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CatIdx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanCategoryDatasourceInterface_eventGetCategoryName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryName_Statics::NewProp_CatIdx = { "CatIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanCategoryDatasourceInterface_eventGetCategoryName_Parms, CatIdx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryName_Statics::NewProp_CatIdx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Category Datasource" },
		{ "ModuleRelativePath", "Public/KantanCategoryDatasourceInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanCategoryDatasourceInterface, nullptr, "GetCategoryName", nullptr, nullptr, sizeof(KantanCategoryDatasourceInterface_eventGetCategoryName_Parms), Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryValue_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CatIdx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanCategoryDatasourceInterface_eventGetCategoryValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryValue_Statics::NewProp_CatIdx = { "CatIdx", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanCategoryDatasourceInterface_eventGetCategoryValue_Parms, CatIdx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryValue_Statics::NewProp_CatIdx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Category Datasource" },
		{ "ModuleRelativePath", "Public/KantanCategoryDatasourceInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanCategoryDatasourceInterface, nullptr, "GetCategoryValue", nullptr, nullptr, sizeof(KantanCategoryDatasourceInterface_eventGetCategoryValue_Parms), Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryValue_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetNumCategories_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetNumCategories_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KantanCategoryDatasourceInterface_eventGetNumCategories_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetNumCategories_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetNumCategories_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetNumCategories_Statics::Function_MetaDataParams[] = {
		{ "Category", "Category Datasource" },
		{ "ModuleRelativePath", "Public/KantanCategoryDatasourceInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetNumCategories_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKantanCategoryDatasourceInterface, nullptr, "GetNumCategories", nullptr, nullptr, sizeof(KantanCategoryDatasourceInterface_eventGetNumCategories_Parms), Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetNumCategories_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetNumCategories_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetNumCategories_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetNumCategories_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetNumCategories()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetNumCategories_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKantanCategoryDatasourceInterface_NoRegister()
	{
		return UKantanCategoryDatasourceInterface::StaticClass();
	}
	struct Z_Construct_UClass_UKantanCategoryDatasourceInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKantanCategoryDatasourceInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_KantanChartsDatasource,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKantanCategoryDatasourceInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryId, "GetCategoryId" }, // 1313684302
		{ &Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryName, "GetCategoryName" }, // 3681028014
		{ &Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetCategoryValue, "GetCategoryValue" }, // 3780418387
		{ &Z_Construct_UFunction_UKantanCategoryDatasourceInterface_GetNumCategories, "GetNumCategories" }, // 517852359
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKantanCategoryDatasourceInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/KantanCategoryDatasourceInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKantanCategoryDatasourceInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IKantanCategoryDatasourceInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKantanCategoryDatasourceInterface_Statics::ClassParams = {
		&UKantanCategoryDatasourceInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UKantanCategoryDatasourceInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UKantanCategoryDatasourceInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKantanCategoryDatasourceInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKantanCategoryDatasourceInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKantanCategoryDatasourceInterface, 643754796);
	template<> KANTANCHARTSDATASOURCE_API UClass* StaticClass<UKantanCategoryDatasourceInterface>()
	{
		return UKantanCategoryDatasourceInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKantanCategoryDatasourceInterface(Z_Construct_UClass_UKantanCategoryDatasourceInterface, &UKantanCategoryDatasourceInterface::StaticClass, TEXT("/Script/KantanChartsDatasource"), TEXT("UKantanCategoryDatasourceInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKantanCategoryDatasourceInterface);
	static FName NAME_UKantanCategoryDatasourceInterface_GetCategoryId = FName(TEXT("GetCategoryId"));
	FName IKantanCategoryDatasourceInterface::Execute_GetCategoryId(const UObject* O, int32 CatIdx)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UKantanCategoryDatasourceInterface::StaticClass()));
		KantanCategoryDatasourceInterface_eventGetCategoryId_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UKantanCategoryDatasourceInterface_GetCategoryId);
		if (Func)
		{
			Parms.CatIdx=CatIdx;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IKantanCategoryDatasourceInterface*)(O->GetNativeInterfaceAddress(UKantanCategoryDatasourceInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetCategoryId_Implementation(CatIdx);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UKantanCategoryDatasourceInterface_GetCategoryName = FName(TEXT("GetCategoryName"));
	FText IKantanCategoryDatasourceInterface::Execute_GetCategoryName(const UObject* O, int32 CatIdx)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UKantanCategoryDatasourceInterface::StaticClass()));
		KantanCategoryDatasourceInterface_eventGetCategoryName_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UKantanCategoryDatasourceInterface_GetCategoryName);
		if (Func)
		{
			Parms.CatIdx=CatIdx;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IKantanCategoryDatasourceInterface*)(O->GetNativeInterfaceAddress(UKantanCategoryDatasourceInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetCategoryName_Implementation(CatIdx);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UKantanCategoryDatasourceInterface_GetCategoryValue = FName(TEXT("GetCategoryValue"));
	float IKantanCategoryDatasourceInterface::Execute_GetCategoryValue(const UObject* O, int32 CatIdx)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UKantanCategoryDatasourceInterface::StaticClass()));
		KantanCategoryDatasourceInterface_eventGetCategoryValue_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UKantanCategoryDatasourceInterface_GetCategoryValue);
		if (Func)
		{
			Parms.CatIdx=CatIdx;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IKantanCategoryDatasourceInterface*)(O->GetNativeInterfaceAddress(UKantanCategoryDatasourceInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetCategoryValue_Implementation(CatIdx);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UKantanCategoryDatasourceInterface_GetNumCategories = FName(TEXT("GetNumCategories"));
	int32 IKantanCategoryDatasourceInterface::Execute_GetNumCategories(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UKantanCategoryDatasourceInterface::StaticClass()));
		KantanCategoryDatasourceInterface_eventGetNumCategories_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UKantanCategoryDatasourceInterface_GetNumCategories);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IKantanCategoryDatasourceInterface*)(O->GetNativeInterfaceAddress(UKantanCategoryDatasourceInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetNumCategories_Implementation();
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
