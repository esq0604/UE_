// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PuzzlePlatforms/MenuSystem/InGameMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGameMenu() {}
// Cross Module References
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UInGameMenu_NoRegister();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UInGameMenu();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UMenuWidget();
	UPackage* Z_Construct_UPackage__Script_PuzzlePlatforms();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UInGameMenu::execQuitInGameMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuitInGameMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInGameMenu::execCancleInGameMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancleInGameMenu();
		P_NATIVE_END;
	}
	void UInGameMenu::StaticRegisterNativesUInGameMenu()
	{
		UClass* Class = UInGameMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancleInGameMenu", &UInGameMenu::execCancleInGameMenu },
			{ "QuitInGameMenu", &UInGameMenu::execQuitInGameMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInGameMenu_CancleInGameMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInGameMenu_CancleInGameMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MenuSystem/InGameMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInGameMenu_CancleInGameMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameMenu, nullptr, "CancleInGameMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInGameMenu_CancleInGameMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameMenu_CancleInGameMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInGameMenu_CancleInGameMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInGameMenu_CancleInGameMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInGameMenu_QuitInGameMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInGameMenu_QuitInGameMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MenuSystem/InGameMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInGameMenu_QuitInGameMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameMenu, nullptr, "QuitInGameMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInGameMenu_QuitInGameMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameMenu_QuitInGameMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInGameMenu_QuitInGameMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInGameMenu_QuitInGameMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInGameMenu);
	UClass* Z_Construct_UClass_UInGameMenu_NoRegister()
	{
		return UInGameMenu::StaticClass();
	}
	struct Z_Construct_UClass_UInGameMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CancleButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CancleButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuitButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuitButton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInGameMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMenuWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_PuzzlePlatforms,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInGameMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInGameMenu_CancleInGameMenu, "CancleInGameMenu" }, // 1741615360
		{ &Z_Construct_UFunction_UInGameMenu_QuitInGameMenu, "QuitInGameMenu" }, // 3090647819
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MenuSystem/InGameMenu.h" },
		{ "ModuleRelativePath", "MenuSystem/InGameMenu.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameMenu_Statics::NewProp_CancleButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuSystem/InGameMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInGameMenu_Statics::NewProp_CancleButton = { "CancleButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInGameMenu, CancleButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInGameMenu_Statics::NewProp_CancleButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameMenu_Statics::NewProp_CancleButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameMenu_Statics::NewProp_QuitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuSystem/InGameMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInGameMenu_Statics::NewProp_QuitButton = { "QuitButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInGameMenu, QuitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInGameMenu_Statics::NewProp_QuitButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameMenu_Statics::NewProp_QuitButton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInGameMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameMenu_Statics::NewProp_CancleButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameMenu_Statics::NewProp_QuitButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInGameMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInGameMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInGameMenu_Statics::ClassParams = {
		&UInGameMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInGameMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInGameMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInGameMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInGameMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInGameMenu()
	{
		if (!Z_Registration_Info_UClass_UInGameMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInGameMenu.OuterSingleton, Z_Construct_UClass_UInGameMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInGameMenu.OuterSingleton;
	}
	template<> PUZZLEPLATFORMS_API UClass* StaticClass<UInGameMenu>()
	{
		return UInGameMenu::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInGameMenu);
	struct Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_InGameMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_InGameMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInGameMenu, UInGameMenu::StaticClass, TEXT("UInGameMenu"), &Z_Registration_Info_UClass_UInGameMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInGameMenu), 949463972U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_InGameMenu_h_4101569167(TEXT("/Script/PuzzlePlatforms"),
		Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_InGameMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_InGameMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
