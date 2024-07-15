// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FVector;
class AActor;
#ifdef FIRSTPROJECT_SpawnVolume_generated_h
#error "SpawnVolume.generated.h already included, missing '#pragma once' in SpawnVolume.h"
#endif
#define FIRSTPROJECT_SpawnVolume_generated_h

#define SoulSkillsGame_master_Source_FirstProject_SpawnVolume_h_12_SPARSE_DATA
#define SoulSkillsGame_master_Source_FirstProject_SpawnVolume_h_12_RPC_WRAPPERS \
	virtual void SpawnOurActor_Implementation(UClass* ToSpawn, FVector const& Location); \
 \
	DECLARE_FUNCTION(execSpawnOurActor); \
	DECLARE_FUNCTION(execGetSpawnActor); \
	DECLARE_FUNCTION(execGetSpawnPoint);


#define SoulSkillsGame_master_Source_FirstProject_SpawnVolume_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SpawnOurActor_Implementation(UClass* ToSpawn, FVector const& Location); \
 \
	DECLARE_FUNCTION(execSpawnOurActor); \
	DECLARE_FUNCTION(execGetSpawnActor); \
	DECLARE_FUNCTION(execGetSpawnPoint);


#define SoulSkillsGame_master_Source_FirstProject_SpawnVolume_h_12_EVENT_PARMS \
	struct SpawnVolume_eventSpawnOurActor_Parms \
	{ \
		UClass* ToSpawn; \
		FVector Location; \
	};


#define SoulSkillsGame_master_Source_FirstProject_SpawnVolume_h_12_CALLBACK_WRAPPERS
#define SoulSkillsGame_master_Source_FirstProject_SpawnVolume_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawnVolume(); \
	friend struct Z_Construct_UClass_ASpawnVolume_Statics; \
public: \
	DECLARE_CLASS(ASpawnVolume, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstProject"), NO_API) \
	DECLARE_SERIALIZER(ASpawnVolume)


#define SoulSkillsGame_master_Source_FirstProject_SpawnVolume_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASpawnVolume(); \
	friend struct Z_Construct_UClass_ASpawnVolume_Statics; \
public: \
	DECLARE_CLASS(ASpawnVolume, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstProject"), NO_API) \
	DECLARE_SERIALIZER(ASpawnVolume)


#define SoulSkillsGame_master_Source_FirstProject_SpawnVolume_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpawnVolume(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpawnVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnVolume(ASpawnVolume&&); \
	NO_API ASpawnVolume(const ASpawnVolume&); \
public:


#define SoulSkillsGame_master_Source_FirstProject_SpawnVolume_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawnVolume(ASpawnVolume&&); \
	NO_API ASpawnVolume(const ASpawnVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawnVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawnVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawnVolume)


#define SoulSkillsGame_master_Source_FirstProject_SpawnVolume_h_12_PRIVATE_PROPERTY_OFFSET
#define SoulSkillsGame_master_Source_FirstProject_SpawnVolume_h_9_PROLOG \
	SoulSkillsGame_master_Source_FirstProject_SpawnVolume_h_12_EVENT_PARMS


#define SoulSkillsGame_master_Source_FirstProject_SpawnVolume_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SoulSkillsGame_master_Source_FirstProject_SpawnVolume_h_12_PRIVATE_PROPERTY_OFFSET \
	SoulSkillsGame_master_Source_FirstProject_SpawnVolume_h_12_SPARSE_DATA \
	SoulSkillsGame_master_Source_FirstProject_SpawnVolume_h_12_RPC_WRAPPERS \
	SoulSkillsGame_master_Source_FirstProject_SpawnVolume_h_12_CALLBACK_WRAPPERS \
	SoulSkillsGame_master_Source_FirstProject_SpawnVolume_h_12_INCLASS \
	SoulSkillsGame_master_Source_FirstProject_SpawnVolume_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SoulSkillsGame_master_Source_FirstProject_SpawnVolume_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SoulSkillsGame_master_Source_FirstProject_SpawnVolume_h_12_PRIVATE_PROPERTY_OFFSET \
	SoulSkillsGame_master_Source_FirstProject_SpawnVolume_h_12_SPARSE_DATA \
	SoulSkillsGame_master_Source_FirstProject_SpawnVolume_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SoulSkillsGame_master_Source_FirstProject_SpawnVolume_h_12_CALLBACK_WRAPPERS \
	SoulSkillsGame_master_Source_FirstProject_SpawnVolume_h_12_INCLASS_NO_PURE_DECLS \
	SoulSkillsGame_master_Source_FirstProject_SpawnVolume_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPROJECT_API UClass* StaticClass<class ASpawnVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SoulSkillsGame_master_Source_FirstProject_SpawnVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
