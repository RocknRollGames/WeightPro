// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ProLessWeightGameMode.h"
#include "ProLessWeightHUD.h"
#include "ProLessWeightCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProLessWeightGameMode::AProLessWeightGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AProLessWeightHUD::StaticClass();
}
