// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/SurvivalAttributeSet.h"

#include "Net/UnrealNetwork.h"

USurvivalAttributeSet::USurvivalAttributeSet()
{
	InitHealth(100.0f);
	InitMaxHealth(100.0f);
	InitMana(100.0f);
	InitMaxMana(100.0f);
	InitStamina(100.0f);
	InitMaxStamina(100.0f);
}

void USurvivalAttributeSet::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(USurvivalAttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USurvivalAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USurvivalAttributeSet, Mana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USurvivalAttributeSet, MaxMana, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USurvivalAttributeSet, Stamina, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(USurvivalAttributeSet, MaxStamina, COND_None, REPNOTIFY_Always);
}

void USurvivalAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USurvivalAttributeSet, Health, OldHealth);
}

void USurvivalAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USurvivalAttributeSet, MaxHealth, OldMaxHealth);
}

void USurvivalAttributeSet::OnRep_Mana(const FGameplayAttributeData& OldMana) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USurvivalAttributeSet, Mana, OldMana);
}

void USurvivalAttributeSet::OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USurvivalAttributeSet, MaxMana, OldMaxMana);
}


void USurvivalAttributeSet::OnRep_Stamina(const FGameplayAttributeData& OldStamina) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USurvivalAttributeSet, Stamina, OldStamina);
}

void USurvivalAttributeSet::OnRep_MaxStamina(const FGameplayAttributeData& OldMaxStamina) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(USurvivalAttributeSet, MaxStamina, OldMaxStamina);
}
