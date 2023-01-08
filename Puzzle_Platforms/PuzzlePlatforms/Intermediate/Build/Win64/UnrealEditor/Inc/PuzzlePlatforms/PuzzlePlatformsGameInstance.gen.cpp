// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PuzzlePlatforms/PuzzlePlatformsGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzlePlatformsGameInstance() {}
// Cross Module References
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UPuzzlePlatformsGameInstance_NoRegister();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UPuzzlePlatformsGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_PuzzlePlatforms();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UMainMenu_NoRegister();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UInGameMenu_NoRegister();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UMenuInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPuzzlePlatformsGameInstance::execLoadMainMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadMainMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPuzzlePlatformsGameInstance::execJoin)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Address);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Join(Z_Param_Address);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPuzzlePlatformsGameInstance::execHost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Host();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPuzzlePlatformsGameInstance::execInGameLoadMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InGameLoadMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPuzzlePlatformsGameInstance::execLoadMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadMenu();
		P_NATIVE_END;
	}
	void UPuzzlePlatformsGameInstance::StaticRegisterNativesUPuzzlePlatformsGameInstance()
	{
		UClass* Class = UPuzzlePlatformsGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Host", &UPuzzlePlatformsGameInstance::execHost },
			{ "InGameLoadMenu", &UPuzzlePlatformsGameInstance::execInGameLoadMenu },
			{ "Join", &UPuzzlePlatformsGameInstance::execJoin },
			{ "LoadMainMenu", &UPuzzlePlatformsGameInstance::execLoadMainMenu },
			{ "LoadMenu", &UPuzzlePlatformsGameInstance::execLoadMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Host_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Host_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzlePlatformsGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Host_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzlePlatformsGameInstance, nullptr, "Host", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Host_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Host_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Host()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Host_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzlePlatformsGameInstance_InGameLoadMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzlePlatformsGameInstance_InGameLoadMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzlePlatformsGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzlePlatformsGameInstance_InGameLoadMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzlePlatformsGameInstance, nullptr, "InGameLoadMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzlePlatformsGameInstance_InGameLoadMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePlatformsGameInstance_InGameLoadMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzlePlatformsGameInstance_InGameLoadMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPuzzlePlatformsGameInstance_InGameLoadMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join_Statics
	{
		struct PuzzlePlatformsGameInstance_eventJoin_Parms
		{
			FString Address;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Address;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join_Statics::NewProp_Address_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join_Statics::NewProp_Address = { "Address", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PuzzlePlatformsGameInstance_eventJoin_Parms, Address), METADATA_PARAMS(Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join_Statics::NewProp_Address_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join_Statics::NewProp_Address_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join_Statics::NewProp_Address,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzlePlatformsGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzlePlatformsGameInstance, nullptr, "Join", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join_Statics::PuzzlePlatformsGameInstance_eventJoin_Parms), Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzlePlatformsGameInstance_LoadMainMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzlePlatformsGameInstance_LoadMainMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzlePlatformsGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzlePlatformsGameInstance_LoadMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzlePlatformsGameInstance, nullptr, "LoadMainMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzlePlatformsGameInstance_LoadMainMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePlatformsGameInstance_LoadMainMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzlePlatformsGameInstance_LoadMainMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPuzzlePlatformsGameInstance_LoadMainMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzlePlatformsGameInstance_LoadMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzlePlatformsGameInstance_LoadMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PuzzlePlatformsGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzlePlatformsGameInstance_LoadMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzlePlatformsGameInstance, nullptr, "LoadMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzlePlatformsGameInstance_LoadMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPuzzlePlatformsGameInstance_LoadMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzlePlatformsGameInstance_LoadMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPuzzlePlatformsGameInstance_LoadMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPuzzlePlatformsGameInstance);
	UClass* Z_Construct_UClass_UPuzzlePlatformsGameInstance_NoRegister()
	{
		return UPuzzlePlatformsGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MenuClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGameMenuClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InGameMenuClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Menu_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Menu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGameMenu_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InGameMenu;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_PuzzlePlatforms,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Host, "Host" }, // 4225265003
		{ &Z_Construct_UFunction_UPuzzlePlatformsGameInstance_InGameLoadMenu, "InGameLoadMenu" }, // 4020220049
		{ &Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join, "Join" }, // 4069263590
		{ &Z_Construct_UFunction_UPuzzlePlatformsGameInstance_LoadMainMenu, "LoadMainMenu" }, // 3342821458
		{ &Z_Construct_UFunction_UPuzzlePlatformsGameInstance_LoadMenu, "LoadMenu" }, // 1686413716
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PuzzlePlatformsGameInstance.h" },
		{ "ModuleRelativePath", "PuzzlePlatformsGameInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::NewProp_MenuClass_MetaData[] = {
		{ "ModuleRelativePath", "PuzzlePlatformsGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::NewProp_MenuClass = { "MenuClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPuzzlePlatformsGameInstance, MenuClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::NewProp_MenuClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::NewProp_MenuClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::NewProp_InGameMenuClass_MetaData[] = {
		{ "ModuleRelativePath", "PuzzlePlatformsGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::NewProp_InGameMenuClass = { "InGameMenuClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPuzzlePlatformsGameInstance, InGameMenuClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::NewProp_InGameMenuClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::NewProp_InGameMenuClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::NewProp_Menu_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PuzzlePlatformsGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::NewProp_Menu = { "Menu", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPuzzlePlatformsGameInstance, Menu), Z_Construct_UClass_UMainMenu_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::NewProp_Menu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::NewProp_Menu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::NewProp_InGameMenu_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PuzzlePlatformsGameInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::NewProp_InGameMenu = { "InGameMenu", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPuzzlePlatformsGameInstance, InGameMenu), Z_Construct_UClass_UInGameMenu_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::NewProp_InGameMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::NewProp_InGameMenu_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::NewProp_MenuClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::NewProp_InGameMenuClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::NewProp_Menu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::NewProp_InGameMenu,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMenuInterface_NoRegister, (int32)VTABLE_OFFSET(UPuzzlePlatformsGameInstance, IMenuInterface), false },  // 466446636
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPuzzlePlatformsGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::ClassParams = {
		&UPuzzlePlatformsGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPuzzlePlatformsGameInstance()
	{
		if (!Z_Registration_Info_UClass_UPuzzlePlatformsGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPuzzlePlatformsGameInstance.OuterSingleton, Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPuzzlePlatformsGameInstance.OuterSingleton;
	}
	template<> PUZZLEPLATFORMS_API UClass* StaticClass<UPuzzlePlatformsGameInstance>()
	{
		return UPuzzlePlatformsGameInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPuzzlePlatformsGameInstance);
	struct Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPuzzlePlatformsGameInstance, UPuzzlePlatformsGameInstance::StaticClass, TEXT("UPuzzlePlatformsGameInstance"), &Z_Registration_Info_UClass_UPuzzlePlatformsGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPuzzlePlatformsGameInstance), 3795836733U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_1615619587(TEXT("/Script/PuzzlePlatforms"),
		Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
