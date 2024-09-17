// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SurvivalCPP/Public/Enums/UArmorType.h"
#include "SurvivalCPP/Public/Enums/UContainerType.h"
#include "SurvivalCPP/Public/Enums/UItemType.h"
#include "UObject/Interface.h"
#include "IItemDrag.generated.h"

USTRUCT(BlueprintType)
struct FGetItemDragInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "ReturnValue")
	int32 SlotIndex = 0;

	UPROPERTY(BlueprintReadWrite, Category = "ReturnValue")
	UContainerType FromContainer;

	UPROPERTY(BlueprintReadWrite, Category = "ReturnValue")
	UArmorType ArmorType;

	UPROPERTY(BlueprintReadWrite, Category= "ReturnValue")
	UItemType ItemType;
};

UINTERFACE(MinimalAPI)
class UIItemDrag : public UInterface
{
	GENERATED_BODY()
};

class IIItemDrag
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "ItemDrag")
	FGetItemDragInfo GetItemDragInfo();
};
