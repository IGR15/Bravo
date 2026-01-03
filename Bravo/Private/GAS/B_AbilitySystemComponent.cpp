// Fill out your copyright notice in the Description page of Project Settings.


#include "GAS/B_AbilitySystemComponent.h"
#include "BTags.h"


// Sets default values for this component's properties
UB_AbilitySystemComponent::UB_AbilitySystemComponent()
{

	PrimaryComponentTick.bCanEverTick = false;

}

void UB_AbilitySystemComponent::OnGiveAbility(FGameplayAbilitySpec& AbilitySpec)
{
	Super::OnGiveAbility(AbilitySpec);

	if (!IsValid(AbilitySpec.Ability))return;
	HandleAutoActivateAbilities(AbilitySpec);
}

void UB_AbilitySystemComponent::OnRep_ActivateAbilities()
{
	Super::OnRep_ActivateAbilities();
	//this is to prevent from activation any ability that has been removed 
	FScopedAbilityListLock ActiveScopeLock(*this);
	for (const FGameplayAbilitySpec& AbilitySpec:GetActivatableAbilities())
	{
		HandleAutoActivateAbilities(AbilitySpec);
	}
}

void UB_AbilitySystemComponent::SetAbilityLevel(TSubclassOf<UGameplayAbility> AbilityClass, int32 Level)
{
	if (IsValid(GetAvatarActor())&&!GetAvatarActor()->HasAuthority())return;

	
	if (FGameplayAbilitySpec* AbilitySpec=FindAbilitySpecFromClass(AbilityClass))
	{
		AbilitySpec->Level=Level;
		MarkAbilitySpecDirty(*AbilitySpec);
	}
}

void UB_AbilitySystemComponent::AddToAbilityLevel(TSubclassOf<UGameplayAbility> AbilityClass, int32 Level)
{
	if (IsValid(GetAvatarActor())&&!GetAvatarActor()->HasAuthority())return;

	
	if (FGameplayAbilitySpec* AbilitySpec=FindAbilitySpecFromClass(AbilityClass))
	{
		AbilitySpec->Level+=Level;
		MarkAbilitySpecDirty(*AbilitySpec);
	}
}

void UB_AbilitySystemComponent::HandleAutoActivateAbilities(const FGameplayAbilitySpec& AbilitySpec)
{
	for (const FGameplayTag& Tag: AbilitySpec.Ability->GetAssetTags())
	{
		if (Tag.MatchesTagExact(BTags::LTAbilities::ActivateOnGiven))
		{
			TryActivateAbility(AbilitySpec.Handle);
			return;
		}
	}
}

