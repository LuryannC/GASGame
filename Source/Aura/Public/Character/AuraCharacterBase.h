// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"


#include "GameFramework/Character.h"
#include "Interactions/CombatInterface.h"
#include "AuraCharacterBase.generated.h"

class UGameplayAbility;
class UGameplayEffect;
class UAbilitySystemComponent;
class UAttributeSet;
class UAnimMontage;

UCLASS()
class AURA_API AAuraCharacterBase : public ACharacter, public IAbilitySystemInterface, public ICombatInterface
{
	GENERATED_BODY()

public:
	AAuraCharacterBase();

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	UAttributeSet* GetAttributeSet() const {return AttributesSet;}

	virtual UAnimMontage* GetHitReactMontage_Implementation() override;
	
protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category="Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;

	UPROPERTY(EditAnywhere, Category="Combat")
	FName WeaponTipSocketName;

	UFUNCTION(BlueprintCallable)
	virtual FVector GetCombatSocketLocation() override;

	UPROPERTY()
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY()
	TObjectPtr<UAttributeSet> AttributesSet;

	virtual void InitAbilityActorInfo();

	// UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="Attributes")
	// TSubclassOf<UGameplayEffect> DefaultPrimaryAttributes;
	//
	// UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="Attributes")
	// TSubclassOf<UGameplayEffect> DefaultSecondaryAttributes;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="Attributes")
	TArray<TSubclassOf<UGameplayEffect>> DefaultAttributesArray;
	
	void ApplyEffectToSelf(TSubclassOf<UGameplayEffect> AttributeClass, float Level = 1.0f) const;
	virtual void InitializeDefaultAttributes();
	void InitializeCharacterAbilities();

private:
	UPROPERTY(EditAnywhere, Category="Abilities")
	TArray<TSubclassOf<UGameplayAbility>> StartupAbilities;

	UPROPERTY(EditAnywhere, Category="Combat")
	TObjectPtr<UAnimMontage> HitReactMontage;
};