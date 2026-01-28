// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/B_PlayerController.h"

/*AB_PlayerController::AB_PlayerController()
{
	SetGenericTeamId(FGenericTeamId(2));
}*/

AB_PlayerController::AB_PlayerController(const FObjectInitializer& ObjectInitializer): Super(ObjectInitializer)
{
	SetGenericTeamId(FGenericTeamId(2));
}

void AB_PlayerController::SetGenericTeamId(const FGenericTeamId& NewTeamId)
{
	if (TeamId!=NewTeamId)
	{
		TeamId=NewTeamId;
	}
}
