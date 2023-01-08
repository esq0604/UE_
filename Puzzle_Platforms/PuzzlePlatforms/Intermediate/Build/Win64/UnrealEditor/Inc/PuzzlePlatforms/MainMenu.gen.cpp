// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PuzzlePlatforms/MenuSystem/MainMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainMenu() {}
// Cross Module References
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UMainMenu_NoRegister();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UMainMenu();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UMenuWidget();
	UPackage* Z_Construct_UPackage__Script_PuzzlePlatforms();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UMainMenu::execQuitPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuitPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu::execJoinServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinServer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu::execOpenMainMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenMainMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu::execOpenJoinMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenJoinMenu();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMainMenu::execHostServer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HostServer();
		P_NATIVE_END;
	}
	void UMainMenu::StaticRegisterNativesUMainMenu()
	{
		UClass* Class = UMainMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HostServer", &UMainMenu::execHostServer },
			{ "JoinServer", &UMainMenu::execJoinServer },
			{ "OpenJoinMenu", &UMainMenu::execOpenJoinMenu },
			{ "OpenMainMenu", &UMainMenu::execOpenMainMenu },
			{ "QuitPressed", &UMainMenu::execQuitPressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMainMenu_HostServer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_HostServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_HostServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "HostServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenu_HostServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_HostServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenu_HostServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenu_HostServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_JoinServer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_JoinServer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_JoinServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "JoinServer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenu_JoinServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_JoinServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenu_JoinServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenu_JoinServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_OpenJoinMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_OpenJoinMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_OpenJoinMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "OpenJoinMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenu_OpenJoinMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_OpenJoinMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenu_OpenJoinMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenu_OpenJoinMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_OpenMainMenu_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_OpenMainMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_OpenMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "OpenMainMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenu_OpenMainMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_OpenMainMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenu_OpenMainMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenu_OpenMainMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMainMenu_QuitPressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMainMenu_QuitPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMainMenu_QuitPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMainMenu, nullptr, "QuitPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMainMenu_QuitPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMainMenu_QuitPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMainMenu_QuitPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMainMenu_QuitPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainMenu);
	UClass* Z_Construct_UClass_UMainMenu_NoRegister()
	{
		return UMainMenu::StaticClass();
	}
	struct Z_Construct_UClass_UMainMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HostButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HostButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JoinButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JoinButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CancleJoinMenuButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CancleJoinMenuButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuitButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuitButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAddress_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuSwither_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MenuSwither;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JoinMenu_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JoinMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainMenu_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MainMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IPAddressField_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IPAddressField;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMenuWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_PuzzlePlatforms,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMainMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMainMenu_HostServer, "HostServer" }, // 2123741274
		{ &Z_Construct_UFunction_UMainMenu_JoinServer, "JoinServer" }, // 1988920579
		{ &Z_Construct_UFunction_UMainMenu_OpenJoinMenu, "OpenJoinMenu" }, // 1600908404
		{ &Z_Construct_UFunction_UMainMenu_OpenMainMenu, "OpenMainMenu" }, // 1813837577
		{ &Z_Construct_UFunction_UMainMenu_QuitPressed, "QuitPressed" }, // 2250074821
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "MenuSystem/MainMenu.h" },
		{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_HostButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_HostButton = { "HostButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu, HostButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::NewProp_HostButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_HostButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_JoinButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_JoinButton = { "JoinButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu, JoinButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::NewProp_JoinButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_JoinButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_CancleJoinMenuButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_CancleJoinMenuButton = { "CancleJoinMenuButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu, CancleJoinMenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::NewProp_CancleJoinMenuButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_CancleJoinMenuButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_QuitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_QuitButton = { "QuitButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu, QuitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::NewProp_QuitButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_QuitButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_InputAddress_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_InputAddress = { "InputAddress", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu, InputAddress), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::NewProp_InputAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_InputAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_MenuSwither_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_MenuSwither = { "MenuSwither", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu, MenuSwither), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::NewProp_MenuSwither_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_MenuSwither_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_JoinMenu_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_JoinMenu = { "JoinMenu", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu, JoinMenu), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::NewProp_JoinMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_JoinMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_MainMenu_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_MainMenu = { "MainMenu", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu, MainMenu), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::NewProp_MainMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_MainMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_IPAddressField_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_IPAddressField = { "IPAddressField", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu, IPAddressField), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::NewProp_IPAddressField_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_IPAddressField_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_HostButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_JoinButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_CancleJoinMenuButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_QuitButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_InputAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_MenuSwither,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_JoinMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_MainMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_IPAddressField,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainMenu_Statics::ClassParams = {
		&UMainMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMainMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMainMenu()
	{
		if (!Z_Registration_Info_UClass_UMainMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainMenu.OuterSingleton, Z_Construct_UClass_UMainMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMainMenu.OuterSingleton;
	}
	template<> PUZZLEPLATFORMS_API UClass* StaticClass<UMainMenu>()
	{
		return UMainMenu::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMainMenu);
	struct Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MainMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MainMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMainMenu, UMainMenu::StaticClass, TEXT("UMainMenu"), &Z_Registration_Info_UClass_UMainMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainMenu), 1262957876U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MainMenu_h_1798398535(TEXT("/Script/PuzzlePlatforms"),
		Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MainMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MainMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
