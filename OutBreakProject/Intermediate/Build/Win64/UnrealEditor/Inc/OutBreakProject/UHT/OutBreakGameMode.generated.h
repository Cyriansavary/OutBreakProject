// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OutBreakGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AFloorTile;
#ifdef OUTBREAKPROJECT_OutBreakGameMode_generated_h
#error "OutBreakGameMode.generated.h already included, missing '#pragma once' in OutBreakGameMode.h"
#endif
#define OUTBREAKPROJECT_OutBreakGameMode_generated_h

#define FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutBreakGameMode_h_17_SPARSE_DATA
#define FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutBreakGameMode_h_17_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutBreakGameMode_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutBreakGameMode_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddFloorTile); \
	DECLARE_FUNCTION(execCreateInitialFloorTiles);


#define FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutBreakGameMode_h_17_ACCESSORS
#define FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutBreakGameMode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOutBreakGameMode(); \
	friend struct Z_Construct_UClass_AOutBreakGameMode_Statics; \
public: \
	DECLARE_CLASS(AOutBreakGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OutBreakProject"), NO_API) \
	DECLARE_SERIALIZER(AOutBreakGameMode)


#define FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutBreakGameMode_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOutBreakGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOutBreakGameMode(AOutBreakGameMode&&); \
	NO_API AOutBreakGameMode(const AOutBreakGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOutBreakGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOutBreakGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOutBreakGameMode) \
	NO_API virtual ~AOutBreakGameMode();


#define FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutBreakGameMode_h_14_PROLOG
#define FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutBreakGameMode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutBreakGameMode_h_17_SPARSE_DATA \
	FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutBreakGameMode_h_17_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutBreakGameMode_h_17_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutBreakGameMode_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutBreakGameMode_h_17_ACCESSORS \
	FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutBreakGameMode_h_17_INCLASS_NO_PURE_DECLS \
	FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutBreakGameMode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OUTBREAKPROJECT_API UClass* StaticClass<class AOutBreakGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_dev_OutBreakProject_OutBreakProject_Source_OutBreakProject_OutBreakGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
