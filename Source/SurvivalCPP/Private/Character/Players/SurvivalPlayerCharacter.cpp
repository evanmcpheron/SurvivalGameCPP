// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Players/SurvivalPlayerCharacter.h"

#include "AbilitySystemComponent.h"
#include "Character/Players/CharacterLogic/SurvivalPlayerState.h"

void ASurvivalPlayerCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	// Init ability actor for the server
	InitAbilityActorInfo();
}

void ASurvivalPlayerCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	//Init ability actor for the client
	InitAbilityActorInfo();
}

void ASurvivalPlayerCharacter::InitAbilityActorInfo()
{
	ASurvivalPlayerState* SurvivalPlayerState = GetPlayerState<ASurvivalPlayerState>();

	check(SurvivalPlayerState);
	SurvivalPlayerState->GetAbilitySystemComponent()->InitAbilityActorInfo(SurvivalPlayerState, this);
	AbilitySystemComponent = SurvivalPlayerState->GetAbilitySystemComponent();
	AttributeSet = SurvivalPlayerState->GetAttributeSet();
}
