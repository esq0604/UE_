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

<<<<<<< HEAD
	// Called every frame
	virtual void Tick(float DeltaTime) override;
=======
>>>>>>> main

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	void Move(float Value);
	void Turn(float Value);

private:
	UPROPERTY(VisibleAnywhere, Category = "Component")
	USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere, Category = "Component")
	UCameraComponent* Camera;
<<<<<<< HEAD

	UPROPERTY(EditAnywhere, Category = "Move")
		float Speed = 300.0f;
	UPROPERTY(EditAnywhere, Category = "Move")
		float TurnRate = 90.0f;

	APlayerController* PlayerContorller;
=======
	UPROPERTY(EditAnywhere, Category = "Move")
		float Speed=200;
	UPROPERTY(EditAnywhere, Category = "Move")
		float TrunRate = 45.f;
>>>>>>> main
};
