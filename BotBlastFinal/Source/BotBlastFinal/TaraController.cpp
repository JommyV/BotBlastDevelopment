// Fill out your copyright notice in the Description page of Project Settings.


#include "TaraController.h"
#include "TaraCharacter.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/CharacterMovementComponent.h"

void ATaraController::OnPossess(APawn* aPawn)
{
	// Call the parent method, to let it do anything it needs to
	Super::OnPossess(aPawn);

	// Store a reference to the Player's Pawn
	PlayerCharacter = Cast<ATaraCharacter>(aPawn);
	checkf(PlayerCharacter,
	       TEXT("APlayerControllerBBBase derived classes should only posess ACharacterBBBase derived pawns"));

	// Get a reference to the EnhancedInputComponent
	EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent);
	checkf(EnhancedInputComponent,
	       TEXT("Unable to get reference to the EnhancedInputComponent."));

	// Get the local player subsystem
	// Just a local variable, we dont need to refer to it again after this
	UEnhancedInputLocalPlayerSubsystem* InputSubsystem =
		ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	checkf(InputSubsystem,
		TEXT("Unable to get reference to the EnhancedInputLocalPlayerSubsystem."));

	// Wipe existing mappings, and add our mapping.
	checkf(InputMappingContent, TEXT("InputMappingContent was not specified."));
	InputSubsystem->ClearAllMappings();
	InputSubsystem->AddMappingContext(InputMappingContent, 0);

	// Bind the input actions.
	// Only attempt to bind if valid values were provided.
	if (ActionMove)
		EnhancedInputComponent->BindAction(ActionMove, ETriggerEvent::Triggered, this,
		                                   &ATaraController::HandleMove);
	
	if (ActionLook)
		EnhancedInputComponent->BindAction(ActionLook, ETriggerEvent::Triggered, this,
		                                   &ATaraController::HandleLook);
	if (ActionJump)
		EnhancedInputComponent->BindAction(ActionJump, ETriggerEvent::Triggered, this,
		                                   &ATaraController::HandleJump);
	if (ActionCrouch)
		EnhancedInputComponent->BindAction(ActionCrouch, ETriggerEvent::Triggered, this,
										   &ATaraController::HandleCrouch);
	if (ActionSatchel)
		EnhancedInputComponent->BindAction(ActionSatchel, ETriggerEvent::Triggered, this,
										   &ATaraController::HandleSatchel);
	if (ActionCrouch)
		EnhancedInputComponent->BindAction(ActionToggleSprint, ETriggerEvent::Triggered, this,
										   &ATaraController::HandleToggleSprint);
}

void ATaraController::OnUnPossess()
{
	// Unbind things here...
	EnhancedInputComponent->ClearActionBindings();

	// Call the parent method, in case it needs to do anything.
	Super::OnUnPossess();
}

void ATaraController::HandleLook(const FInputActionValue& InputActionValue)
{
	// Input is a Vector2D
	const FVector2D LookAxisVector = InputActionValue.Get<FVector2D>();

	// Add yaw and pitch input to controller
	
	PlayerCharacter->AddControllerYawInput(LookAxisVector.X);
	PlayerCharacter->AddControllerPitchInput(LookAxisVector.Y);
}

void ATaraController::HandleMove(const FInputActionValue& InputActionValue)
{
	if (!PlayerCharacter) return;
	const FVector2D MovementVector = InputActionValue.Get<FVector2D>();
	if (MovementVector.IsNearlyZero()) return;


	// Get control rotation and zero out pitch/roll
	const FRotator ControlRot = GetControlRotation();
	const FRotator YawRot(0.f, ControlRot.Yaw, 0.f);

	// Get forward and right directions from controller
	const FVector Forward = FRotationMatrix(YawRot).GetUnitAxis(EAxis::X);
	const FVector Right = FRotationMatrix(YawRot).GetUnitAxis(EAxis::Y);
	
	FVector MoveDirectionForward = Forward;

	// Apply movement input
	PlayerCharacter->AddMovementInput(Forward, MovementVector.Y);
	//If player is wallrunning, don't allow sideways movement
	if (!PlayerCharacter->bIsWallRunning)
	{
		PlayerCharacter->AddMovementInput(Right, MovementVector.X);
	}
	else
	{
		PlayerCharacter->AddMovementInput(Right, MovementVector.X, false);
	}


	
}


	
	/*if (PlayerCharacter && !bIsAttached)
	{
		// Get the control rotation, but zero out pitch/roll (we only want yaw)
		const FRotator YawRotation(0.f, GetControlRotation().Yaw, 0.f);

		// Get forward and right vector relative to the camera
		const FVector ForwardDir = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		const FVector RightDir   = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		// Apply movement in those directions
		PlayerCharacter->AddMovementInput(ForwardDir, MovementVector.Y);
		PlayerCharacter->AddMovementInput(RightDir, MovementVector.X);
	}*/

	


void ATaraController::HandleJump()
{
	// Input is 'Digital' (value not used here)

	// Make the Player's Character Pawn jump, disabling crouch if it was active
	if (PlayerCharacter)
	{
		PlayerCharacter->UnCrouch();
		PlayerCharacter->Jump();
	}
}

void ATaraController::HandleCrouch()
{
	// Input is 'Digital' (value not used here)
	if (PlayerCharacter && PlayerCharacter->bIsCrouched)
	{
		PlayerCharacter->UnCrouch();
	}
	else
	{
		PlayerCharacter->Crouch();
	}
	
}

void ATaraController::HandleSatchel()
{
	PlayerCharacter->ThrowSatchel();
}

void ATaraController::HandleToggleSprint()
{
	
}



