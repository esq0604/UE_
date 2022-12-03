// Fill out your copyright notice in the Description page of Project Settings.


#include "Grabber.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();

	
	// ... 
	
}


// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UPhysicsHandleComponent* PhysicsHandle = GetPhysiscsHandle();
	
	if (PhysicsHandle &&PhysicsHandle->GetGrabbedComponent())
	{
		FVector TargetLocation = GetComponentLocation() + GetForwardVector() * HoldDistance;
		PhysicsHandle->SetTargetLocationAndRotation(TargetLocation, GetComponentRotation());
	}
}
 
void UGrabber::Release()
{
	UPhysicsHandleComponent* PysicsHandle = GetPhysiscsHandle();
	
	if (PysicsHandle  && PysicsHandle->GetGrabbedComponent()) 
	{
		PysicsHandle->GetGrabbedComponent()->GetOwner()->Tags.Remove("Grabbed");
		PysicsHandle->GetGrabbedComponent()->WakeAllRigidBodies();
		PysicsHandle->ReleaseComponent();
	}
}


void UGrabber::Grab()
{


	UPhysicsHandleComponent* PhysicsHandle = GetPhysiscsHandle();
	FHitResult HitResult;

	
	if (GetGrabbableInReach(HitResult))
	{
		UPrimitiveComponent* HitComponent = HitResult.GetComponent();
		HitComponent->WakeAllRigidBodies();
		HitResult.GetActor()->Tags.Add("Grabbed");
		PhysicsHandle->GrabComponentAtLocationWithRotation(
			HitResult.GetComponent(),
			NAME_None,
			HitResult.ImpactPoint,
			GetComponentRotation()
		);
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("No Hit Result"));
	}
}


bool UGrabber::GetGrabbableInReach(FHitResult& OutHitResult) const
{
	FVector Start = GetComponentLocation();
	FVector End = Start + GetForwardVector() * MaxGrapDistance;
	DrawDebugLine(GetWorld(), Start, End, FColor::Red);
	DrawDebugSphere(GetWorld(), End, 10, 10, FColor::Blue, false, 5);

	FCollisionShape Sphere = FCollisionShape::MakeSphere(GrabRadius);
	return GetWorld()->SweepSingleByChannel(
		OutHitResult,
		Start,
		End,
		FQuat::Identity, //FQuct::Identity - 없음(회전)
		ECC_GameTraceChannel2,
		Sphere
	);

	
}

UPhysicsHandleComponent* UGrabber::GetPhysiscsHandle() const
{
	UPhysicsHandleComponent* Result = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();

	if (Result == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("핸들 컴포넌트 nullptr"));
	}
	return Result;

}

