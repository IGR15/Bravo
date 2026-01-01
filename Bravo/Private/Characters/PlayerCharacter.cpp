// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/PlayerCharacter.h"


// Sets default values
APlayerCharacter::APlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = false;
}

void APlayerCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
}

void APlayerCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
}


