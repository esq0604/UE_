// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tank.generated.h"

/**
 * 
 */
class UCameraComponent;
class USpringArmComponent;

UCLASS()
class TOONTANKS_API ATank : public ABasePawn
{
	GENERATED_BODY()
public:
	ATank();

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Called when the game starts or when spawned

private:
	void Move(float Value);

private:
	UPROPERTY(VisibleAnywhere, Category = "Component")
	USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere, Category = "Component")
	UCameraComponent* Camera;
};
