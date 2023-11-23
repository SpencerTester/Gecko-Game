// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/GGFollowCamera.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GECKO_GAME_GGFollowCamera_generated_h
#error "GGFollowCamera.generated.h already included, missing '#pragma once' in GGFollowCamera.h"
#endif
#define GECKO_GAME_GGFollowCamera_generated_h

#define FID_Gecko_Game_Source_Gecko_Game_Player_GGFollowCamera_h_18_SPARSE_DATA
#define FID_Gecko_Game_Source_Gecko_Game_Player_GGFollowCamera_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Gecko_Game_Source_Gecko_Game_Player_GGFollowCamera_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Gecko_Game_Source_Gecko_Game_Player_GGFollowCamera_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execActivateCamera); \
	DECLARE_FUNCTION(execSetCameraConfines);


#define FID_Gecko_Game_Source_Gecko_Game_Player_GGFollowCamera_h_18_ACCESSORS
#define FID_Gecko_Game_Source_Gecko_Game_Player_GGFollowCamera_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGGFollowCamera(); \
	friend struct Z_Construct_UClass_AGGFollowCamera_Statics; \
public: \
	DECLARE_CLASS(AGGFollowCamera, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Gecko_Game"), NO_API) \
	DECLARE_SERIALIZER(AGGFollowCamera)


#define FID_Gecko_Game_Source_Gecko_Game_Player_GGFollowCamera_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGGFollowCamera(AGGFollowCamera&&); \
	NO_API AGGFollowCamera(const AGGFollowCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGGFollowCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGGFollowCamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGGFollowCamera) \
	NO_API virtual ~AGGFollowCamera();


#define FID_Gecko_Game_Source_Gecko_Game_Player_GGFollowCamera_h_14_PROLOG
#define FID_Gecko_Game_Source_Gecko_Game_Player_GGFollowCamera_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Gecko_Game_Source_Gecko_Game_Player_GGFollowCamera_h_18_SPARSE_DATA \
	FID_Gecko_Game_Source_Gecko_Game_Player_GGFollowCamera_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Gecko_Game_Source_Gecko_Game_Player_GGFollowCamera_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Gecko_Game_Source_Gecko_Game_Player_GGFollowCamera_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Gecko_Game_Source_Gecko_Game_Player_GGFollowCamera_h_18_ACCESSORS \
	FID_Gecko_Game_Source_Gecko_Game_Player_GGFollowCamera_h_18_INCLASS_NO_PURE_DECLS \
	FID_Gecko_Game_Source_Gecko_Game_Player_GGFollowCamera_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GECKO_GAME_API UClass* StaticClass<class AGGFollowCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Gecko_Game_Source_Gecko_Game_Player_GGFollowCamera_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
