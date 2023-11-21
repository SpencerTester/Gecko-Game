// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Interfaces/GGHealthInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GECKO_GAME_GGHealthInterface_generated_h
#error "GGHealthInterface.generated.h already included, missing '#pragma once' in GGHealthInterface.h"
#endif
#define GECKO_GAME_GGHealthInterface_generated_h

#define FID_Gecko_Game_Source_Gecko_Game_Core_Interfaces_GGHealthInterface_h_13_SPARSE_DATA
#define FID_Gecko_Game_Source_Gecko_Game_Core_Interfaces_GGHealthInterface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Gecko_Game_Source_Gecko_Game_Core_Interfaces_GGHealthInterface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Gecko_Game_Source_Gecko_Game_Core_Interfaces_GGHealthInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTakeDamage); \
	DECLARE_FUNCTION(execOnDeath);


#define FID_Gecko_Game_Source_Gecko_Game_Core_Interfaces_GGHealthInterface_h_13_ACCESSORS
#define FID_Gecko_Game_Source_Gecko_Game_Core_Interfaces_GGHealthInterface_h_13_CALLBACK_WRAPPERS
#define FID_Gecko_Game_Source_Gecko_Game_Core_Interfaces_GGHealthInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GECKO_GAME_API UGGHealthInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GECKO_GAME_API UGGHealthInterface(UGGHealthInterface&&); \
	GECKO_GAME_API UGGHealthInterface(const UGGHealthInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GECKO_GAME_API, UGGHealthInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGGHealthInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGGHealthInterface) \
	GECKO_GAME_API virtual ~UGGHealthInterface();


#define FID_Gecko_Game_Source_Gecko_Game_Core_Interfaces_GGHealthInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGGHealthInterface(); \
	friend struct Z_Construct_UClass_UGGHealthInterface_Statics; \
public: \
	DECLARE_CLASS(UGGHealthInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Gecko_Game"), GECKO_GAME_API) \
	DECLARE_SERIALIZER(UGGHealthInterface)


#define FID_Gecko_Game_Source_Gecko_Game_Core_Interfaces_GGHealthInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Gecko_Game_Source_Gecko_Game_Core_Interfaces_GGHealthInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Gecko_Game_Source_Gecko_Game_Core_Interfaces_GGHealthInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Gecko_Game_Source_Gecko_Game_Core_Interfaces_GGHealthInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGGHealthInterface() {} \
public: \
	typedef UGGHealthInterface UClassType; \
	typedef IGGHealthInterface ThisClass; \
	static void Execute_OnDeath(UObject* O); \
	static void Execute_OnTakeDamage(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Gecko_Game_Source_Gecko_Game_Core_Interfaces_GGHealthInterface_h_10_PROLOG
#define FID_Gecko_Game_Source_Gecko_Game_Core_Interfaces_GGHealthInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Gecko_Game_Source_Gecko_Game_Core_Interfaces_GGHealthInterface_h_13_SPARSE_DATA \
	FID_Gecko_Game_Source_Gecko_Game_Core_Interfaces_GGHealthInterface_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Gecko_Game_Source_Gecko_Game_Core_Interfaces_GGHealthInterface_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Gecko_Game_Source_Gecko_Game_Core_Interfaces_GGHealthInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Gecko_Game_Source_Gecko_Game_Core_Interfaces_GGHealthInterface_h_13_ACCESSORS \
	FID_Gecko_Game_Source_Gecko_Game_Core_Interfaces_GGHealthInterface_h_13_CALLBACK_WRAPPERS \
	FID_Gecko_Game_Source_Gecko_Game_Core_Interfaces_GGHealthInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GECKO_GAME_API UClass* StaticClass<class UGGHealthInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Gecko_Game_Source_Gecko_Game_Core_Interfaces_GGHealthInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
