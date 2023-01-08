// Fill out your copyright notice in the Description page of Project Settings.


#include "Tank.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "Kismet/GameplayStatics.h"


ATank::ATank()
{
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm->SetupAttachment(RootComponent);
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
}

void ATank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
<<<<<<< HEAD

	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &ATank::Move);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ATank::Turn);
}

void ATank::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (PlayerContorller)
	{
		FHitResult HitResult;
		PlayerContorller->GetHitResultUnderCursor(
			ECollisionChannel::ECC_Visibility,
			false,
			HitResult);

		DrawDebugSphere(
			GetWorld(),
			HitResult.ImpactPoint,
			25.f,
			12,
			FColor::Red,
			true,
			-1.f);
	}
}

void ATank::BeginPlay()
{
	Super::BeginPlay();

	PlayerContorller = Cast<APlayerController>(GetController());
	//PlayerContorller->GetHitResultUnderCursor();
=======

	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &ATank::Move);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ATank::Turn);
}

void ATank::BeginPlay()
{
	Super::BeginPlay();
>>>>>>> main
}

void ATank::Move(float Value)
{
<<<<<<< HEAD
	FVector DeltaLocation = FVector::ZeroVector;
	DeltaLocation.X = Value * Speed * UGameplayStatics::GetWorldDeltaSeconds(this);
	AddActorLocalOffset(DeltaLocation,true);
=======
	
	FVector DeltaVector = FVector::ZeroVector;
	DeltaVector.X = Value*Speed* UGameplayStatics::GetWorldDeltaSeconds(this);
	AddActorLocalOffset(DeltaVector);
>>>>>>> main
}

void ATank::Turn(float Value)
{
<<<<<<< HEAD
	FRotator DeltaRotation=FRotator::ZeroRotator;
	DeltaRotation.Yaw = Value * TurnRate * UGameplayStatics::GetWorldDeltaSeconds(this);
	AddActorLocalRotation(DeltaRotation,true);
=======
	FRotator DeltaRotate = FRotator::ZeroRotator;
	DeltaRotate.Yaw = Value * TrunRate * UGameplayStatics::GetWorldDeltaSeconds(this);
	AddActorLocalRotation(DeltaRotate,true); 
>>>>>>> main
}
