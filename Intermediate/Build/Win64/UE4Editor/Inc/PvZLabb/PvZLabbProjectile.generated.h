// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PVZLABB_PvZLabbProjectile_generated_h
#error "PvZLabbProjectile.generated.h already included, missing '#pragma once' in PvZLabbProjectile.h"
#endif
#define PVZLABB_PvZLabbProjectile_generated_h

#define PvZLabb_Source_PvZLabb_PvZLabbProjectile_h_15_SPARSE_DATA
#define PvZLabb_Source_PvZLabb_PvZLabbProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PvZLabb_Source_PvZLabb_PvZLabbProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define PvZLabb_Source_PvZLabb_PvZLabbProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPvZLabbProjectile(); \
	friend struct Z_Construct_UClass_APvZLabbProjectile_Statics; \
public: \
	DECLARE_CLASS(APvZLabbProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PvZLabb"), NO_API) \
	DECLARE_SERIALIZER(APvZLabbProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PvZLabb_Source_PvZLabb_PvZLabbProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPvZLabbProjectile(); \
	friend struct Z_Construct_UClass_APvZLabbProjectile_Statics; \
public: \
	DECLARE_CLASS(APvZLabbProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PvZLabb"), NO_API) \
	DECLARE_SERIALIZER(APvZLabbProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define PvZLabb_Source_PvZLabb_PvZLabbProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APvZLabbProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APvZLabbProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APvZLabbProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APvZLabbProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APvZLabbProjectile(APvZLabbProjectile&&); \
	NO_API APvZLabbProjectile(const APvZLabbProjectile&); \
public:


#define PvZLabb_Source_PvZLabb_PvZLabbProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APvZLabbProjectile(APvZLabbProjectile&&); \
	NO_API APvZLabbProjectile(const APvZLabbProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APvZLabbProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APvZLabbProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APvZLabbProjectile)


#define PvZLabb_Source_PvZLabb_PvZLabbProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileMesh() { return STRUCT_OFFSET(APvZLabbProjectile, ProjectileMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(APvZLabbProjectile, ProjectileMovement); }


#define PvZLabb_Source_PvZLabb_PvZLabbProjectile_h_12_PROLOG
#define PvZLabb_Source_PvZLabb_PvZLabbProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PvZLabb_Source_PvZLabb_PvZLabbProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	PvZLabb_Source_PvZLabb_PvZLabbProjectile_h_15_SPARSE_DATA \
	PvZLabb_Source_PvZLabb_PvZLabbProjectile_h_15_RPC_WRAPPERS \
	PvZLabb_Source_PvZLabb_PvZLabbProjectile_h_15_INCLASS \
	PvZLabb_Source_PvZLabb_PvZLabbProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PvZLabb_Source_PvZLabb_PvZLabbProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PvZLabb_Source_PvZLabb_PvZLabbProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	PvZLabb_Source_PvZLabb_PvZLabbProjectile_h_15_SPARSE_DATA \
	PvZLabb_Source_PvZLabb_PvZLabbProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PvZLabb_Source_PvZLabb_PvZLabbProjectile_h_15_INCLASS_NO_PURE_DECLS \
	PvZLabb_Source_PvZLabb_PvZLabbProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PVZLABB_API UClass* StaticClass<class APvZLabbProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PvZLabb_Source_PvZLabb_PvZLabbProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
