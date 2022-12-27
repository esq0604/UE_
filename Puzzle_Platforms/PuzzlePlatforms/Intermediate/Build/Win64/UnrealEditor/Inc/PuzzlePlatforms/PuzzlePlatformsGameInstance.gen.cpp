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
// End Cross Module References
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
	void UPuzzlePlatformsGameInstance::StaticRegisterNativesUPuzzlePlatformsGameInstance()
	{
		UClass* Class = UPuzzlePlatformsGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Host", &UPuzzlePlatformsGameInstance::execHost },
			{ "Join", &UPuzzlePlatformsGameInstance::execJoin },
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_PuzzlePlatforms,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Host, "Host" }, // 4225265003
		{ &Z_Construct_UFunction_UPuzzlePlatformsGameInstance_Join, "Join" }, // 4069263590
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PuzzlePlatformsGameInstance.h" },
		{ "ModuleRelativePath", "PuzzlePlatformsGameInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPuzzlePlatformsGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPuzzlePlatformsGameInstance_Statics::ClassParams = {
		&UPuzzlePlatformsGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
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
		{ Z_Construct_UClass_UPuzzlePlatformsGameInstance, UPuzzlePlatformsGameInstance::StaticClass, TEXT("UPuzzlePlatformsGameInstance"), &Z_Registration_Info_UClass_UPuzzlePlatformsGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPuzzlePlatformsGameInstance), 3018914426U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_2061543064(TEXT("/Script/PuzzlePlatforms"),
		Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PuzzlePlatforms_Source_PuzzlePlatforms_PuzzlePlatformsGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
