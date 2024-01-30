// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OutbreakCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OUTBREAKPROJECT_OutbreakCharacter_generated_h
#error "OutbreakCharacter.generated.h already included, missing '#pragma once' in OutbreakCharacter.h"
#endif
#define OUTBREAKPROJECT_OutbreakCharacter_generated_h

#define FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutbreakCharacter_h_14_SPARSE_DATA
#define FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutbreakCharacter_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutbreakCharacter_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutbreakCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddCoin); \
	DECLARE_FUNCTION(execShoot); \
	DECLARE_FUNCTION(execIsNotAiming); \
	DECLARE_FUNCTION(execIsAiming); \
	DECLARE_FUNCTION(execMoveDown); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execOnDeath); \
	DECLARE_FUNCTION(execlookUp); \
	DECLARE_FUNCTION(execTurn); \
	DECLARE_FUNCTION(execDeath);


#define FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutbreakCharacter_h_14_ACCESSORS
#define FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutbreakCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOutbreakCharacter(); \
	friend struct Z_Construct_UClass_AOutbreakCharacter_Statics; \
public: \
	DECLARE_CLASS(AOutbreakCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OutBreakProject"), NO_API) \
	DECLARE_SERIALIZER(AOutbreakCharacter)


#define FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutbreakCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOutbreakCharacter(AOutbreakCharacter&&); \
	NO_API AOutbreakCharacter(const AOutbreakCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOutbreakCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOutbreakCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOutbreakCharacter) \
	NO_API virtual ~AOutbreakCharacter();


#define FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutbreakCharacter_h_11_PROLOG
#define FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutbreakCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutbreakCharacter_h_14_SPARSE_DATA \
	FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutbreakCharacter_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutbreakCharacter_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutbreakCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutbreakCharacter_h_14_ACCESSORS \
	FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutbreakCharacter_h_14_INCLASS_NO_PURE_DECLS \
	FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutbreakCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OUTBREAKPROJECT_API UClass* StaticClass<class AOutbreakCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutbreakCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
