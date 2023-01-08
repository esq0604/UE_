// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PUZZLEPLATFORMS_InGameMenu_generated_h
#error "InGameMenu.generated.h already included, missing '#pragma once' in InGameMenu.h"
#endif
#define PUZZLEPLATFORMS_InGameMenu_generated_h

#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_InGameMenu_h_15_SPARSE_DATA
#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_InGameMenu_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execQuitInGameMenu); \
	DECLARE_FUNCTION(execCancleInGameMenu);


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_InGameMenu_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execQuitInGameMenu); \
	DECLARE_FUNCTION(execCancleInGameMenu);


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_InGameMenu_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInGameMenu(); \
	friend struct Z_Construct_UClass_UInGameMenu_Statics; \
public: \
	DECLARE_CLASS(UInGameMenu, UMenuWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PuzzlePlatforms"), NO_API) \
	DECLARE_SERIALIZER(UInGameMenu)


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_InGameMenu_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUInGameMenu(); \
	friend struct Z_Construct_UClass_UInGameMenu_Statics; \
public: \
	DECLARE_CLASS(UInGameMenu, UMenuWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PuzzlePlatforms"), NO_API) \
	DECLARE_SERIALIZER(UInGameMenu)


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_InGameMenu_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInGameMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInGameMenu) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInGameMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInGameMenu); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInGameMenu(UInGameMenu&&); \
	NO_API UInGameMenu(const UInGameMenu&); \
public:


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_InGameMenu_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInGameMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInGameMenu(UInGameMenu&&); \
	NO_API UInGameMenu(const UInGameMenu&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInGameMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInGameMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInGameMenu)


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_InGameMenu_h_12_PROLOG
#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_InGameMenu_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_InGameMenu_h_15_SPARSE_DATA \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_InGameMenu_h_15_RPC_WRAPPERS \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_InGameMenu_h_15_INCLASS \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_InGameMenu_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_InGameMenu_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_InGameMenu_h_15_SPARSE_DATA \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_InGameMenu_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_InGameMenu_h_15_INCLASS_NO_PURE_DECLS \
	FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_InGameMenu_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PUZZLEPLATFORMS_API UClass* StaticClass<class UInGameMenu>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PuzzlePlatforms_Source_PuzzlePlatforms_MenuSystem_InGameMenu_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
