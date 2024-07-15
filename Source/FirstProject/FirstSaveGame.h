// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Main.h"
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "FirstSaveGame.generated.h"

UCLASS()
class FIRSTPROJECT_API UFirstSaveGame : public USaveGame
{
	GENERATED_BODY() //it'll generate some boilerplate code that allows it to that takes care of some of the behind the scenes details for participating in the reflection system.


public:

	UFirstSaveGame();

	UPROPERTY(VisibleAnywhere, Category = Basic)
	FCharacterStats CharacterStats;

	UPROPERTY(VisibleAnywhere, Category = Basic)
	FString SaveSlotName;

	UPROPERTY(VisibleAnywhere, Category = Basic)
	uint32 UserIndex;
	
};	
     