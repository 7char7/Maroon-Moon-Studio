// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SheepyStudios/Test_Script2.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTest_Script2() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
SHEEPYSTUDIOS_API UClass* Z_Construct_UClass_ATest_Script2();
SHEEPYSTUDIOS_API UClass* Z_Construct_UClass_ATest_Script2_NoRegister();
UPackage* Z_Construct_UPackage__Script_SheepyStudios();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATest_Script2 ************************************************************
void ATest_Script2::StaticRegisterNativesATest_Script2()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATest_Script2;
UClass* ATest_Script2::GetPrivateStaticClass()
{
	using TClass = ATest_Script2;
	if (!Z_Registration_Info_UClass_ATest_Script2.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Test_Script2"),
			Z_Registration_Info_UClass_ATest_Script2.InnerSingleton,
			StaticRegisterNativesATest_Script2,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ATest_Script2.InnerSingleton;
}
UClass* Z_Construct_UClass_ATest_Script2_NoRegister()
{
	return ATest_Script2::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATest_Script2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Test_Script2.h" },
		{ "ModuleRelativePath", "Test_Script2.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATest_Script2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ATest_Script2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SheepyStudios,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATest_Script2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATest_Script2_Statics::ClassParams = {
	&ATest_Script2::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATest_Script2_Statics::Class_MetaDataParams), Z_Construct_UClass_ATest_Script2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATest_Script2()
{
	if (!Z_Registration_Info_UClass_ATest_Script2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATest_Script2.OuterSingleton, Z_Construct_UClass_ATest_Script2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATest_Script2.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATest_Script2);
ATest_Script2::~ATest_Script2() {}
// ********** End Class ATest_Script2 **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_rappa_Documents_Github_Sheepy_Studios_SheepyStudios_Source_SheepyStudios_Test_Script2_h__Script_SheepyStudios_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATest_Script2, ATest_Script2::StaticClass, TEXT("ATest_Script2"), &Z_Registration_Info_UClass_ATest_Script2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATest_Script2), 2558739994U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rappa_Documents_Github_Sheepy_Studios_SheepyStudios_Source_SheepyStudios_Test_Script2_h__Script_SheepyStudios_3561673419(TEXT("/Script/SheepyStudios"),
	Z_CompiledInDeferFile_FID_Users_rappa_Documents_Github_Sheepy_Studios_SheepyStudios_Source_SheepyStudios_Test_Script2_h__Script_SheepyStudios_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rappa_Documents_Github_Sheepy_Studios_SheepyStudios_Source_SheepyStudios_Test_Script2_h__Script_SheepyStudios_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
