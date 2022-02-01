// Copyright Epic Games, Inc. All Rights Reserved.

#include "CWOWGameMode.h"
#include "CWOWCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACWOWGameMode::ACWOWGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
