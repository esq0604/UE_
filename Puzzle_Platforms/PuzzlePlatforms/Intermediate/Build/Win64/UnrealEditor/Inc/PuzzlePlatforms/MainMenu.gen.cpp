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
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_PuzzlePlatforms();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	void UMainMenu::StaticRegisterNativesUMainMenu()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainMenu);
	UClass* Z_Construct_UClass_UMainMenu_NoRegister()
	{
		return UMainMenu::StaticClass();
	}
	struct Z_Construct_UClass_UMainMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Host_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Host;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Join_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Join;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMainMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_PuzzlePlatforms,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "MenuSystem/MainMenu.h" },
		{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_Host = { "Host", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu, Host), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_Host_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuSystem/MainMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMainMenu_Statics::NewProp_Join = { "Join", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMainMenu, Join), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMainMenu_Statics::NewProp_Join_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_Host,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainMenu_Statics::NewProp_Join,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMainMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainMenu_Statics::ClassParams = {
		&UMainMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMainMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
		{ Z_Construct_UClass_UMainMenu, UMainMenu::StaticClass, TEXT("UMainMenu"), &Z_Registration_Info_UClass_UMainMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainMenu), 1479238424U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MainMenu_h_2667324359(TEXT("/Script/PuzzlePlatforms"),
		Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MainMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MainMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
