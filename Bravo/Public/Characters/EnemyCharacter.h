// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"
#include "EnemyCharacter.generated.h"

class AB_AIController;
class UBehaviorTree;
class UAttributeSet;
class UAbilitySystemComponent;
UCLASS()
class BRAVO_API AEnemyCharacter : public ABaseCharacter
{
	GENERATED_BODY()

public:
	
	AEnemyCharacter();
	virtual void PossessedBy(AController* NewController) override;

	
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	virtual UAttributeSet* GetAttributeSet() const override;

protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere,Category="AI")
	TObjectPtr<UBehaviorTree>BehaviorTree;
	
	UPROPERTY()
	TObjectPtr<AB_AIController>B_AIController;

public:
	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY()
	TObjectPtr<UAttributeSet>AttributeSet;
};
