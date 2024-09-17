#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Character/ALSPlayerController.h"
#include "SurvivalPlayerController.generated.h"


/**
 * Player controller class
 */
UCLASS(Blueprintable, BlueprintType)
class ASurvivalPlayerController : public AALSPlayerController
{
	GENERATED_BODY()

	virtual void BeginPlay() override;

public:

protected:
	// // Reference to the Widget Blueprint class
	// UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	// TSubclassOf<nullptr> DefaultHUDLayoutClass;

private:
	UFUNCTION(NotBlueprintable)
	void SwitchOnPlayerLocale();

	UFUNCTION(NotBlueprintable)
	void RenderPlayerHUD();

	UFUNCTION(NotBlueprintable)
	void SwitchIsLocalPlayerController();
};
