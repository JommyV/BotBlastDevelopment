// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BotBlastFinal/TaraController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaraController() {}

// Begin Cross Module References
BOTBLASTFINAL_API UClass* Z_Construct_UClass_ABotBlastHud_NoRegister();
BOTBLASTFINAL_API UClass* Z_Construct_UClass_ATaraCharacter_NoRegister();
BOTBLASTFINAL_API UClass* Z_Construct_UClass_ATaraController();
BOTBLASTFINAL_API UClass* Z_Construct_UClass_ATaraController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_BotBlastFinal();
// End Cross Module References

// Begin Class ATaraController
void ATaraController::StaticRegisterNativesATaraController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATaraController);
UClass* Z_Construct_UClass_ATaraController_NoRegister()
{
	return ATaraController::StaticClass();
}
struct Z_Construct_UClass_ATaraController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TaraController.h" },
		{ "ModuleRelativePath", "TaraController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionMove_MetaData[] = {
		{ "Category", "Player Input|Character Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Input Action to map to movement.\n" },
#endif
		{ "ModuleRelativePath", "TaraController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Input Action to map to movement." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionLook_MetaData[] = {
		{ "Category", "Player Input|Character Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Input Action to map to looking around.\n" },
#endif
		{ "ModuleRelativePath", "TaraController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Input Action to map to looking around." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionJump_MetaData[] = {
		{ "Category", "Player Input|Character Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Input Action to map to jumping.\n" },
#endif
		{ "ModuleRelativePath", "TaraController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Input Action to map to jumping." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionCrouch_MetaData[] = {
		{ "Category", "Player Input|Character Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Input Action to map to crouch.\n" },
#endif
		{ "ModuleRelativePath", "TaraController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Input Action to map to crouch." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionToggleSprint_MetaData[] = {
		{ "Category", "Player Input|Character Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Input Action to map to Sprint.\n" },
#endif
		{ "ModuleRelativePath", "TaraController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Input Action to map to Sprint." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionSatchel_MetaData[] = {
		{ "Category", "Player Input|Character Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Input Action to map to Satchel.\n" },
#endif
		{ "ModuleRelativePath", "TaraController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Input Action to map to Satchel." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionRestartGame_MetaData[] = {
		{ "Category", "Player Input|Game Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Input Action to map to Restart PlayInEditor\n" },
#endif
		{ "ModuleRelativePath", "TaraController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Input Action to map to Restart PlayInEditor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionCycleUI_MetaData[] = {
		{ "Category", "Player Input|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Input Action to map to Restart PlayInEditor\n" },
#endif
		{ "ModuleRelativePath", "TaraController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Input Action to map to Restart PlayInEditor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContent_MetaData[] = {
		{ "Category", "Player Input|Character Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Input Mapping Context to use.\n" },
#endif
		{ "ModuleRelativePath", "TaraController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Input Mapping Context to use." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardAirControl_MetaData[] = {
		{ "Category", "AirMovement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Variables to change how much air control you have on each axis.\n" },
#endif
		{ "ModuleRelativePath", "TaraController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variables to change how much air control you have on each axis." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackwardsAirControl_MetaData[] = {
		{ "Category", "AirMovement" },
		{ "ModuleRelativePath", "TaraController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SideWaysAirControl_MetaData[] = {
		{ "Category", "AirMovement" },
		{ "ModuleRelativePath", "TaraController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnhancedInputComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used to store a reference to the InputComponent cast to an EnhancedInputComponent.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TaraController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to store a reference to the InputComponent cast to an EnhancedInputComponent." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used to store a reference to the pawn we are controlling.\n" },
#endif
		{ "ModuleRelativePath", "TaraController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to store a reference to the pawn we are controlling." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerHud_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// USed to store a reference to the HUD we want to change.\n" },
#endif
		{ "ModuleRelativePath", "TaraController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "USed to store a reference to the HUD we want to change." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionMove;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionLook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionJump;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionCrouch;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionToggleSprint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionSatchel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionRestartGame;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionCycleUI;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardAirControl;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BackwardsAirControl;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SideWaysAirControl;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnhancedInputComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerHud;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATaraController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATaraController_Statics::NewProp_ActionMove = { "ActionMove", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATaraController, ActionMove), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionMove_MetaData), NewProp_ActionMove_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATaraController_Statics::NewProp_ActionLook = { "ActionLook", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATaraController, ActionLook), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionLook_MetaData), NewProp_ActionLook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATaraController_Statics::NewProp_ActionJump = { "ActionJump", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATaraController, ActionJump), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionJump_MetaData), NewProp_ActionJump_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATaraController_Statics::NewProp_ActionCrouch = { "ActionCrouch", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATaraController, ActionCrouch), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionCrouch_MetaData), NewProp_ActionCrouch_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATaraController_Statics::NewProp_ActionToggleSprint = { "ActionToggleSprint", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATaraController, ActionToggleSprint), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionToggleSprint_MetaData), NewProp_ActionToggleSprint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATaraController_Statics::NewProp_ActionSatchel = { "ActionSatchel", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATaraController, ActionSatchel), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionSatchel_MetaData), NewProp_ActionSatchel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATaraController_Statics::NewProp_ActionRestartGame = { "ActionRestartGame", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATaraController, ActionRestartGame), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionRestartGame_MetaData), NewProp_ActionRestartGame_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATaraController_Statics::NewProp_ActionCycleUI = { "ActionCycleUI", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATaraController, ActionCycleUI), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionCycleUI_MetaData), NewProp_ActionCycleUI_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATaraController_Statics::NewProp_InputMappingContent = { "InputMappingContent", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATaraController, InputMappingContent), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContent_MetaData), NewProp_InputMappingContent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATaraController_Statics::NewProp_ForwardAirControl = { "ForwardAirControl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATaraController, ForwardAirControl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardAirControl_MetaData), NewProp_ForwardAirControl_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATaraController_Statics::NewProp_BackwardsAirControl = { "BackwardsAirControl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATaraController, BackwardsAirControl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackwardsAirControl_MetaData), NewProp_BackwardsAirControl_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATaraController_Statics::NewProp_SideWaysAirControl = { "SideWaysAirControl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATaraController, SideWaysAirControl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SideWaysAirControl_MetaData), NewProp_SideWaysAirControl_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATaraController_Statics::NewProp_EnhancedInputComponent = { "EnhancedInputComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATaraController, EnhancedInputComponent), Z_Construct_UClass_UEnhancedInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnhancedInputComponent_MetaData), NewProp_EnhancedInputComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATaraController_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATaraController, PlayerCharacter), Z_Construct_UClass_ATaraCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacter_MetaData), NewProp_PlayerCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATaraController_Statics::NewProp_PlayerHud = { "PlayerHud", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATaraController, PlayerHud), Z_Construct_UClass_ABotBlastHud_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerHud_MetaData), NewProp_PlayerHud_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATaraController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATaraController_Statics::NewProp_ActionMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATaraController_Statics::NewProp_ActionLook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATaraController_Statics::NewProp_ActionJump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATaraController_Statics::NewProp_ActionCrouch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATaraController_Statics::NewProp_ActionToggleSprint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATaraController_Statics::NewProp_ActionSatchel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATaraController_Statics::NewProp_ActionRestartGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATaraController_Statics::NewProp_ActionCycleUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATaraController_Statics::NewProp_InputMappingContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATaraController_Statics::NewProp_ForwardAirControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATaraController_Statics::NewProp_BackwardsAirControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATaraController_Statics::NewProp_SideWaysAirControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATaraController_Statics::NewProp_EnhancedInputComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATaraController_Statics::NewProp_PlayerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATaraController_Statics::NewProp_PlayerHud,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATaraController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATaraController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_BotBlastFinal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATaraController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATaraController_Statics::ClassParams = {
	&ATaraController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATaraController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATaraController_Statics::PropPointers),
	0,
	0x008002A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATaraController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATaraController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATaraController()
{
	if (!Z_Registration_Info_UClass_ATaraController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATaraController.OuterSingleton, Z_Construct_UClass_ATaraController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATaraController.OuterSingleton;
}
template<> BOTBLASTFINAL_API UClass* StaticClass<ATaraController>()
{
	return ATaraController::StaticClass();
}
ATaraController::ATaraController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATaraController);
ATaraController::~ATaraController() {}
// End Class ATaraController

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_TaraController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATaraController, ATaraController::StaticClass, TEXT("ATaraController"), &Z_Registration_Info_UClass_ATaraController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATaraController), 2832416820U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_TaraController_h_3636286969(TEXT("/Script/BotBlastFinal"),
	Z_CompiledInDeferFile_FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_TaraController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_TaraController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
