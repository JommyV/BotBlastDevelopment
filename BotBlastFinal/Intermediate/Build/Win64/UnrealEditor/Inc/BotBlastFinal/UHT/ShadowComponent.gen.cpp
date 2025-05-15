// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BotBlastFinal/ShadowComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShadowComponent() {}

// Begin Cross Module References
BOTBLASTFINAL_API UClass* Z_Construct_UClass_UShadowComponent();
BOTBLASTFINAL_API UClass* Z_Construct_UClass_UShadowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
UPackage* Z_Construct_UPackage__Script_BotBlastFinal();
// End Cross Module References

// Begin Class UShadowComponent
void UShadowComponent::StaticRegisterNativesUShadowComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShadowComponent);
UClass* Z_Construct_UClass_UShadowComponent_NoRegister()
{
	return UShadowComponent::StaticClass();
}
struct Z_Construct_UClass_UShadowComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ShadowComponent.h" },
		{ "ModuleRelativePath", "ShadowComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShadowComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UShadowComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BotBlastFinal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UShadowComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UShadowComponent_Statics::ClassParams = {
	&UShadowComponent::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UShadowComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UShadowComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UShadowComponent()
{
	if (!Z_Registration_Info_UClass_UShadowComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShadowComponent.OuterSingleton, Z_Construct_UClass_UShadowComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UShadowComponent.OuterSingleton;
}
template<> BOTBLASTFINAL_API UClass* StaticClass<UShadowComponent>()
{
	return UShadowComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UShadowComponent);
UShadowComponent::~UShadowComponent() {}
// End Class UShadowComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_ShadowComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UShadowComponent, UShadowComponent::StaticClass, TEXT("UShadowComponent"), &Z_Registration_Info_UClass_UShadowComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShadowComponent), 3330798670U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_ShadowComponent_h_420074607(TEXT("/Script/BotBlastFinal"),
	Z_CompiledInDeferFile_FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_ShadowComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_ShadowComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
