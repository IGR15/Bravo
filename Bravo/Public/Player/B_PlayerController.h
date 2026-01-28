// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GenericTeamAgentInterface.h"
#include "B_PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BRAVO_API AB_PlayerController : public APlayerController, public IGenericTeamAgentInterface
{
	GENERATED_BODY()
public:
	//AB_PlayerController();
	AB_PlayerController(const FObjectInitializer& ObjectInitializer);
	virtual void SetGenericTeamId(const FGenericTeamId& NewTeamId) override;
 
	virtual FGenericTeamId GetGenericTeamId() const override { return TeamId; }
 
private:
	FGenericTeamId TeamId;
};
