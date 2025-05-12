// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BotBlastHud.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOTBLASTFINAL_BotBlastHud_generated_h
#error "BotBlastHud.generated.h already included, missing '#pragma once' in BotBlastHud.h"
#endif
#define BOTBLASTFINAL_BotBlastHud_generated_h

#define FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_BotBlastHud_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCycleToNextViewMode);


#define FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_BotBlastHud_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABotBlastHud(); \
	friend struct Z_Construct_UClass_ABotBlastHud_Statics; \
public: \
	DECLARE_CLASS(ABotBlastHud, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/BotBlastFinal"), NO_API) \
	DECLARE_SERIALIZER(ABotBlastHud)


#define FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_BotBlastHud_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABotBlastHud(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABotBlastHud(ABotBlastHud&&); \
	ABotBlastHud(const ABotBlastHud&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABotBlastHud); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABotBlastHud); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABotBlastHud) \
	NO_API virtual ~ABotBlastHud();


#define FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_BotBlastHud_h_41_PROLOG
#define FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_BotBlastHud_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_BotBlastHud_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_BotBlastHud_h_44_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_BotBlastHud_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOTBLASTFINAL_API UClass* StaticClass<class ABotBlastHud>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_BotBlastHud_h


#define FOREACH_ENUM_EHUDVIEWMODE(op) \
	op(EHudViewMode::CleanAndPristine) \
	op(EHudViewMode::Minimal) \
	op(EHudViewMode::Moderate) \
	op(EHudViewMode::SensoryOverload) 

enum class EHudViewMode : uint8;
template<> struct TIsUEnumClass<EHudViewMode> { enum { Value = true }; };
template<> BOTBLASTFINAL_API UEnum* StaticEnum<EHudViewMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
