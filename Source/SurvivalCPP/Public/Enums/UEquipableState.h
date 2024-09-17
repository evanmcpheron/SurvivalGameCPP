// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class UEquipableState:uint8
{
	Default UMETA(DisplayName = "Default"),
	Hatchet UMETA(DisplayName = "Hatchet"),
	Bow UMETA(DisplayName = "Bow"),
	Rock UMETA(DisplayName = "Rock"),
	Rifle UMETA(DisplayName = "Rifle"),
	RocketLauncher UMETA(DisplayName = "RocketLauncher"),
	Spear UMETA(DisplayName = "Spear"),
	Swimming UMETA(DisplayName = "Swimming"),
};
