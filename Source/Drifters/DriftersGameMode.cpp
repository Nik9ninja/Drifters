// Copyright Epic Games, Inc. All Rights Reserved.

#include "DriftersGameMode.h"
#include "DriftersCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADriftersGameMode::ADriftersGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
