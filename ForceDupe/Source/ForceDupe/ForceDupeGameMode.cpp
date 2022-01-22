// Copyright Epic Games, Inc. All Rights Reserved.

#include "ForceDupeGameMode.h"
#include "ForceDupeHUD.h"
#include "ForceDupeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AForceDupeGameMode::AForceDupeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AForceDupeHUD::StaticClass();
}
