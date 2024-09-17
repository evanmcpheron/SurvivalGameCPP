// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SurvivalCPP/Public/Enums/UContainerType.h"
#include "SurvivalCPP/Public/Structs/FItem.h"
#include "ItemsContainerMaster.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class UItemsContainerMaster : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Items")
	TArray<FItem> Items;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Items")
	UContainerType ContainerType;

	// Sets default values for this component's properties
	UItemsContainerMaster();

	UFUNCTION(BlueprintCallable, Category = "Items")
	int32 FindEmptySlot();

	UFUNCTION(BlueprintCallable, Category = "Items")
	bool AddItem(FItem ItemToAdd);

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable, Category = "Items")
	void Server_AddItem(FItem ItemToAdd);
};
