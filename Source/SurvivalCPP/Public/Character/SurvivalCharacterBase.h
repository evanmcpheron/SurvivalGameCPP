// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/ALSBaseCharacter.h"
#include "AbilitySystemInterface.h"
#include "SurvivalCharacterBase.generated.h"

class UAbilitySystemComponent;
class UAttributeSet;

UCLASS()
class SURVIVALCPP_API ASurvivalCharacterBase : public AALSBaseCharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	ASurvivalCharacterBase(const FObjectInitializer& ObjectInitializer);
	
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UAttributeSet* GetAttributeSet() const { return AttributeSet; }

	/** Implemented on BP to update held objects */
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "ALS|HeldObject")
	void UpdateHeldObject();

	UFUNCTION(BlueprintCallable, Category = "ALS|HeldObject")
	void ClearHeldObject();

	UFUNCTION(BlueprintCallable, Category = "ALS|HeldObject")
	void AttachToHand(UStaticMesh* NewStaticMesh, USkeletalMesh* NewSkeletalMesh,
	                  class UClass* NewAnimClass, bool bLeftHand, FVector Offset);

	virtual void RagdollStart() override;

	virtual void RagdollEnd() override;

	virtual ECollisionChannel GetThirdPersonTraceParams(FVector& TraceOrigin, float& TraceRadius) override;

	virtual FTransform GetThirdPersonPivotTarget() override;

	virtual FVector GetFirstPersonCameraTarget() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival|Component")
	TObjectPtr<USceneComponent> HeldObjectRoot = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival|Component")
	TObjectPtr<USkeletalMeshComponent> SkeletalMesh = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Survival|Component")
	TObjectPtr<UStaticMeshComponent> StaticMesh = nullptr;

protected:
	virtual void BeginPlay() override;

	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributeSet;

	virtual void Tick(float DeltaTime) override;

	virtual void OnOverlayStateChanged(EALSOverlayState PreviousState) override;

	/** Implement on BP to update animation states of held objects */
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "ALS|HeldObject")
	void UpdateHeldObjectAnimations();

private:
	bool bNeedsColorReset = false;
};
