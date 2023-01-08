// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PuzzlePlatforms/MenuSystem/MenuWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuWidget() {}
// Cross Module References
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UMenuWidget_NoRegister();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_UMenuWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_PuzzlePlatforms();
// End Cross Module References
	void UMenuWidget::StaticRegisterNativesUMenuWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMenuWidget);
	UClass* Z_Construct_UClass_UMenuWidget_NoRegister()
	{
		return UMenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UMenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_PuzzlePlatforms,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMenuWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MenuSystem/MenuWidget.h" },
		{ "ModuleRelativePath", "MenuSystem/MenuWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenuWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMenuWidget_Statics::ClassParams = {
		&UMenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMenuWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMenuWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMenuWidget()
	{
		if (!Z_Registration_Info_UClass_UMenuWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMenuWidget.OuterSingleton, Z_Construct_UClass_UMenuWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMenuWidget.OuterSingleton;
	}
	template<> PUZZLEPLATFORMS_API UClass* StaticClass<UMenuWidget>()
	{
		return UMenuWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuWidget);
	struct Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MenuWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MenuWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMenuWidget, UMenuWidget::StaticClass, TEXT("UMenuWidget"), &Z_Registration_Info_UClass_UMenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMenuWidget), 3490014906U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MenuWidget_h_835332473(TEXT("/Script/PuzzlePlatforms"),
		Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MenuWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_MenuWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
