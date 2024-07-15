// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMain;
#ifdef FIRSTPROJECT_Pickup_generated_h
#error "Pickup.generated.h already included, missing '#pragma once' in Pickup.h"
#endif
#define FIRSTPROJECT_Pickup_generated_h

#define SoulSkillsGame_master_Source_FirstProject_Pickup_h_15_SPARSE_DATA
#define SoulSkillsGame_master_Source_FirstProject_Pickup_h_15_RPC_WRAPPERS
#define SoulSkillsGame_master_Source_FirstProject_Pickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define SoulSkillsGame_master_Source_FirstProject_Pickup_h_15_EVENT_PARMS \
	struct Pickup_eventOnPickupBP_Parms \
	{ \
		AMain* Target; \
	};


#define SoulSkillsGame_master_Source_FirstProject_Pickup_h_15_CALLBACK_WRAPPERS
#define SoulSkillsGame_master_Source_FirstProject_Pickup_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstProject"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define SoulSkillsGame_master_Source_FirstProject_Pickup_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstProject"), NO_API) \
	DECLARE_SERIALIZER(APickup)


#define SoulSkillsGame_master_Source_FirstProject_Pickup_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public:


#define SoulSkillsGame_master_Source_FirstProject_Pickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup)


#define SoulSkillsGame_master_Source_FirstProject_Pickup_h_15_PRIVATE_PROPERTY_OFFSET
#define SoulSkillsGame_master_Source_FirstProject_Pickup_h_12_PROLOG \
	SoulSkillsGame_master_Source_FirstProject_Pickup_h_15_EVENT_PARMS


#define SoulSkillsGame_master_Source_FirstProject_Pickup_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SoulSkillsGame_master_Source_FirstProject_Pickup_h_15_PRIVATE_PROPERTY_OFFSET \
	SoulSkillsGame_master_Source_FirstProject_Pickup_h_15_SPARSE_DATA \
	SoulSkillsGame_master_Source_FirstProject_Pickup_h_15_RPC_WRAPPERS \
	SoulSkillsGame_master_Source_FirstProject_Pickup_h_15_CALLBACK_WRAPPERS \
	SoulSkillsGame_master_Source_FirstProject_Pickup_h_15_INCLASS \
	SoulSkillsGame_master_Source_FirstProject_Pickup_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SoulSkillsGame_master_Source_FirstProject_Pickup_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SoulSkillsGame_master_Source_FirstProject_Pickup_h_15_PRIVATE_PROPERTY_OFFSET \
	SoulSkillsGame_master_Source_FirstProject_Pickup_h_15_SPARSE_DATA \
	SoulSkillsGame_master_Source_FirstProject_Pickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SoulSkillsGame_master_Source_FirstProject_Pickup_h_15_CALLBACK_WRAPPERS \
	SoulSkillsGame_master_Source_FirstProject_Pickup_h_15_INCLASS_NO_PURE_DECLS \
	SoulSkillsGame_master_Source_FirstProject_Pickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPROJECT_API UClass* StaticClass<class APickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SoulSkillsGame_master_Source_FirstProject_Pickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
