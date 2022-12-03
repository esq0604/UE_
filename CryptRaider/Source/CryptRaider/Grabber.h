// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Grabber.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CRYPTRAIDER_API UGrabber : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGrabber();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


public:
	UFUNCTION(BlueprintCallable) // UPROPERTY, UFUCTION .. 블루프린트에서 표시하기 위함 
		void Release();

	UFUNCTION(BlueprintCallable)
		void Grab();
private:
	UPROPERTY(EditAnywhere)
		float MaxGrapDistance = 400;

	UPROPERTY(EditAnywhere)
		float GrabRadius ;

	UPROPERTY(EditAnywhere)
		float HoldDistance = 200;

	UPhysicsHandleComponent* GetPhysiscsHandle() const;
	bool GetGrabbableInReach(FHitResult& OutHitResult) const;
};
