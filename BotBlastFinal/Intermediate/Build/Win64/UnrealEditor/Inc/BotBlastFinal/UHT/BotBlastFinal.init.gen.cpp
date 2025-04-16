// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBotBlastFinal_init() {}
	BOTBLASTFINAL_API UFunction* Z_Construct_UDelegateFunction_BotBlastFinal_FloatStatUpdated__DelegateSignature();
	BOTBLASTFINAL_API UFunction* Z_Construct_UDelegateFunction_BotBlastFinal_IntStatUpdated__DelegateSignature();
	BOTBLASTFINAL_API UFunction* Z_Construct_UDelegateFunction_BotBlastFinal_KeyWalletAction__DelegateSignature();
	BOTBLASTFINAL_API UFunction* Z_Construct_UDelegateFunction_BotBlastFinal_PlayerIsDead__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BotBlastFinal;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BotBlastFinal()
	{
		if (!Z_Registration_Info_UPackage__Script_BotBlastFinal.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BotBlastFinal_FloatStatUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BotBlastFinal_IntStatUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BotBlastFinal_KeyWalletAction__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BotBlastFinal_PlayerIsDead__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BotBlastFinal",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF836648D,
				0xACB62422,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BotBlastFinal.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BotBlastFinal.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BotBlastFinal(Z_Construct_UPackage__Script_BotBlastFinal, TEXT("/Script/BotBlastFinal"), Z_Registration_Info_UPackage__Script_BotBlastFinal, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF836648D, 0xACB62422));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
