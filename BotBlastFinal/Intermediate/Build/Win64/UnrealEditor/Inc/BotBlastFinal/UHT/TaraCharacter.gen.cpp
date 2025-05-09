// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BotBlastFinal/TaraCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaraCharacter() {}

// Begin Cross Module References
BOTBLASTFINAL_API UClass* Z_Construct_UClass_ATaraCharacter();
BOTBLASTFINAL_API UClass* Z_Construct_UClass_ATaraCharacter_NoRegister();
BOTBLASTFINAL_API UEnum* Z_Construct_UEnum_BotBlastFinal_EPlayerKeyAction();
BOTBLASTFINAL_API UFunction* Z_Construct_UDelegateFunction_BotBlastFinal_FloatStatUpdated__DelegateSignature();
BOTBLASTFINAL_API UFunction* Z_Construct_UDelegateFunction_BotBlastFinal_IntStatUpdated__DelegateSignature();
BOTBLASTFINAL_API UFunction* Z_Construct_UDelegateFunction_BotBlastFinal_KeyWalletAction__DelegateSignature();
BOTBLASTFINAL_API UFunction* Z_Construct_UDelegateFunction_BotBlastFinal_PlayerIsDead__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BotBlastFinal();
// End Cross Module References

// Begin Delegate FIntStatUpdated
struct Z_Construct_UDelegateFunction_BotBlastFinal_IntStatUpdated__DelegateSignature_Statics
{
	struct _Script_BotBlastFinal_eventIntStatUpdated_Parms
	{
		int32 OldValue;
		int32 NewValue;
		int32 MaxValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TaraCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_BotBlastFinal_IntStatUpdated__DelegateSignature_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BotBlastFinal_eventIntStatUpdated_Parms, OldValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_BotBlastFinal_IntStatUpdated__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BotBlastFinal_eventIntStatUpdated_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_BotBlastFinal_IntStatUpdated__DelegateSignature_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BotBlastFinal_eventIntStatUpdated_Parms, MaxValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BotBlastFinal_IntStatUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BotBlastFinal_IntStatUpdated__DelegateSignature_Statics::NewProp_OldValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BotBlastFinal_IntStatUpdated__DelegateSignature_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BotBlastFinal_IntStatUpdated__DelegateSignature_Statics::NewProp_MaxValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BotBlastFinal_IntStatUpdated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BotBlastFinal_IntStatUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BotBlastFinal, nullptr, "IntStatUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BotBlastFinal_IntStatUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BotBlastFinal_IntStatUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BotBlastFinal_IntStatUpdated__DelegateSignature_Statics::_Script_BotBlastFinal_eventIntStatUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BotBlastFinal_IntStatUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BotBlastFinal_IntStatUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BotBlastFinal_IntStatUpdated__DelegateSignature_Statics::_Script_BotBlastFinal_eventIntStatUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BotBlastFinal_IntStatUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BotBlastFinal_IntStatUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FIntStatUpdated_DelegateWrapper(const FMulticastScriptDelegate& IntStatUpdated, int32 OldValue, int32 NewValue, int32 MaxValue)
{
	struct _Script_BotBlastFinal_eventIntStatUpdated_Parms
	{
		int32 OldValue;
		int32 NewValue;
		int32 MaxValue;
	};
	_Script_BotBlastFinal_eventIntStatUpdated_Parms Parms;
	Parms.OldValue=OldValue;
	Parms.NewValue=NewValue;
	Parms.MaxValue=MaxValue;
	IntStatUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FIntStatUpdated

// Begin Delegate FPlayerIsDead
struct Z_Construct_UDelegateFunction_BotBlastFinal_PlayerIsDead__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate for when the player dies\n" },
#endif
		{ "ModuleRelativePath", "TaraCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate for when the player dies" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BotBlastFinal_PlayerIsDead__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BotBlastFinal, nullptr, "PlayerIsDead__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BotBlastFinal_PlayerIsDead__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BotBlastFinal_PlayerIsDead__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_BotBlastFinal_PlayerIsDead__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BotBlastFinal_PlayerIsDead__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPlayerIsDead_DelegateWrapper(const FMulticastScriptDelegate& PlayerIsDead)
{
	PlayerIsDead.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FPlayerIsDead

// Begin Delegate FFloatStatUpdated
struct Z_Construct_UDelegateFunction_BotBlastFinal_FloatStatUpdated__DelegateSignature_Statics
{
	struct _Script_BotBlastFinal_eventFloatStatUpdated_Parms
	{
		float OldValue;
		float NewValue;
		float MaxValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate for when stats based on floats are changed.\n" },
#endif
		{ "ModuleRelativePath", "TaraCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate for when stats based on floats are changed." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_BotBlastFinal_FloatStatUpdated__DelegateSignature_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BotBlastFinal_eventFloatStatUpdated_Parms, OldValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_BotBlastFinal_FloatStatUpdated__DelegateSignature_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BotBlastFinal_eventFloatStatUpdated_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_BotBlastFinal_FloatStatUpdated__DelegateSignature_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BotBlastFinal_eventFloatStatUpdated_Parms, MaxValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BotBlastFinal_FloatStatUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BotBlastFinal_FloatStatUpdated__DelegateSignature_Statics::NewProp_OldValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BotBlastFinal_FloatStatUpdated__DelegateSignature_Statics::NewProp_NewValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BotBlastFinal_FloatStatUpdated__DelegateSignature_Statics::NewProp_MaxValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BotBlastFinal_FloatStatUpdated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BotBlastFinal_FloatStatUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BotBlastFinal, nullptr, "FloatStatUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BotBlastFinal_FloatStatUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BotBlastFinal_FloatStatUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BotBlastFinal_FloatStatUpdated__DelegateSignature_Statics::_Script_BotBlastFinal_eventFloatStatUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BotBlastFinal_FloatStatUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BotBlastFinal_FloatStatUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BotBlastFinal_FloatStatUpdated__DelegateSignature_Statics::_Script_BotBlastFinal_eventFloatStatUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BotBlastFinal_FloatStatUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BotBlastFinal_FloatStatUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FFloatStatUpdated_DelegateWrapper(const FMulticastScriptDelegate& FloatStatUpdated, float OldValue, float NewValue, float MaxValue)
{
	struct _Script_BotBlastFinal_eventFloatStatUpdated_Parms
	{
		float OldValue;
		float NewValue;
		float MaxValue;
	};
	_Script_BotBlastFinal_eventFloatStatUpdated_Parms Parms;
	Parms.OldValue=OldValue;
	Parms.NewValue=NewValue;
	Parms.MaxValue=MaxValue;
	FloatStatUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FFloatStatUpdated

// Begin Enum EPlayerKeyAction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerKeyAction;
static UEnum* EPlayerKeyAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPlayerKeyAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPlayerKeyAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BotBlastFinal_EPlayerKeyAction, (UObject*)Z_Construct_UPackage__Script_BotBlastFinal(), TEXT("EPlayerKeyAction"));
	}
	return Z_Registration_Info_UEnum_EPlayerKeyAction.OuterSingleton;
}
template<> BOTBLASTFINAL_API UEnum* StaticEnum<EPlayerKeyAction>()
{
	return EPlayerKeyAction_StaticEnum();
}
struct Z_Construct_UEnum_BotBlastFinal_EPlayerKeyAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AddKey.Name", "EPlayerKeyAction::AddKey" },
		{ "AddKey.Tooltip", "Attempt to add a key to player's wallet." },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Different actions involving the key wallet.\n" },
#endif
		{ "ModuleRelativePath", "TaraCharacter.h" },
		{ "RemoveKey.Name", "EPlayerKeyAction::RemoveKey" },
		{ "RemoveKey.Tooltip", "Attempt to remove a key from player's wallet." },
		{ "TestKey.Name", "EPlayerKeyAction::TestKey" },
		{ "TestKey.Tooltip", "Check if the player has a specific key." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Different actions involving the key wallet." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPlayerKeyAction::AddKey", (int64)EPlayerKeyAction::AddKey },
		{ "EPlayerKeyAction::RemoveKey", (int64)EPlayerKeyAction::RemoveKey },
		{ "EPlayerKeyAction::TestKey", (int64)EPlayerKeyAction::TestKey },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BotBlastFinal_EPlayerKeyAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BotBlastFinal,
	nullptr,
	"EPlayerKeyAction",
	"EPlayerKeyAction",
	Z_Construct_UEnum_BotBlastFinal_EPlayerKeyAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BotBlastFinal_EPlayerKeyAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BotBlastFinal_EPlayerKeyAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BotBlastFinal_EPlayerKeyAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BotBlastFinal_EPlayerKeyAction()
{
	if (!Z_Registration_Info_UEnum_EPlayerKeyAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerKeyAction.InnerSingleton, Z_Construct_UEnum_BotBlastFinal_EPlayerKeyAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPlayerKeyAction.InnerSingleton;
}
// End Enum EPlayerKeyAction

// Begin Delegate FKeyWalletAction
struct Z_Construct_UDelegateFunction_BotBlastFinal_KeyWalletAction__DelegateSignature_Statics
{
	struct _Script_BotBlastFinal_eventKeyWalletAction_Parms
	{
		FString KeyString;
		EPlayerKeyAction KeyAction;
		bool IsSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate for when actions occur with the player's keys.\n// KeyString is the key involved in the action.\n// KeyAction shows what was attempted.\n// IsSuccess shows if the attempted action happened, or didn't.\n" },
#endif
		{ "ModuleRelativePath", "TaraCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate for when actions occur with the player's keys.\nKeyString is the key involved in the action.\nKeyAction shows what was attempted.\nIsSuccess shows if the attempted action happened, or didn't." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_KeyString;
	static const UECodeGen_Private::FBytePropertyParams NewProp_KeyAction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_KeyAction;
	static void NewProp_IsSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BotBlastFinal_KeyWalletAction__DelegateSignature_Statics::NewProp_KeyString = { "KeyString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BotBlastFinal_eventKeyWalletAction_Parms, KeyString), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_BotBlastFinal_KeyWalletAction__DelegateSignature_Statics::NewProp_KeyAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_BotBlastFinal_KeyWalletAction__DelegateSignature_Statics::NewProp_KeyAction = { "KeyAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BotBlastFinal_eventKeyWalletAction_Parms, KeyAction), Z_Construct_UEnum_BotBlastFinal_EPlayerKeyAction, METADATA_PARAMS(0, nullptr) }; // 3677451385
void Z_Construct_UDelegateFunction_BotBlastFinal_KeyWalletAction__DelegateSignature_Statics::NewProp_IsSuccess_SetBit(void* Obj)
{
	((_Script_BotBlastFinal_eventKeyWalletAction_Parms*)Obj)->IsSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_BotBlastFinal_KeyWalletAction__DelegateSignature_Statics::NewProp_IsSuccess = { "IsSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_BotBlastFinal_eventKeyWalletAction_Parms), &Z_Construct_UDelegateFunction_BotBlastFinal_KeyWalletAction__DelegateSignature_Statics::NewProp_IsSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BotBlastFinal_KeyWalletAction__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BotBlastFinal_KeyWalletAction__DelegateSignature_Statics::NewProp_KeyString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BotBlastFinal_KeyWalletAction__DelegateSignature_Statics::NewProp_KeyAction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BotBlastFinal_KeyWalletAction__DelegateSignature_Statics::NewProp_KeyAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BotBlastFinal_KeyWalletAction__DelegateSignature_Statics::NewProp_IsSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BotBlastFinal_KeyWalletAction__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BotBlastFinal_KeyWalletAction__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BotBlastFinal, nullptr, "KeyWalletAction__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BotBlastFinal_KeyWalletAction__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BotBlastFinal_KeyWalletAction__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BotBlastFinal_KeyWalletAction__DelegateSignature_Statics::_Script_BotBlastFinal_eventKeyWalletAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BotBlastFinal_KeyWalletAction__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BotBlastFinal_KeyWalletAction__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BotBlastFinal_KeyWalletAction__DelegateSignature_Statics::_Script_BotBlastFinal_eventKeyWalletAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BotBlastFinal_KeyWalletAction__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BotBlastFinal_KeyWalletAction__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FKeyWalletAction_DelegateWrapper(const FMulticastScriptDelegate& KeyWalletAction, const FString& KeyString, EPlayerKeyAction KeyAction, bool IsSuccess)
{
	struct _Script_BotBlastFinal_eventKeyWalletAction_Parms
	{
		FString KeyString;
		EPlayerKeyAction KeyAction;
		bool IsSuccess;
	};
	_Script_BotBlastFinal_eventKeyWalletAction_Parms Parms;
	Parms.KeyString=KeyString;
	Parms.KeyAction=KeyAction;
	Parms.IsSuccess=IsSuccess ? true : false;
	KeyWalletAction.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FKeyWalletAction

// Begin Class ATaraCharacter Function AddKey
struct Z_Construct_UFunction_ATaraCharacter_AddKey_Statics
{
	struct TaraCharacter_eventAddKey_Parms
	{
		FString KeytoAdd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player|KeyWallet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Add a key to the wallet if it isn't already in there.\n// If it is already in there, dont do anything.\n" },
#endif
		{ "ModuleRelativePath", "TaraCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a key to the wallet if it isn't already in there.\nIf it is already in there, dont do anything." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_KeytoAdd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ATaraCharacter_AddKey_Statics::NewProp_KeytoAdd = { "KeytoAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaraCharacter_eventAddKey_Parms, KeytoAdd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATaraCharacter_AddKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATaraCharacter_AddKey_Statics::NewProp_KeytoAdd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATaraCharacter_AddKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATaraCharacter_AddKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATaraCharacter, nullptr, "AddKey", nullptr, nullptr, Z_Construct_UFunction_ATaraCharacter_AddKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATaraCharacter_AddKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATaraCharacter_AddKey_Statics::TaraCharacter_eventAddKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATaraCharacter_AddKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATaraCharacter_AddKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATaraCharacter_AddKey_Statics::TaraCharacter_eventAddKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATaraCharacter_AddKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATaraCharacter_AddKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATaraCharacter::execAddKey)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_KeytoAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddKey(Z_Param_KeytoAdd);
	P_NATIVE_END;
}
// End Class ATaraCharacter Function AddKey

// Begin Class ATaraCharacter Function GetCurrentSatchels
struct Z_Construct_UFunction_ATaraCharacter_GetCurrentSatchels_Statics
{
	struct TaraCharacter_eventGetCurrentSatchels_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player|Satchel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get number of satchel player has - Might not be used if only one satchel is available.\n" },
#endif
		{ "ModuleRelativePath", "TaraCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get number of satchel player has - Might not be used if only one satchel is available." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATaraCharacter_GetCurrentSatchels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaraCharacter_eventGetCurrentSatchels_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATaraCharacter_GetCurrentSatchels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATaraCharacter_GetCurrentSatchels_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATaraCharacter_GetCurrentSatchels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATaraCharacter_GetCurrentSatchels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATaraCharacter, nullptr, "GetCurrentSatchels", nullptr, nullptr, Z_Construct_UFunction_ATaraCharacter_GetCurrentSatchels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATaraCharacter_GetCurrentSatchels_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATaraCharacter_GetCurrentSatchels_Statics::TaraCharacter_eventGetCurrentSatchels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATaraCharacter_GetCurrentSatchels_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATaraCharacter_GetCurrentSatchels_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATaraCharacter_GetCurrentSatchels_Statics::TaraCharacter_eventGetCurrentSatchels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATaraCharacter_GetCurrentSatchels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATaraCharacter_GetCurrentSatchels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATaraCharacter::execGetCurrentSatchels)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentSatchels();
	P_NATIVE_END;
}
// End Class ATaraCharacter Function GetCurrentSatchels

// Begin Class ATaraCharacter Function GetMaxSatchels
struct Z_Construct_UFunction_ATaraCharacter_GetMaxSatchels_Statics
{
	struct TaraCharacter_eventGetMaxSatchels_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player|Satchel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Gets max number of satchel available - Might not be used if satchel number is constant.\n" },
#endif
		{ "ModuleRelativePath", "TaraCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets max number of satchel available - Might not be used if satchel number is constant." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATaraCharacter_GetMaxSatchels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaraCharacter_eventGetMaxSatchels_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATaraCharacter_GetMaxSatchels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATaraCharacter_GetMaxSatchels_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATaraCharacter_GetMaxSatchels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATaraCharacter_GetMaxSatchels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATaraCharacter, nullptr, "GetMaxSatchels", nullptr, nullptr, Z_Construct_UFunction_ATaraCharacter_GetMaxSatchels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATaraCharacter_GetMaxSatchels_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATaraCharacter_GetMaxSatchels_Statics::TaraCharacter_eventGetMaxSatchels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATaraCharacter_GetMaxSatchels_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATaraCharacter_GetMaxSatchels_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATaraCharacter_GetMaxSatchels_Statics::TaraCharacter_eventGetMaxSatchels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATaraCharacter_GetMaxSatchels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATaraCharacter_GetMaxSatchels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATaraCharacter::execGetMaxSatchels)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaxSatchels();
	P_NATIVE_END;
}
// End Class ATaraCharacter Function GetMaxSatchels

// Begin Class ATaraCharacter Function GetSatchelRechargeRate
struct Z_Construct_UFunction_ATaraCharacter_GetSatchelRechargeRate_Statics
{
	struct TaraCharacter_eventGetSatchelRechargeRate_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player|Satchel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Gets how much the satchels recover every second, although its a float, satchels are only\n//usable if you have the entire one, this is only to calculate the cooldown and tell the player\n" },
#endif
		{ "ModuleRelativePath", "TaraCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets how much the satchels recover every second, although its a float, satchels are only\nusable if you have the entire one, this is only to calculate the cooldown and tell the player" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATaraCharacter_GetSatchelRechargeRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaraCharacter_eventGetSatchelRechargeRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATaraCharacter_GetSatchelRechargeRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATaraCharacter_GetSatchelRechargeRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATaraCharacter_GetSatchelRechargeRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATaraCharacter_GetSatchelRechargeRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATaraCharacter, nullptr, "GetSatchelRechargeRate", nullptr, nullptr, Z_Construct_UFunction_ATaraCharacter_GetSatchelRechargeRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATaraCharacter_GetSatchelRechargeRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATaraCharacter_GetSatchelRechargeRate_Statics::TaraCharacter_eventGetSatchelRechargeRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATaraCharacter_GetSatchelRechargeRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATaraCharacter_GetSatchelRechargeRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATaraCharacter_GetSatchelRechargeRate_Statics::TaraCharacter_eventGetSatchelRechargeRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATaraCharacter_GetSatchelRechargeRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATaraCharacter_GetSatchelRechargeRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATaraCharacter::execGetSatchelRechargeRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSatchelRechargeRate();
	P_NATIVE_END;
}
// End Class ATaraCharacter Function GetSatchelRechargeRate

// Begin Class ATaraCharacter Function IsPlayerCarryingKey
struct Z_Construct_UFunction_ATaraCharacter_IsPlayerCarryingKey_Statics
{
	struct TaraCharacter_eventIsPlayerCarryingKey_Parms
	{
		FString DesiredKey;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player|KeyWallet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Does the player have a given key?\n// Returns true if they do, and false if they dont.\n" },
#endif
		{ "ModuleRelativePath", "TaraCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Does the player have a given key?\nReturns true if they do, and false if they dont." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DesiredKey;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ATaraCharacter_IsPlayerCarryingKey_Statics::NewProp_DesiredKey = { "DesiredKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaraCharacter_eventIsPlayerCarryingKey_Parms, DesiredKey), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ATaraCharacter_IsPlayerCarryingKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TaraCharacter_eventIsPlayerCarryingKey_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATaraCharacter_IsPlayerCarryingKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TaraCharacter_eventIsPlayerCarryingKey_Parms), &Z_Construct_UFunction_ATaraCharacter_IsPlayerCarryingKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATaraCharacter_IsPlayerCarryingKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATaraCharacter_IsPlayerCarryingKey_Statics::NewProp_DesiredKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATaraCharacter_IsPlayerCarryingKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATaraCharacter_IsPlayerCarryingKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATaraCharacter_IsPlayerCarryingKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATaraCharacter, nullptr, "IsPlayerCarryingKey", nullptr, nullptr, Z_Construct_UFunction_ATaraCharacter_IsPlayerCarryingKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATaraCharacter_IsPlayerCarryingKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATaraCharacter_IsPlayerCarryingKey_Statics::TaraCharacter_eventIsPlayerCarryingKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATaraCharacter_IsPlayerCarryingKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATaraCharacter_IsPlayerCarryingKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATaraCharacter_IsPlayerCarryingKey_Statics::TaraCharacter_eventIsPlayerCarryingKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATaraCharacter_IsPlayerCarryingKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATaraCharacter_IsPlayerCarryingKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATaraCharacter::execIsPlayerCarryingKey)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DesiredKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlayerCarryingKey(Z_Param_DesiredKey);
	P_NATIVE_END;
}
// End Class ATaraCharacter Function IsPlayerCarryingKey

// Begin Class ATaraCharacter Function RemoveKey
struct Z_Construct_UFunction_ATaraCharacter_RemoveKey_Statics
{
	struct TaraCharacter_eventRemoveKey_Parms
	{
		FString KeytoRemove;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player|KeyWallet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Remove a key (do we even need to do that in our game?)\n// If the key isn't in the wallet, we do nothing.\n" },
#endif
		{ "ModuleRelativePath", "TaraCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove a key (do we even need to do that in our game?)\nIf the key isn't in the wallet, we do nothing." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_KeytoRemove;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ATaraCharacter_RemoveKey_Statics::NewProp_KeytoRemove = { "KeytoRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TaraCharacter_eventRemoveKey_Parms, KeytoRemove), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATaraCharacter_RemoveKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATaraCharacter_RemoveKey_Statics::NewProp_KeytoRemove,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATaraCharacter_RemoveKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATaraCharacter_RemoveKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATaraCharacter, nullptr, "RemoveKey", nullptr, nullptr, Z_Construct_UFunction_ATaraCharacter_RemoveKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATaraCharacter_RemoveKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATaraCharacter_RemoveKey_Statics::TaraCharacter_eventRemoveKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATaraCharacter_RemoveKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATaraCharacter_RemoveKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATaraCharacter_RemoveKey_Statics::TaraCharacter_eventRemoveKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATaraCharacter_RemoveKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATaraCharacter_RemoveKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATaraCharacter::execRemoveKey)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_KeytoRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveKey(Z_Param_KeytoRemove);
	P_NATIVE_END;
}
// End Class ATaraCharacter Function RemoveKey

// Begin Class ATaraCharacter Function ThrowSatchel
struct Z_Construct_UFunction_ATaraCharacter_ThrowSatchel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player|Satchel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Throws Satchel\n" },
#endif
		{ "ModuleRelativePath", "TaraCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Throws Satchel" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATaraCharacter_ThrowSatchel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATaraCharacter, nullptr, "ThrowSatchel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATaraCharacter_ThrowSatchel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATaraCharacter_ThrowSatchel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATaraCharacter_ThrowSatchel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATaraCharacter_ThrowSatchel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATaraCharacter::execThrowSatchel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ThrowSatchel();
	P_NATIVE_END;
}
// End Class ATaraCharacter Function ThrowSatchel

// Begin Class ATaraCharacter
void ATaraCharacter::StaticRegisterNativesATaraCharacter()
{
	UClass* Class = ATaraCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddKey", &ATaraCharacter::execAddKey },
		{ "GetCurrentSatchels", &ATaraCharacter::execGetCurrentSatchels },
		{ "GetMaxSatchels", &ATaraCharacter::execGetMaxSatchels },
		{ "GetSatchelRechargeRate", &ATaraCharacter::execGetSatchelRechargeRate },
		{ "IsPlayerCarryingKey", &ATaraCharacter::execIsPlayerCarryingKey },
		{ "RemoveKey", &ATaraCharacter::execRemoveKey },
		{ "ThrowSatchel", &ATaraCharacter::execThrowSatchel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATaraCharacter);
UClass* Z_Construct_UClass_ATaraCharacter_NoRegister()
{
	return ATaraCharacter::StaticClass();
}
struct Z_Construct_UClass_ATaraCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TaraCharacter.h" },
		{ "ModuleRelativePath", "TaraCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "TaraCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TaraCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "TaraCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TaraCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "TaraCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TaraCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SatchelThrown_MetaData[] = {
		{ "Category", "Player|Satchel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Triggered when the player dies.\n" },
#endif
		{ "ModuleRelativePath", "TaraCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Triggered when the player dies." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSatchelCountChanged_MetaData[] = {
		{ "Category", "Player|Satchel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Triggered when something happens with the player's key wallet.\n" },
#endif
		{ "ModuleRelativePath", "TaraCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Triggered when something happens with the player's key wallet." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnKeyWalletAction_MetaData[] = {
		{ "Category", "Player|KeyWallet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Triggered when something happens with the player's key wallet.\n" },
#endif
		{ "ModuleRelativePath", "TaraCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Triggered when something happens with the player's key wallet." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAttached_MetaData[] = {
		{ "Category", "TaraCharacter" },
		{ "ModuleRelativePath", "TaraCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWallRunning_MetaData[] = {
		{ "Category", "TaraCharacter" },
		{ "ModuleRelativePath", "TaraCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SatchelRechargeRate_MetaData[] = {
		{ "Category", "Player|Satchel" },
		{ "ModuleRelativePath", "TaraCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveSatchels_MetaData[] = {
		{ "Category", "TaraCharacter" },
		{ "ModuleRelativePath", "TaraCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSatchels_MetaData[] = {
		{ "Category", "TaraCharacter" },
		{ "ModuleRelativePath", "TaraCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSatchels_MetaData[] = {
		{ "Category", "Player|Satchel" },
		{ "ModuleRelativePath", "TaraCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_SatchelThrown;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSatchelCountChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnKeyWalletAction;
	static void NewProp_bIsAttached_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAttached;
	static void NewProp_bIsWallRunning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWallRunning;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SatchelRechargeRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveSatchels;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentSatchels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSatchels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATaraCharacter_AddKey, "AddKey" }, // 4237726308
		{ &Z_Construct_UFunction_ATaraCharacter_GetCurrentSatchels, "GetCurrentSatchels" }, // 3237286982
		{ &Z_Construct_UFunction_ATaraCharacter_GetMaxSatchels, "GetMaxSatchels" }, // 1709898494
		{ &Z_Construct_UFunction_ATaraCharacter_GetSatchelRechargeRate, "GetSatchelRechargeRate" }, // 551314260
		{ &Z_Construct_UFunction_ATaraCharacter_IsPlayerCarryingKey, "IsPlayerCarryingKey" }, // 851387898
		{ &Z_Construct_UFunction_ATaraCharacter_RemoveKey, "RemoveKey" }, // 1821947775
		{ &Z_Construct_UFunction_ATaraCharacter_ThrowSatchel, "ThrowSatchel" }, // 3484997733
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATaraCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATaraCharacter_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATaraCharacter, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATaraCharacter_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x002008000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATaraCharacter, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATaraCharacter_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATaraCharacter, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATaraCharacter_Statics::NewProp_SatchelThrown = { "SatchelThrown", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATaraCharacter, SatchelThrown), Z_Construct_UDelegateFunction_BotBlastFinal_IntStatUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SatchelThrown_MetaData), NewProp_SatchelThrown_MetaData) }; // 3804676975
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATaraCharacter_Statics::NewProp_OnSatchelCountChanged = { "OnSatchelCountChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATaraCharacter, OnSatchelCountChanged), Z_Construct_UDelegateFunction_BotBlastFinal_FloatStatUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSatchelCountChanged_MetaData), NewProp_OnSatchelCountChanged_MetaData) }; // 3598338825
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATaraCharacter_Statics::NewProp_OnKeyWalletAction = { "OnKeyWalletAction", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATaraCharacter, OnKeyWalletAction), Z_Construct_UDelegateFunction_BotBlastFinal_KeyWalletAction__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnKeyWalletAction_MetaData), NewProp_OnKeyWalletAction_MetaData) }; // 4039393992
void Z_Construct_UClass_ATaraCharacter_Statics::NewProp_bIsAttached_SetBit(void* Obj)
{
	((ATaraCharacter*)Obj)->bIsAttached = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATaraCharacter_Statics::NewProp_bIsAttached = { "bIsAttached", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATaraCharacter), &Z_Construct_UClass_ATaraCharacter_Statics::NewProp_bIsAttached_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAttached_MetaData), NewProp_bIsAttached_MetaData) };
void Z_Construct_UClass_ATaraCharacter_Statics::NewProp_bIsWallRunning_SetBit(void* Obj)
{
	((ATaraCharacter*)Obj)->bIsWallRunning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATaraCharacter_Statics::NewProp_bIsWallRunning = { "bIsWallRunning", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATaraCharacter), &Z_Construct_UClass_ATaraCharacter_Statics::NewProp_bIsWallRunning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWallRunning_MetaData), NewProp_bIsWallRunning_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATaraCharacter_Statics::NewProp_SatchelRechargeRate = { "SatchelRechargeRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATaraCharacter, SatchelRechargeRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SatchelRechargeRate_MetaData), NewProp_SatchelRechargeRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATaraCharacter_Statics::NewProp_ActiveSatchels = { "ActiveSatchels", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATaraCharacter, ActiveSatchels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveSatchels_MetaData), NewProp_ActiveSatchels_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATaraCharacter_Statics::NewProp_CurrentSatchels = { "CurrentSatchels", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATaraCharacter, CurrentSatchels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSatchels_MetaData), NewProp_CurrentSatchels_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATaraCharacter_Statics::NewProp_MaxSatchels = { "MaxSatchels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATaraCharacter, MaxSatchels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSatchels_MetaData), NewProp_MaxSatchels_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATaraCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATaraCharacter_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATaraCharacter_Statics::NewProp_CameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATaraCharacter_Statics::NewProp_StaticMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATaraCharacter_Statics::NewProp_SatchelThrown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATaraCharacter_Statics::NewProp_OnSatchelCountChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATaraCharacter_Statics::NewProp_OnKeyWalletAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATaraCharacter_Statics::NewProp_bIsAttached,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATaraCharacter_Statics::NewProp_bIsWallRunning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATaraCharacter_Statics::NewProp_SatchelRechargeRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATaraCharacter_Statics::NewProp_ActiveSatchels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATaraCharacter_Statics::NewProp_CurrentSatchels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATaraCharacter_Statics::NewProp_MaxSatchels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATaraCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATaraCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_BotBlastFinal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATaraCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATaraCharacter_Statics::ClassParams = {
	&ATaraCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATaraCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATaraCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATaraCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATaraCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATaraCharacter()
{
	if (!Z_Registration_Info_UClass_ATaraCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATaraCharacter.OuterSingleton, Z_Construct_UClass_ATaraCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATaraCharacter.OuterSingleton;
}
template<> BOTBLASTFINAL_API UClass* StaticClass<ATaraCharacter>()
{
	return ATaraCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATaraCharacter);
ATaraCharacter::~ATaraCharacter() {}
// End Class ATaraCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_TaraCharacter_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPlayerKeyAction_StaticEnum, TEXT("EPlayerKeyAction"), &Z_Registration_Info_UEnum_EPlayerKeyAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3677451385U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATaraCharacter, ATaraCharacter::StaticClass, TEXT("ATaraCharacter"), &Z_Registration_Info_UClass_ATaraCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATaraCharacter), 307892107U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_TaraCharacter_h_3664078127(TEXT("/Script/BotBlastFinal"),
	Z_CompiledInDeferFile_FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_TaraCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_TaraCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_TaraCharacter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects2_BotBlastDevelopment_BotBlastFinal_Source_BotBlastFinal_TaraCharacter_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
