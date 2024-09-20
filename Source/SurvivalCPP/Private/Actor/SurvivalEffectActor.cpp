// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/SurvivalEffectActor.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystem/SurvivalAttributeSet.h"

ASurvivalEffectActor::ASurvivalEffectActor()
{
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SetRootComponent(Mesh);

	Sphere = CreateDefaultSubobject<USphereComponent>("Sphere");
	Sphere->SetupAttachment(GetRootComponent());

	if (!Mesh)
	{
		UE_LOG(LogTemp, Error, TEXT("Mesh is not initialized."));
	}
	if (!Sphere)
	{
		UE_LOG(LogTemp, Error, TEXT("Sphere is not initialized."));
	}
}


void ASurvivalEffectActor::BeginPlay()
{
	Super::BeginPlay();

	if (Sphere)
	{
		Sphere->OnComponentBeginOverlap.AddDynamic(this, &ASurvivalEffectActor::OnOverlap);
		Sphere->OnComponentEndOverlap.AddDynamic(this, &ASurvivalEffectActor::EndOverlap);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Sphere is null in BeginPlay."));
	}
}


void ASurvivalEffectActor::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                     UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
                                     const FHitResult& SweepResult)
{
	IAbilitySystemInterface* ASCInterface = Cast<IAbilitySystemInterface>(OtherActor);
	if (!ASCInterface)
	{
		UE_LOG(LogTemp, Error, TEXT("%s does not implement IAbilitySystemInterface."), *OtherActor->GetName());
		return;
	}
	const USurvivalAttributeSet* SurvivalAttributeSet = Cast<USurvivalAttributeSet>(
		ASCInterface->GetAbilitySystemComponent()->GetAttributeSet(USurvivalAttributeSet::StaticClass()));

	if (!SurvivalAttributeSet)
	{
		UE_LOG(LogTemp, Error, TEXT("SurvivalAttributeSet is null."));
		return;
	}

	USurvivalAttributeSet* MutableSurvivalAttribute = const_cast<USurvivalAttributeSet*>(SurvivalAttributeSet);
	MutableSurvivalAttribute->SetHealth(SurvivalAttributeSet->GetHealth() + 25.0f);
	Destroy();
}

void ASurvivalEffectActor::EndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                      UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
}
