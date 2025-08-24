// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/AttributeSets/AzerPrimaryAttributeSet.h"

#include "Net/UnrealNetwork.h"

void UAzerPrimaryAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UAzerPrimaryAttributeSet, Agility, COND_None, REPNOTIFY_Always)
	DOREPLIFETIME_CONDITION_NOTIFY(UAzerPrimaryAttributeSet, Strength, COND_None, REPNOTIFY_Always)
	DOREPLIFETIME_CONDITION_NOTIFY(UAzerPrimaryAttributeSet, Intelligence, COND_None, REPNOTIFY_Always)
	DOREPLIFETIME_CONDITION_NOTIFY(UAzerPrimaryAttributeSet, Stamina, COND_None, REPNOTIFY_Always)
}

void UAzerPrimaryAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);
}

void UAzerPrimaryAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);
}

void UAzerPrimaryAttributeSet::OnRep_Agility(const FGameplayAttributeData& OldAgility) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAzerPrimaryAttributeSet, Agility, OldAgility);
}

void UAzerPrimaryAttributeSet::OnRep_Strength(const FGameplayAttributeData& OldStrength) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAzerPrimaryAttributeSet, Strength, OldStrength);
}

void UAzerPrimaryAttributeSet::OnRep_Intelligence(const FGameplayAttributeData& OldIntelligence) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAzerPrimaryAttributeSet, Intelligence, OldIntelligence);
}

void UAzerPrimaryAttributeSet::OnRep_Stamina(const FGameplayAttributeData& OldStamina) const
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UAzerPrimaryAttributeSet, Stamina, OldStamina);
}
