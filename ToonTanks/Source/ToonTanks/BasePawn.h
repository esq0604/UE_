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

	


private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly , Category ="Components", meta = (AllowPrivateAccess ="true"))
	class UCapsuleComponent* CapsuleComp; //������ �޸𸮸� CapusleComp�� ������ ���� cpp������ 
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


	// Called to bind functionality to input

};
