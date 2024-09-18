// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/SurvivalHUD.h"

#include "UI/SurvivalUserWidget.h"
#include "UI/WidgetController/OverlayWidgetController.h"

UOverlayWidgetController* ASurvivalHUD::GetOverlayWidgetController(const FWidgetControllerParams& WCParams)
{
	if (OverlayWidgetController == nullptr)
	{
		OverlayWidgetController = NewObject<UOverlayWidgetController>(this, OverlayWidgetControllerClass);
		OverlayWidgetController->SetWidgetControllerParams(WCParams);

		return OverlayWidgetController;
	}
	return OverlayWidgetController;
}

void ASurvivalHUD::InitOverlay(APlayerController* PC, APlayerState* PS)
{
	checkf(OverlayWidgetClass, TEXT("OverlayWidgetClass is uninitialized, please fill out BP_SurvivalHUD"));
	checkf(OverlayWidgetControllerClass,
	       TEXT("OverlayWidgetControllerClass is uninitialized, please fill out BP_SurvivalHUD"));


	UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), OverlayWidgetClass);
	OverlayWidget = Cast<USurvivalUserWidget>(Widget);

	const FWidgetControllerParams WidgetControlerParams(PC, PS);
	UOverlayWidgetController* WidgetController = GetOverlayWidgetController(WidgetControlerParams);

	OverlayWidget->SetWidgetController(WidgetController);

	Widget->AddToViewport();
}
