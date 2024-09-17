// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SurvivalCPP/Public/DataAssets/ItemInfo.h"
#include "SurvivalCPP/Public/Enums/UContainerType.h"
#include "UObject/Interface.h"
#include "ISurvivalController.generated.h"

UINTERFACE(MinimalAPI)
class UISurvivalController : public UInterface
{
	GENERATED_BODY()
};

class IISurvivalController
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SurvivalController")
	void CloseInventory();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SurvivalController")
	void UpdateItemSlots(UContainerType Container, int32 Index, UItemInfo* ItemInfo);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "SurvivalController")
	void ResetItemSlot(UContainerType Container, int32 Index);
};
