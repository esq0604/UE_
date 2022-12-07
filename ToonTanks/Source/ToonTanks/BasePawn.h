// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BasePawn.generated.h"

UCLASS()
class TOONTANKS_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasePawn();



	UPROPERTY(VisibleInstanceOnly)
		int32 VisibleInstanceOnly = 11;

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly , Category ="Components", meta = (AllowPrivateAccess ="true"))
	class UCapsuleComponent* CapsuleComp; //포인터 메모리만 CapusleComp의 내용은 사용시 cppㅇ서만 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* BaseMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* TerretMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
		USceneComponent* ProjectileSpawnPont;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite , meta=(AllowPrivateAccess ="true"))
		int32 VisibleAnywhere = 12;

	UPROPERTY(EditAnywhere, BlueprintReadOnly , meta = (AllowPrivateAccess = "true"))
		int32 EditAnywhere = 22;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
