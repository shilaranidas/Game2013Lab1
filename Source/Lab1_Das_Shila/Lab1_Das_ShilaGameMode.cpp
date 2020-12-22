// Copyright Epic Games, Inc. All Rights Reserved.

#include "Lab1_Das_ShilaGameMode.h"
#include "Lab1_Das_ShilaCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALab1_Das_ShilaGameMode::ALab1_Das_ShilaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
