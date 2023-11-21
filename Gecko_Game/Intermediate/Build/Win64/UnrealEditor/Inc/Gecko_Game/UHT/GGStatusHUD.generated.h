// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/Game/GGStatusHUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GECKO_GAME_GGStatusHUD_generated_h
#error "GGStatusHUD.generated.h already included, missing '#pragma once' in GGStatusHUD.h"
#endif
#define GECKO_GAME_GGStatusHUD_generated_h

#define FID_Gecko_Game_Source_Gecko_Game_UI_Game_GGStatusHUD_h_25_SPARSE_DATA
#define FID_Gecko_Game_Source_Gecko_Game_UI_Game_GGStatusHUD_h_25_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Gecko_Game_Source_Gecko_Game_UI_Game_GGStatusHUD_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Gecko_Game_Source_Gecko_Game_UI_Game_GGStatusHUD_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateHealthPercent);


#define FID_Gecko_Game_Source_Gecko_Game_UI_Game_GGStatusHUD_h_25_ACCESSORS
#define FID_Gecko_Game_Source_Gecko_Game_UI_Game_GGStatusHUD_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGGStatusHUD(); \
	friend struct Z_Construct_UClass_UGGStatusHUD_Statics; \
public: \
	DECLARE_CLASS(UGGStatusHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Gecko_Game"), NO_API) \
	DECLARE_SERIALIZER(UGGStatusHUD)


#define FID_Gecko_Game_Source_Gecko_Game_UI_Game_GGStatusHUD_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGGStatusHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGGStatusHUD(UGGStatusHUD&&); \
	NO_API UGGStatusHUD(const UGGStatusHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGGStatusHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGGStatusHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGGStatusHUD) \
	NO_API virtual ~UGGStatusHUD();


#define FID_Gecko_Game_Source_Gecko_Game_UI_Game_GGStatusHUD_h_21_PROLOG
#define FID_Gecko_Game_Source_Gecko_Game_UI_Game_GGStatusHUD_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Gecko_Game_Source_Gecko_Game_UI_Game_GGStatusHUD_h_25_SPARSE_DATA \
	FID_Gecko_Game_Source_Gecko_Game_UI_Game_GGStatusHUD_h_25_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Gecko_Game_Source_Gecko_Game_UI_Game_GGStatusHUD_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Gecko_Game_Source_Gecko_Game_UI_Game_GGStatusHUD_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Gecko_Game_Source_Gecko_Game_UI_Game_GGStatusHUD_h_25_ACCESSORS \
	FID_Gecko_Game_Source_Gecko_Game_UI_Game_GGStatusHUD_h_25_INCLASS_NO_PURE_DECLS \
	FID_Gecko_Game_Source_Gecko_Game_UI_Game_GGStatusHUD_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GECKO_GAME_API UClass* StaticClass<class UGGStatusHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Gecko_Game_Source_Gecko_Game_UI_Game_GGStatusHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
