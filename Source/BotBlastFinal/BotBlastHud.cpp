// Fill out your copyright notice in the Description page of Project Settings.


#include "BotBlastHud.h"
#include "CustomLogging.h"
#include "TaraCharacter.h"
#include "BarBase.h"
#include "UILayout.h"
#include "SatchelsUIBase.h"
#include "Kismet/GameplayStatics.h"


void ABotBlastHud::BeginPlay()
{
	Super::BeginPlay();

	// Grab a reference to the current world
	World = GetWorld();
	checkf(World, TEXT("Failed to reference world."));

	// Ensure we have valid values for the 3 classes of widget used by the HUD
	//checkf(LayoutWidget, TEXT("Invalid MinimalLayoutClass reference."));


	// create the 3 types of layout widget, and add them to the viewport
	// We could have been 'clever' here, and had maybe a single widget which 'mutates'
	// based on the requirements, but this IS a tutorial afterall, and we wanna keep it simple(er!)
	// When creating a widget, the first parameter (owning object) must be one of the following types:
	// UWidget, UWidgetTree, APlayerController, UGameInstance, or UWorld
	LayoutWidget = CreateWidget<UILayout>(World, LayoutClass);
	LayoutWidget->AddToViewport();
	LayoutWidget->SetVisibility(ESlateVisibility::Collapsed);

	MapName = UGameplayStatics::GetCurrentLevelName(World, true) ;
	GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Cyan,
		FString::Printf(TEXT("I now have: %s Satchels"), *MapName));

	
	// Get a reference to the character, and hook up the stat handlers
	if (MapName != "MainMenu")
	{
		if (APlayerController* PlayerController = GetOwningPlayerController())
			PlayerCharacter = Cast<ATaraCharacter>(PlayerController->GetPawn());
		checkf(PlayerCharacter, TEXT("Unable to get a reference to the player character"));
	}

	// Set the initial viewmode to the 'current' one, which allows setting via the editor.
	//SetCurrentViewMode(CurrentViewMode);
	UpdateWidgets();
}




void ABotBlastHud::SetCurrentViewMode(EHudViewMode NewViewMode)
{
}

void ABotBlastHud::CycleToNextViewMode()
{
	++CurrentViewMode;
	UE_LOG(LogTemp, Warning, TEXT("CycleToNextViewMode %s"), *UEnum::GetValueAsString(CurrentViewMode));
	//UpdateWidgets();
}

void ABotBlastHud::UpdateWidgets()
{
	if (MapName != "MainMenu")
	{
		// Unhook any delegate handlers.
		ClearAllHandlers();

		// Set all the widgets so we see none of them
		LayoutWidget->SetVisibility(ESlateVisibility::Collapsed);

		//For future if different HUDS are needed.
		//ModerateLayoutWidget->SetVisibility(ESlateVisibility::Collapsed);
		//OverloadLayoutWidget->SetVisibility(ESlateVisibility::Collapsed);

		switch (CurrentViewMode)
		{
		case EHudViewMode::CleanAndPristine:
			// Currently there isn't actually anything to do here!
			break;
		case EHudViewMode::Minimal:
			PlayerCharacter->OnSatchelCountChanged.AddDynamic(LayoutWidget->ItemBar->SatchelBarMain,
													   &USatchelsUIBase::OnFloatStatUpdated);

			//For future if different HUDS are needed.
			//PlayerCharacter->OnStaminaChanged.AddDynamic(MinimalLayoutWidget->HSPBar->StaminaBar,
			//  &UStatBarBase::OnFloatStatUpdated);
			//PlayerCharacter->OnPsiPowerChanged.AddDynamic(MinimalLayoutWidget->HSPBar->PsiBar,
			//   &UStatBarBase::OnFloatStatUpdated);
		
			LayoutWidget->SetVisibility(ESlateVisibility::Visible);
			break;


			//For future, if different HUDS are needed.
			/*case EHudViewMode::Moderate:
			PlayerCharacter->OnHealthChanged.AddDynamic(ModerateLayoutWidget->HSPBar->HealthBar,
														&UStatBarBase::OnIntStatUpdated);
			PlayerCharacter->OnStaminaChanged.AddDynamic(ModerateLayoutWidget->HSPBar->StaminaBar,
														 &UStatBarBase::OnFloatStatUpdated);
			PlayerCharacter->OnPsiPowerChanged.AddDynamic(ModerateLayoutWidget->HSPBar->PsiBar,
														  &UStatBarBase::OnFloatStatUpdated);
			ModerateLayoutWidget->SetVisibility(ESlateVisibility::Visible);
			break;
		case EHudViewMode::SensoryOverload:
			PlayerCharacter->OnHealthChanged.AddDynamic(OverloadLayoutWidget->HSPBar->HealthBar,
														&UStatBarBase::OnIntStatUpdated);
			PlayerCharacter->OnStaminaChanged.AddDynamic(OverloadLayoutWidget->HSPBar->StaminaBar,
														 &UStatBarBase::OnFloatStatUpdated);
			PlayerCharacter->OnPsiPowerChanged.AddDynamic(OverloadLayoutWidget->HSPBar->PsiBar,
														  &UStatBarBase::OnFloatStatUpdated);
			OverloadLayoutWidget->SetVisibility(ESlateVisibility::Visible);
			break;*/
		default: ;
		}

		// This ensures that even if something has not changed recently, the newly switched-to widget will get sent
		// the latest character stats, so it can update itself.
		PlayerCharacter->BroadcastCurrentStats();
	}
}

void ABotBlastHud::ClearAllHandlers()
{ 
	if (PlayerCharacter && MapName != "MainMenu")
	{
		//PlayerCharacter->OnHealthChanged.Clear();
		//PlayerCharacter->OnStaminaChanged.Clear();
		PlayerCharacter->OnSatchelCountChanged.Clear();
		PlayerCharacter->OnKeyWalletAction.Clear();
	}
}

void ABotBlastHud::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (MapName != "MainMenu")
	{
		// Release any event handlers
		ClearAllHandlers();
	}
		
	Super::EndPlay(EndPlayReason);
}
	
	
