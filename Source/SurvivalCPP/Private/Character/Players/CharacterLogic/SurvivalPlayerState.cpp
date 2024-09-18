// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/Players/CharacterLogic/SurvivalPlayerState.h"
#include "AbilitySystem/SurvivalAbilitySystemComponent.h"

ASurvivalPlayerState::ASurvivalPlayerState()
{
	NetUpdateFrequency = 100.0f;

	AbilitySystemComponent = CreateDefaultSubobject<USurvivalAbilitySystemComponent>("AbilitySystemComponent");
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	AttributeSet = CreateDefaultSubobject<UAttributeSet>("AttributeSet");
}

UAbilitySystemComponent* ASurvivalPlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
