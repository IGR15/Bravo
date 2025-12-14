// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "B_AIController.generated.h"


class UBlackboardComponent;
class UBehaviorTreeComponent;
UCLASS()
class BRAVO_API AB_AIController : public AAIController
{
	GENERATED_BODY()

public:
	
	AB_AIController();

protected:
	UPROPERTY()
	TObjectPtr<UBehaviorTreeComponent>BehaviorTreeComponent;
};
