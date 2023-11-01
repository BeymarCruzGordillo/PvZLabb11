// Copyright Epic Games, Inc. All Rights Reserved.

#include "PvZLabbGameMode.h"
#include "PvZLabbPawn.h"

APvZLabbGameMode::APvZLabbGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = APvZLabbPawn::StaticClass();
}

