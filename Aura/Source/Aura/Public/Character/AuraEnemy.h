// Copyright Siestaaaaaa

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/TargetInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public ITargetInterface
{
	GENERATED_BODY()
	
public:
	AAuraEnemy();

	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;

	UPROPERTY(BlueprintReadOnly)
	bool bHighlighted;

protected:
	virtual void BeginPlay() override;
};
