// Copyright PhantomCoding

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/AuraGameplayAbility.h"
#include "AuraSummonAbility.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API UAuraSummonAbility : public UAuraGameplayAbility
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable)
	TArray<FVector> GetSpawnLocations();
	
    UFUNCTION(BlueprintPure, Category = "Summoning")
	TSubclassOf<APawn> GetRandomMinionClass();
	
	UPROPERTY(EditAnywhere, Category = "Summoning")
	int32 NumMinions = 5;

	UPROPERTY(EditAnywhere, Category = "Summoning")
	TArray<TSubclassOf<APawn>> MinionClasses;
	
	UPROPERTY(EditAnywhere, Category = "Summoning")
	float MinSpawnDistance = 100.f;

	UPROPERTY(EditAnywhere, Category = "Summoning")
	float MaxSpawnDistance = 300.f;

	UPROPERTY(EditAnywhere, Category = "Summoning")
	float SpawnSpread = 90.f;

	
};
