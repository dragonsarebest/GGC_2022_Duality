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
#ifdef FORCEDUPE_ForceDupeProjectile_generated_h
#error "ForceDupeProjectile.generated.h already included, missing '#pragma once' in ForceDupeProjectile.h"
#endif
#define FORCEDUPE_ForceDupeProjectile_generated_h

#define ForceDupe_Source_ForceDupe_ForceDupeProjectile_h_12_SPARSE_DATA
#define ForceDupe_Source_ForceDupe_ForceDupeProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define ForceDupe_Source_ForceDupe_ForceDupeProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define ForceDupe_Source_ForceDupe_ForceDupeProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAForceDupeProjectile(); \
	friend struct Z_Construct_UClass_AForceDupeProjectile_Statics; \
public: \
	DECLARE_CLASS(AForceDupeProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ForceDupe"), NO_API) \
	DECLARE_SERIALIZER(AForceDupeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ForceDupe_Source_ForceDupe_ForceDupeProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAForceDupeProjectile(); \
	friend struct Z_Construct_UClass_AForceDupeProjectile_Statics; \
public: \
	DECLARE_CLASS(AForceDupeProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ForceDupe"), NO_API) \
	DECLARE_SERIALIZER(AForceDupeProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ForceDupe_Source_ForceDupe_ForceDupeProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AForceDupeProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AForceDupeProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AForceDupeProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AForceDupeProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AForceDupeProjectile(AForceDupeProjectile&&); \
	NO_API AForceDupeProjectile(const AForceDupeProjectile&); \
public:


#define ForceDupe_Source_ForceDupe_ForceDupeProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AForceDupeProjectile(AForceDupeProjectile&&); \
	NO_API AForceDupeProjectile(const AForceDupeProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AForceDupeProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AForceDupeProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AForceDupeProjectile)


#define ForceDupe_Source_ForceDupe_ForceDupeProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AForceDupeProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AForceDupeProjectile, ProjectileMovement); }


#define ForceDupe_Source_ForceDupe_ForceDupeProjectile_h_9_PROLOG
#define ForceDupe_Source_ForceDupe_ForceDupeProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ForceDupe_Source_ForceDupe_ForceDupeProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	ForceDupe_Source_ForceDupe_ForceDupeProjectile_h_12_SPARSE_DATA \
	ForceDupe_Source_ForceDupe_ForceDupeProjectile_h_12_RPC_WRAPPERS \
	ForceDupe_Source_ForceDupe_ForceDupeProjectile_h_12_INCLASS \
	ForceDupe_Source_ForceDupe_ForceDupeProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ForceDupe_Source_ForceDupe_ForceDupeProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ForceDupe_Source_ForceDupe_ForceDupeProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	ForceDupe_Source_ForceDupe_ForceDupeProjectile_h_12_SPARSE_DATA \
	ForceDupe_Source_ForceDupe_ForceDupeProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ForceDupe_Source_ForceDupe_ForceDupeProjectile_h_12_INCLASS_NO_PURE_DECLS \
	ForceDupe_Source_ForceDupe_ForceDupeProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FORCEDUPE_API UClass* StaticClass<class AForceDupeProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ForceDupe_Source_ForceDupe_ForceDupeProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
