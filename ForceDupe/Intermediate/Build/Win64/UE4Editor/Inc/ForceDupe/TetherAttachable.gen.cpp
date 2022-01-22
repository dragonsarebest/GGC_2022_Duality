// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ForceDupe/TetherAttachable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherAttachable() {}
// Cross Module References
	FORCEDUPE_API UClass* Z_Construct_UClass_UTetherAttachable_NoRegister();
	FORCEDUPE_API UClass* Z_Construct_UClass_UTetherAttachable();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ForceDupe();
// End Cross Module References
	void UTetherAttachable::StaticRegisterNativesUTetherAttachable()
	{
	}
	UClass* Z_Construct_UClass_UTetherAttachable_NoRegister()
	{
		return UTetherAttachable::StaticClass();
	}
	struct Z_Construct_UClass_UTetherAttachable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTetherAttachable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ForceDupe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetherAttachable_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TetherAttachable.h" },
		{ "ModuleRelativePath", "TetherAttachable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTetherAttachable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTetherAttachable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTetherAttachable_Statics::ClassParams = {
		&UTetherAttachable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTetherAttachable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTetherAttachable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTetherAttachable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTetherAttachable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTetherAttachable, 976004419);
	template<> FORCEDUPE_API UClass* StaticClass<UTetherAttachable>()
	{
		return UTetherAttachable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTetherAttachable(Z_Construct_UClass_UTetherAttachable, &UTetherAttachable::StaticClass, TEXT("/Script/ForceDupe"), TEXT("UTetherAttachable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTetherAttachable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
