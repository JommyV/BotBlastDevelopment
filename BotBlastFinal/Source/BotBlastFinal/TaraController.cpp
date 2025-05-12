// Fill out your copyright notice in the Description page of Project Settings.


#include "TaraController.h"
#include "TaraCharacter.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameModeBotBlast.h"
#include "Kismet/GameplayStatics.h"

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
	if (ActionRestartGame)
		EnhancedInputComponent->BindAction(ActionRestartGame, ETriggerEvent::Triggered, this,
											&ATaraController::HandleRestartGame);
	if (ActionCycleUI)
		EnhancedInputComponent->BindAction(ActionCycleUI, ETriggerEvent::Triggered, this,
											&ATaraController::HandleCycleUI);


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
	
	//Check if player is in the air before applying movement, if is in the air, stop rotation and curb sideways movement.
	//If not, apply normal movement. If wallrunning, stop sideways inputs.
	if (PlayerCharacter->GetCharacterMovement()->IsFalling())
	{
		PlayerCharacter->GetCharacterMovement()->bOrientRotationToMovement = false;
		PlayerCharacter->AddMovementInput(Right*SideWaysAirControl, MovementVector.X);
		if (MovementVector.Y > 0.0f)
		{
			PlayerCharacter->AddMovementInput(Forward*ForwardAirControl, MovementVector.Y);
		}
		else
		{
			PlayerCharacter->AddMovementInput(Forward*BackwardsAirControl, MovementVector.Y);
		}
	}
	else
	{
		// If not on air, let character spin towards the movement
		PlayerCharacter->GetCharacterMovement()->bOrientRotationToMovement = true;
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
	
	
}


void ATaraController::HandleJump()
{
	// Input is 'Digital' (value not used here)

	// Make the Player's Character Pawn jump, disabling crouch if it was active
	if (PlayerCharacter)
	{
		PlayerCharacter->UnCrouch();
		PlayerCharacter->Jump();
		PlayerCharacter->StopJumping();
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

void ATaraController::HandleRestartGame()
{
	
	//AGameModeBotBlast* GameMode = Cast<AGameModeBotBlast>(UGameplayStatics::GetGameMode(this));
	UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
}

void ATaraController::HandleCycleUI()
{
	if (PlayerHud)
		PlayerHud->CycleToNextViewMode();
}



