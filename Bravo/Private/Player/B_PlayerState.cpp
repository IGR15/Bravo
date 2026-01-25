// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/B_PlayerState.h"
#include "GAS/B_AbilitySystemComponent.h"
#include "GAS/B_AttributeSet.h"

AB_PlayerState::AB_PlayerState()
{
	SetNetUpdateFrequency(100.f);

	AbilitySystemComponent=CreateDefaultSubobject<UB_AbilitySystemComponent>("AbilitySystemComponent");

	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet=CreateDefaultSubobject<UB_AttributeSet>("AttributeSet");
}

UAbilitySystemComponent* AB_PlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
