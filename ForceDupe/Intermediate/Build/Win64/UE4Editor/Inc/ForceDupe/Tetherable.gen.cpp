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
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_My_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_My_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATetherable_Statics::NewProp_My_Mesh_MetaData[] = {
		{ "Category", "Tetherable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Tetherable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATetherable_Statics::NewProp_My_Mesh = { "My_Mesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATetherable, My_Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATetherable_Statics::NewProp_My_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATetherable_Statics::NewProp_My_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATetherable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATetherable_Statics::NewProp_My_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATetherable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATetherable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATetherable_Statics::ClassParams = {
		&ATetherable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATetherable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATetherable_Statics::PropPointers),
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
	IMPLEMENT_CLASS(ATetherable, 2740170618);
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
