// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PuzzlePlatforms/PlatformTrigger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformTrigger() {}
// Cross Module References
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_APlatformTrigger_NoRegister();
	PUZZLEPLATFORMS_API UClass* Z_Construct_UClass_APlatformTrigger();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PuzzlePlatforms();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void APlatformTrigger::StaticRegisterNativesAPlatformTrigger()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlatformTrigger);
	UClass* Z_Construct_UClass_APlatformTrigger_NoRegister()
	{
		return APlatformTrigger::StaticClass();
	}
	struct Z_Construct_UClass_APlatformTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerVolume_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerVolume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlatformTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PuzzlePlatforms,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformTrigger_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlatformTrigger.h" },
		{ "ModuleRelativePath", "PlatformTrigger.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlatformTrigger_Statics::NewProp_TriggerVolume_MetaData[] = {
		{ "Category", "PlatformTrigger" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlatformTrigger.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformTrigger_Statics::NewProp_TriggerVolume = { "TriggerVolume", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlatformTrigger, TriggerVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlatformTrigger_Statics::NewProp_TriggerVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformTrigger_Statics::NewProp_TriggerVolume_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlatformTrigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformTrigger_Statics::NewProp_TriggerVolume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlatformTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformTrigger>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlatformTrigger_Statics::ClassParams = {
		&APlatformTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlatformTrigger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlatformTrigger_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlatformTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlatformTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlatformTrigger()
	{
		if (!Z_Registration_Info_UClass_APlatformTrigger.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlatformTrigger.OuterSingleton, Z_Construct_UClass_APlatformTrigger_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlatformTrigger.OuterSingleton;
	}
	template<> PUZZLEPLATFORMS_API UClass* StaticClass<APlatformTrigger>()
	{
		return APlatformTrigger::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformTrigger);
	struct Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_PlatformTrigger_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_PlatformTrigger_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlatformTrigger, APlatformTrigger::StaticClass, TEXT("APlatformTrigger"), &Z_Registration_Info_UClass_APlatformTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlatformTrigger), 1893321466U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_PlatformTrigger_h_2237510108(TEXT("/Script/PuzzlePlatforms"),
		Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_PlatformTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_PlatformTrigger_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
