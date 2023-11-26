// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interactions/EnemyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()
	
public:

	AAuraEnemy();

	// Enemy interface
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
	//

	
protected:
	virtual void BeginPlay() override;

	
	UPROPERTY(BlueprintReadWrite)
	bool bHighlight = false;
};
