// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ShadowComponent.h"
#include "GameFramework/Character.h"
#include "TaraCharacter.generated.h"



DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FIntStatUpdated,
											   int32, OldValue,
											   int32, NewValue,
											   int32, MaxValue);

// Delegate for when the player dies
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerIsDead);

// Delegate for when stats based on floats are changed.
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFloatStatUpdated,
											   float, OldValue,
											   float, NewValue,
											   float, MaxValue);

// Different actions involving the key wallet.
UENUM(BlueprintType)
enum class EPlayerKeyAction: uint8
{
	AddKey UMETA(Tooltip = "Attempt to add a key to player's wallet."),
	RemoveKey UMETA(Tooltip = "Attempt to remove a key from player's wallet."),
	TestKey UMETA(Tooltip = "Check if the player has a specific key.")
};

// Delegate for when actions occur with the player's keys.
// KeyString is the key involved in the action.
// KeyAction shows what was attempted.
// IsSuccess shows if the attempted action happened, or didn't.
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FKeyWalletAction,
											   FString, KeyString,
											   EPlayerKeyAction, KeyAction,
											   bool, IsSuccess);

UCLASS()
class BOTBLASTFINAL_API ATaraCharacter : public ACharacter
{
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	class USpringArmComponent* SpringArmComp;
		
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	class UCameraComponent* CameraComp;
		
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* StaticMeshComp;

	UPROPERTY(EditAnywhere)
	UShadowComponent* ShadowComp;

	

public:
	// Sets default values for this character's properties
	ATaraCharacter();


	// Called every frame
	virtual void Tick(float DeltaTime) override;


	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	// Triggered when the player dies.
	//UPROPERTY(BlueprintAssignable, Category = "Player|Health")
	//FPlayerIsDead OnPlayerDied;

	
	//Gets max number of satchel available - Might not be used if satchel number is constant.
	UFUNCTION(BlueprintPure, Category="Player|Satchel")
	int GetMaxSatchels();

	
	//Get number of satchel player has - Might not be used if only one satchel is available.
	UFUNCTION(BlueprintPure, Category="Player|Satchel")
	int GetCurrentSatchels();

	
	//Gets how much the satchels recover every second, although its a float, satchels are only
	//usable if you have the entire one, this is only to calculate the cooldown and tell the player
	UFUNCTION(BlueprintPure, Category="Player|Satchel")
	float GetSatchelRechargeRate();

	
	//Throws Satchel
	UFUNCTION(BluePrintCallable,Category="Player|Satchel")
	void ThrowSatchel();

	
	// Triggered when the player dies.
	UPROPERTY(BlueprintAssignable, Category = "Player|Satchel")
	FIntStatUpdated SatchelThrown;

	
	// Triggered when something happens with the player's key wallet.
	UPROPERTY(BlueprintAssignable, Category = "Player|Satchel")
	FFloatStatUpdated OnSatchelCountChanged;
	

	// Add a key to the wallet if it isn't already in there.
	// If it is already in there, dont do anything.
	UFUNCTION(BluePrintCallable,Category="Player|KeyWallet")
	void AddKey(FString KeytoAdd);


	// Remove a key (do we even need to do that in our game?)
	// If the key isn't in the wallet, we do nothing.
	UFUNCTION(BluePrintCallable,Category="Player|KeyWallet")
	void RemoveKey(FString KeytoRemove);


	// Does the player have a given key?
	// Returns true if they do, and false if they dont.
	UFUNCTION(BlueprintPure,Category="Player|KeyWallet")
	bool IsPlayerCarryingKey(FString DesiredKey);

	
	// Triggered when something happens with the player's key wallet.
	UPROPERTY(BlueprintAssignable, Category = "Player|KeyWallet")
	FKeyWalletAction OnKeyWalletAction;

	//Camera input that is changed by the character when the controller
	//calls for it.
	void PitchCamera(float AxisValue);
	void YawCamera(float AxisValue);

	UPROPERTY(BlueprintReadWrite)
	bool bIsAttached = false;

	UPROPERTY(BlueprintReadWrite)
	bool bIsWallRunning = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Player|Satchel")
	float SatchelRechargeRate = 0.001f;

	UPROPERTY(BlueprintReadWrite)
	int	ActiveSatchels = 0;

	UPROPERTY(BlueprintReadWrite)
	float CurrentSatchels = MaxSatchels;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Player|Satchel")
	int	MaxSatchels = 2;

	
	
private:
	//Player keys
	TArray<FString>KeyWallet;

	
	bool				 IsSatchelActive = false;

	//Has a satchel been thrown
	bool bHasThrownSatchel = false;

	//Has player jumped
	bool bHasPlayerJumped = false;

	//Camera
	FVector2D CameraInput;

	
	GENERATED_BODY()
};




