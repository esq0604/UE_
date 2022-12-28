// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzlePlatformsGameInstance.h"

#include "Engine/Engine.h"

#include "Blueprint/UserWidget.h"
#include "GameFramework/PlayerController.h"

UPuzzlePlatformsGameInstance::UPuzzlePlatformsGameInstance(const FObjectInitializer& ObjectInitializer)
{
	UE_LOG(LogTemp, Warning, TEXT("Constructor"));
	ConstructorHelpers::FClassFinder<UUserWidget> MenuBPClass(TEXT("/Game/BluePrint/WBP_MainMenu"));
	if (!ensure(MenuBPClass.Class != nullptr)) return;
	MenuClass = MenuBPClass.Class;

}

void UPuzzlePlatformsGameInstance::Init()
{
	UE_LOG(LogTemp, Warning, TEXT("Found Class %s"), *MenuClass->GetName());

}

void UPuzzlePlatformsGameInstance::LoadMenu()
{
	if (!ensure(MenuClass != nullptr)) return;

	UUserWidget* Menu=CreateWidget(this, MenuClass);
	if (!ensure(Menu != nullptr)) return;
	Menu->AddToViewport();

	APlayerController* PlayerController = GetFirstLocalPlayerController();
	if (!ensure(PlayerController != nullptr)) return;

	struct FInputModeUIOnly InputMode;
	InputMode.SetWidgetToFocus(Menu->TakeWidget());
	InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);

	PlayerController->SetInputMode(InputMode);
	PlayerController->bShowMouseCursor=true;
}

void UPuzzlePlatformsGameInstance::Host()
{
	UEngine* Engine = GetEngine();
	if (!ensure(Engine != nullptr)) return;

	Engine->AddOnScreenDebugMessage(0, 2, FColor::Green, TEXT("Hostring"));

	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;

	World->ServerTravel("/Game/ThirdPerson/Maps/ThirdPersonMap?listen");
}

void UPuzzlePlatformsGameInstance::Join(const FString& Address)
{
	UEngine* Engine = GetEngine();
	if (!ensure(Engine != nullptr)) return;

	Engine->AddOnScreenDebugMessage(0, 5, FColor::Green, FString::Printf(TEXT("Join %s"),*Address));

	APlayerController* PlayerController = GetFirstLocalPlayerController();
	if (!ensure(PlayerController != nullptr)) return;
	PlayerController->ClientTravel(Address, TRAVEL_Absolute);
	
}
