// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TaraCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EPlayerKeyAction : uint8;
#ifdef BOTBLASTFINAL_TaraCharacter_generated_h
#error "TaraCharacter.generated.h already included, missing '#pragma once' in TaraCharacter.h"
#endif
#define BOTBLASTFINAL_TaraCharacter_generated_h

#define FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_TaraCharacter_h_14_DELEGATE \
BOTBLASTFINAL_API void FIntStatUpdated_DelegateWrapper(const FMulticastScriptDelegate& IntStatUpdated, int32 OldValue, int32 NewValue, int32 MaxValue);


#define FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_TaraCharacter_h_17_DELEGATE \
BOTBLASTFINAL_API void FPlayerIsDead_DelegateWrapper(const FMulticastScriptDelegate& PlayerIsDead);


#define FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_TaraCharacter_h_23_DELEGATE \
BOTBLASTFINAL_API void FFloatStatUpdated_DelegateWrapper(const FMulticastScriptDelegate& FloatStatUpdated, float OldValue, float NewValue, float MaxValue);


#define FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_TaraCharacter_h_41_DELEGATE \
BOTBLASTFINAL_API void FKeyWalletAction_DelegateWrapper(const FMulticastScriptDelegate& KeyWalletAction, const FString& KeyString, EPlayerKeyAction KeyAction, bool IsSuccess);


#define FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_TaraCharacter_h_170_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsPlayerCarryingKey); \
	DECLARE_FUNCTION(execRemoveKey); \
	DECLARE_FUNCTION(execAddKey); \
	DECLARE_FUNCTION(execThrowSatchel); \
	DECLARE_FUNCTION(execGetSatchelRechargeRate); \
	DECLARE_FUNCTION(execGetCurrentSatchels); \
	DECLARE_FUNCTION(execGetMaxSatchels);


#define FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_TaraCharacter_h_170_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATaraCharacter(); \
	friend struct Z_Construct_UClass_ATaraCharacter_Statics; \
public: \
	DECLARE_CLASS(ATaraCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BotBlastFinal"), NO_API) \
	DECLARE_SERIALIZER(ATaraCharacter)


#define FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_TaraCharacter_h_170_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATaraCharacter(ATaraCharacter&&); \
	ATaraCharacter(const ATaraCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATaraCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATaraCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATaraCharacter) \
	NO_API virtual ~ATaraCharacter();


#define FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_TaraCharacter_h_43_PROLOG
#define FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_TaraCharacter_h_170_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_TaraCharacter_h_170_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_TaraCharacter_h_170_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_TaraCharacter_h_170_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOTBLASTFINAL_API UClass* StaticClass<class ATaraCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_TaraCharacter_h


#define FOREACH_ENUM_EPLAYERKEYACTION(op) \
	op(EPlayerKeyAction::AddKey) \
	op(EPlayerKeyAction::RemoveKey) \
	op(EPlayerKeyAction::TestKey) 

enum class EPlayerKeyAction : uint8;
template<> struct TIsUEnumClass<EPlayerKeyAction> { enum { Value = true }; };
template<> BOTBLASTFINAL_API UEnum* StaticEnum<EPlayerKeyAction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
