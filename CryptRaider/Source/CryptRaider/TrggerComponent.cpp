// Fill out your copyright notice in the Description page of Project Settings.


#include "TrggerComponent.h"


UTrggerComponent::UTrggerComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UTrggerComponent::BeginPlay()
{
	Super::BeginPlay();

}
void UTrggerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	AActor* Actor=GetAcceptableActor();
	if (Actor)
	{
		UPrimitiveComponent* Component = Cast<UPrimitiveComponent>(Actor->GetRootComponent());
		if (Component != nullptr)
		{
			Component->SetSimulatePhysics(false);
		}
		Actor->AttachToComponent(this, FAttachmentTransformRules::KeepWorldTransform);
		Mover->SetShouldMove(true);
	}
	else
	{
		Mover->SetShouldMove(false);
	}
}

void UTrggerComponent::SetMover(UMover* NewMover)
{
	if (NewMover != nullptr)
	{
		Mover = NewMover;
	}
}

AActor* UTrggerComponent::GetAcceptableActor() const
{
	AActor* ReturnAtor = nullptr;
	TArray<AActor*> Actors;
	GetOverlappingActors(Actors);
	for (auto Actor : Actors)
	{
		bool HasAcceptableTag = Actor->ActorHasTag(AcceptableActorTag);
		bool IsGrabbed = Actor->ActorHasTag("Grabbed");
		if (HasAcceptableTag && !IsGrabbed)
		{
			 return Actor;
		}
	}
	return nullptr;
}
