// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputAction.h"
#include "InputActionValue.h"
#include "GameFramework/PlayerController.h"
#include "TaraController.generated.h"

// Forward Declarations
class UEnhancedInputComponent;
class ATaraCharacter;
class UInputMappingContext;

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
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Player Input|Character Movement")
	TObjectPtr<UInputAction> ActionRestartGame = nullptr;
	
	// The Input Mapping Context to use.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Player Input|Character Movement")
	TObjectPtr<UInputMappingContext> InputMappingContent = nullptr;

	//Variables to change how much air control you have on each axis.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AirMovement")
	float ForwardAirControl = 0.3f;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AirMovement")
	float BackwardsAirControl = 1.f ;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AirMovement")
	float SideWaysAirControl = 0.3f;
	
	
protected:
	// Action Handler Functions
	void         HandleLook(const FInputActionValue& InputActionValue);
	void         HandleMove(const FInputActionValue& InputActionValue);
	void         HandleJump();
	void         HandleCrouch();
	void         HandleSatchel();
	void		 HandleToggleSprint();
	void		 HandleRestartGame();
	
	virtual void OnPossess(APawn* aPawn) override;
	virtual void OnUnPossess() override;

	

private:
	// Used to store a reference to the InputComponent cast to an EnhancedInputComponent.
	UPROPERTY()
	TObjectPtr<UEnhancedInputComponent> EnhancedInputComponent = nullptr;

	// Used to store a reference to the pawn we are controlling.
	UPROPERTY()
	TObjectPtr<ATaraCharacter> PlayerCharacter = nullptr;

	GENERATED_BODY()
};