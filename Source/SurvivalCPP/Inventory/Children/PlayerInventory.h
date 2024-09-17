// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../ItemsContainerMaster.h"
#include "PlayerInventory.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class UPlayerInventory : public UItemsContainerMaster
{
	GENERATED_BODY()
};
