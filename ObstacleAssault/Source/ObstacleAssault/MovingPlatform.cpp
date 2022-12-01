// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	
	StartLocation = GetActorLocation(); 


	FString Name = GetName();
	UE_LOG(LogTemp, Display, TEXT("BeginPlay : %s"), *Name); //C���� ���°� %f, %d -> Vector�� �������� �ȴ� 
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	MovePlatform(DeltaTime);
	RotatePlatform(DeltaTime);
}

void AMovingPlatform::MovePlatform(float DeltaTime)
{
	

	if (ShouldPlatformReturn())
	{
		FVector MoveDirection = PlatformVelocity.GetSafeNormal(); //GetSafeNormal ������ ���͸� ���������ʰ�, �� ���Ͱ� ���Ե� ���� ��ȯ ->const 
		StartLocation = StartLocation + MoveDirection * MovedDistance;
		SetActorLocation(StartLocation);
		PlatformVelocity = -PlatformVelocity;
	}
	else
	{
		FVector CurLocation = GetActorLocation(); 
		CurLocation = CurLocation + (PlatformVelocity * DeltaTime);
		SetActorLocation(CurLocation);
	}



	
}

void AMovingPlatform::RotatePlatform(float DeltaTime)
{
	FRotator CurrentRocation = GetActorRotation();

	AddActorLocalRotation(RotationVelocity * DeltaTime);
}

bool AMovingPlatform::ShouldPlatformReturn() const
{
	return GetDistanceMoved() > MovedDistance;
}

float AMovingPlatform::GetDistanceMoved() const
{
	return FVector::Dist(StartLocation, GetActorLocation());
}

