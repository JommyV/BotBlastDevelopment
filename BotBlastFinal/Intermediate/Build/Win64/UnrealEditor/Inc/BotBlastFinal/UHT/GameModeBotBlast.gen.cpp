// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BotBlastFinal/GameModeBotBlast.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameModeBotBlast() {}

// Begin Cross Module References
BOTBLASTFINAL_API UClass* Z_Construct_UClass_AGameModeBotBlast();
BOTBLASTFINAL_API UClass* Z_Construct_UClass_AGameModeBotBlast_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BotBlastFinal();
// End Cross Module References

// Begin Class AGameModeBotBlast
void AGameModeBotBlast::StaticRegisterNativesAGameModeBotBlast()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameModeBotBlast);
UClass* Z_Construct_UClass_AGameModeBotBlast_NoRegister()
{
	return AGameModeBotBlast::StaticClass();
}
struct Z_Construct_UClass_AGameModeBotBlast_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModeBotBlast.h" },
		{ "ModuleRelativePath", "GameModeBotBlast.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameModeBotBlast>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGameModeBotBlast_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BotBlastFinal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeBotBlast_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameModeBotBlast_Statics::ClassParams = {
	&AGameModeBotBlast::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeBotBlast_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameModeBotBlast_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameModeBotBlast()
{
	if (!Z_Registration_Info_UClass_AGameModeBotBlast.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameModeBotBlast.OuterSingleton, Z_Construct_UClass_AGameModeBotBlast_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameModeBotBlast.OuterSingleton;
}
template<> BOTBLASTFINAL_API UClass* StaticClass<AGameModeBotBlast>()
{
	return AGameModeBotBlast::StaticClass();
}
AGameModeBotBlast::AGameModeBotBlast(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameModeBotBlast);
AGameModeBotBlast::~AGameModeBotBlast() {}
// End Class AGameModeBotBlast

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_GameModeBotBlast_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameModeBotBlast, AGameModeBotBlast::StaticClass, TEXT("AGameModeBotBlast"), &Z_Registration_Info_UClass_AGameModeBotBlast, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameModeBotBlast), 4241437580U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_GameModeBotBlast_h_2844691539(TEXT("/Script/BotBlastFinal"),
	Z_CompiledInDeferFile_FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_GameModeBotBlast_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_GameModeBotBlast_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
