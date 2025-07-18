// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BotBlastHud.h"
#include "InputAction.h"
#include "InputActionValue.h"
#include "GameFramework/PlayerController.h"
#include "TaraController.generated.h"

// Forward Declarations
class UEnhancedInputComponent;
class ATaraCharacter;
class UInputMappingContext;
class UFMODEvent;
class UFMODAudioEvent;
class UFMODAudioComponent;

UCLASS(Abstract)
class ATaraController : public APlayerController
{
public:
	// The Input Action to map to movement.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Player Input|Character Movement")
	TObjectPtr<UInputAction> ActionMove = nullptr;

	// The Input Action to map to looking around.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Player Input|Character Movement")
	TObjectPtr<UInputAction> ActionLook = nullptr;

	// The Input Action to map to jumping.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Player Input|Character Movement")
	TObjectPtr<UInputAction> ActionJump = nullptr;

	// The Input Action to map to crouch.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Player Input|Character Movement")
	TObjectPtr<UInputAction> ActionCrouch = nullptr;

	// The Input Action to map to Sprint.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Player Input|Character Movement")
	TObjectPtr<UInputAction> ActionToggleSprint = nullptr;

	// The Input Action to map to Satchel.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Player Input|Character Movement")
	TObjectPtr<UInputAction> ActionSatchel = nullptr;

	// The Input Action to map to Restart PlayInEditor
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Player Input|Game Control")
	TObjectPtr<UInputAction> ActionRestartGame = nullptr;

	// The Input Action to map to Pause/call main menu
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Player Input|UI")
	TObjectPtr<UInputAction> ActionPauseGame = nullptr;

	// FMOD event for footsteps.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	TObjectPtr<UFMODEvent> FootStepEvent;

	// The Input Mapping Context to use.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Player Input|Character Movement")
	TObjectPtr<UInputMappingContext> InputMappingContent = nullptr;


	// Used to store a reference to the HUD we want to change.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="HUD")
	TObjectPtr<ABotBlastHud> PlayerHud = nullptr;


	//Variables to change how much air control you have on each axis.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AirMovement")
	float ForwardAirControl = 0.3f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AirMovement")
	float BackwardsAirControl = 1.f ;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AirMovement")
	float SideWaysAirControl = 0.3f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GroundMovement")
	float GroundStrafingSpeed = 0.5f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "GroundMovement")
	int MovementLock = 1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AirMovement")
	bool bCanJump = true;

	bool bIsPaused = false;

	UFUNCTION(BlueprintCallable, Category = "Settings")
	float SetMouseSensitivity(float NewSensitivity);

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Settings")
	float MouseSensitivity = 1.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	int LookInversion = 1;

	UFUNCTION(BlueprintCallable, Category = "Settings")
	int SetLookInversion(int Inverted);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	TObjectPtr<UFMODEvent> JumpSound;

		
protected:
	// Action Handler Functions
	void         HandleLook(const FInputActionValue& InputActionValue);
	void         HandleMove(const FInputActionValue& InputActionValue);
	void         HandleJump();
	void         HandleCrouch();
	void         HandleSatchel();
	void		 HandleToggleSprint();
	void		 HandleRestartGame();
	void		 HandleCycleUI();
	void		 HandleStopJump();


	// Footstep audio component reference
	UFMODAudioComponent* FootstepAudioComponent = nullptr;

	// Track if footstep sound is playing
	bool bIsFootstepPlaying = false;
		
	virtual void OnPossess(APawn* aPawn) override;
	virtual void OnUnPossess() override;

public:
	void		 HandlePause();
	void		 HandleUnPause();

private:
	// Used to store a reference to the InputComponent cast to an EnhancedInputComponent.
	UPROPERTY()
	TObjectPtr<UEnhancedInputComponent> EnhancedInputComponent = nullptr;

	// Used to store a reference to the pawn we are controlling.
	UPROPERTY()
	TObjectPtr<ATaraCharacter> PlayerCharacter = nullptr;

	FInputModeGameOnly GameInputMode;
	FInputModeUIOnly UIInputMode;
	
	GENERATED_BODY()
};