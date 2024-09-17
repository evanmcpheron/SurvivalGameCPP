#pragma once

#include "CoreMinimal.h"
#include "CommonUI/Public/Widgets/CommonActivatableWidgetContainer.h"
#include "CommonUI/Public/CommonActivatableWidget.h"
#include "MainUILayout.generated.h"

UCLASS(Blueprintable)
class UMainUILayout : public UCommonActivatableWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "MainUILayout")
	void PushDefaultHUDLayout(UCommonActivatableWidgetStack* Target,
	                          TSubclassOf<UCommonActivatableWidget> DefaultLayout);
};
