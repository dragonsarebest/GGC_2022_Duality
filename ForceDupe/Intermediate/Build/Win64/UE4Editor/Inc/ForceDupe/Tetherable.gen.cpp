// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ForceDupe/Tetherable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherable() {}
// Cross Module References
	FORCEDUPE_API UClass* Z_Construct_UClass_ATetherable_NoRegister();
	FORCEDUPE_API UClass* Z_Construct_UClass_ATetherable();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ForceDupe();
// End Cross Module References
	void ATetherable::StaticRegisterNativesATetherable()
	{
	}
	UClass* Z_Construct_UClass_ATetherable_NoRegister()
	{
		return ATetherable::StaticClass();
	}
	struct Z_Construct_UClass_ATetherable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATetherable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ForceDupe,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tetherable.h" },
		{ "ModuleRelativePath", "Tetherable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATetherable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATetherable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATetherable_Statics::ClassParams = {
		&ATetherable::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATetherable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATetherable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATetherable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATetherable, 1543356480);
	template<> FORCEDUPE_API UClass* StaticClass<ATetherable>()
	{
		return ATetherable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATetherable(Z_Construct_UClass_ATetherable, &ATetherable::StaticClass, TEXT("/Script/ForceDupe"), TEXT("ATetherable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATetherable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
