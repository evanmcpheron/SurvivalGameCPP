// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "SurvivalAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class SURVIVALCPP_API USurvivalAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	USurvivalAttributeSet();
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Health, Category = "Attributes|Main")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(USurvivalAttributeSet, Health)

	UPROPERTY(ReplicatedUsing = OnRep_MaxHealth, BlueprintReadOnly, Category = "Attributes|Main")
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(USurvivalAttributeSet, MaxHealth)

	UPROPERTY(ReplicatedUsing = OnRep_Mana, BlueprintReadOnly, Category = "Attributes|Main")
	FGameplayAttributeData Mana;
	ATTRIBUTE_ACCESSORS(USurvivalAttributeSet, Mana)

	UPROPERTY(ReplicatedUsing = OnRep_MaxMana, BlueprintReadOnly, Category = "Attributes|Main")
	FGameplayAttributeData MaxMana;
	ATTRIBUTE_ACCESSORS(USurvivalAttributeSet, MaxMana)

	UPROPERTY(ReplicatedUsing = OnRep_Stamina, BlueprintReadOnly, Category = "Attributes|Main")
	FGameplayAttributeData Stamina;
	ATTRIBUTE_ACCESSORS(USurvivalAttributeSet, Stamina)

	UPROPERTY(ReplicatedUsing = OnRep_MaxStamina, BlueprintReadOnly, Category = "Attributes|Main")
	FGameplayAttributeData MaxStamina;
	ATTRIBUTE_ACCESSORS(USurvivalAttributeSet, MaxStamina)

	UFUNCTION()
	void OnRep_Health(const FGameplayAttributeData& OldHealth) const;

	UFUNCTION()
	void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth) const;

	UFUNCTION()
	void OnRep_Mana(const FGameplayAttributeData& OldMana) const;

	UFUNCTION()
	void OnRep_MaxMana(const FGameplayAttributeData& OldMaxMana) const;

	UFUNCTION()
	void OnRep_Stamina(const FGameplayAttributeData& OldStamina) const;

	UFUNCTION()
	void OnRep_MaxStamina(const FGameplayAttributeData& OldMaxStamina) const;
};
