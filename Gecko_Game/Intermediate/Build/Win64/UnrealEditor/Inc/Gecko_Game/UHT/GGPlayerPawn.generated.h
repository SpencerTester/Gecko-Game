// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/GGPlayerPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GECKO_GAME_GGPlayerPawn_generated_h
#error "GGPlayerPawn.generated.h already included, missing '#pragma once' in GGPlayerPawn.h"
#endif
#define GECKO_GAME_GGPlayerPawn_generated_h

#define FID_Gecko_Game_Source_Gecko_Game_Player_GGPlayerPawn_h_21_SPARSE_DATA
#define FID_Gecko_Game_Source_Gecko_Game_Player_GGPlayerPawn_h_21_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Gecko_Game_Source_Gecko_Game_Player_GGPlayerPawn_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Gecko_Game_Source_Gecko_Game_Player_GGPlayerPawn_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDamagePlayer); \
	DECLARE_FUNCTION(execHealPlayer);


#define FID_Gecko_Game_Source_Gecko_Game_Player_GGPlayerPawn_h_21_ACCESSORS
#define FID_Gecko_Game_Source_Gecko_Game_Player_GGPlayerPawn_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGGPlayerPawn(); \
	friend struct Z_Construct_UClass_AGGPlayerPawn_Statics; \
public: \
	DECLARE_CLASS(AGGPlayerPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Gecko_Game"), NO_API) \
	DECLARE_SERIALIZER(AGGPlayerPawn) \
	virtual UObject* _getUObject() const override { return const_cast<AGGPlayerPawn*>(this); }


#define FID_Gecko_Game_Source_Gecko_Game_Player_GGPlayerPawn_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGGPlayerPawn(AGGPlayerPawn&&); \
	NO_API AGGPlayerPawn(const AGGPlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGGPlayerPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGGPlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGGPlayerPawn) \
	NO_API virtual ~AGGPlayerPawn();


#define FID_Gecko_Game_Source_Gecko_Game_Player_GGPlayerPawn_h_17_PROLOG
#define FID_Gecko_Game_Source_Gecko_Game_Player_GGPlayerPawn_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Gecko_Game_Source_Gecko_Game_Player_GGPlayerPawn_h_21_SPARSE_DATA \
	FID_Gecko_Game_Source_Gecko_Game_Player_GGPlayerPawn_h_21_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Gecko_Game_Source_Gecko_Game_Player_GGPlayerPawn_h_21_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Gecko_Game_Source_Gecko_Game_Player_GGPlayerPawn_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Gecko_Game_Source_Gecko_Game_Player_GGPlayerPawn_h_21_ACCESSORS \
	FID_Gecko_Game_Source_Gecko_Game_Player_GGPlayerPawn_h_21_INCLASS_NO_PURE_DECLS \
	FID_Gecko_Game_Source_Gecko_Game_Player_GGPlayerPawn_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GECKO_GAME_API UClass* StaticClass<class AGGPlayerPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Gecko_Game_Source_Gecko_Game_Player_GGPlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
