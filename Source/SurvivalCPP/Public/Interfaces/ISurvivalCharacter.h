// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SurvivalCPP/Public/DataAssets/ItemInfo.h"
#include "SurvivalCPP/Public/Enums/UContainerType.h"
#include "UObject/Interface.h"
#include "SurvivalCPP/Public/Enums/UEquipableState.h"
#include "ISurvivalCharacter.generated.h"

USTRUCT(BlueprintType)
struct FGetAnimationStates
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "ReturnValue")
	bool bIsCrouching = false;

	UPROPERTY(BlueprintReadWrite, Category = "ReturnValue")
	bool bIsProne = false;

	UPROPERTY(BlueprintReadWrite, Category = "ReturnValue")
	UEquipableState EquipableState;
};


UINTERFACE(MinimalAPI)
class UISurvivalCharacter : public UInterface
{
	GENERATED_BODY()
};

class IISurvivalCharacter
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "ItemDrag")
	FGetAnimationStates GetAnimationStates();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "ItemDrag")
	UItemInfo* UpdateItem(UContainerType ContainerType, int32 Index);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "ItemDrag")
	void OnSlotDrop(UContainerType TargetContainer, UContainerType SourceContainer, int32 TargetIndex,
	                int32 SourceIndex, UArmorType ArmorType);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "ItemDrag")
	void ResetItem(UContainerType ContainerType, int32 Index);
};
