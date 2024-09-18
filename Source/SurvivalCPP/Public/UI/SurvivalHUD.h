// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SurvivalHUD.generated.h"

class UOverlayWidgetController;
class USurvivalUserWidget;
struct FWidgetControllerParams;

UCLASS()
class SURVIVALCPP_API ASurvivalHUD : public AHUD
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TObjectPtr<USurvivalUserWidget> OverlayWidget;

	UOverlayWidgetController* GetOverlayWidgetController(const FWidgetControllerParams& WCParams);

	void InitOverlay(APlayerController* PC, APlayerState* PS);

protected:

private:
	UPROPERTY(EditAnywhere)
	TSubclassOf<USurvivalUserWidget> OverlayWidgetClass;

	UPROPERTY()
	TObjectPtr<UOverlayWidgetController> OverlayWidgetController;

	UPROPERTY()
	TSubclassOf<UOverlayWidgetController> OverlayWidgetControllerClass;
};
