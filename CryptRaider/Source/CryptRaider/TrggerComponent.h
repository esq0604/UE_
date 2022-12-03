// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "Mover.h"
#include "TrggerComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class CRYPTRAIDER_API UTrggerComponent : public UBoxComponent
{
	GENERATED_BODY()
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	UTrggerComponent();

	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) ;

	UFUNCTION(BlueprintCallable)
		void SetMover(UMover* NewMover);
private:
	UPROPERTY(EditAnywhere)
		FName AcceptableActorTag="UnLock1";

	UMover* Mover;
	AActor* GetAcceptableActor() const;
};
