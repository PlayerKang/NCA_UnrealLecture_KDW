// Fill out your copyright notice in the Description page of Project Settings.


#include "gm_8.h"
#include "UObject/ConstructorHelpers.h"

Agm_8::Agm_8()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprint/BP_testPawn"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	/*static ConstructorHelpers::FClassFinder<AHUD> HUDClassFinder(TEXT("/Game/TestHud/BP_NewHud"));
	if (HUDClassFinder.Class != NULL)
	{
		HUDClass = HUDClassFinder.Class;
	}*/
}
