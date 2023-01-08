// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzlePlatformsGameInstance.h"

#include "Engine/Engine.h"

#include "MenuSystem/MainMenu.h"
#include "MenuSystem/MenuWidget.h"
#include "MenuSystem/InGameMenu.h"
#include "Blueprint/UserWidget.h"
#include "GameFramework/PlayerController.h"

UPuzzlePlatformsGameInstance::UPuzzlePlatformsGameInstance(const FObjectInitializer& ObjectInitializer)
{
	UE_LOG(LogTemp, Warning, TEXT("Constructor"));
	ConstructorHelpers::FClassFinder<UUserWidget> MenuBPClass(TEXT("/Game/BluePrint/WBP_MainMenu"));
	if (!ensure(MenuBPClass.Class != nullptr)) return;
	
	ConstructorHelpers::FClassFinder<UUserWidget> InGameMenuBPClass(TEXT("/Game/BluePrint/WBP_InGameMenu"));
	if (InGameMenuBPClass.Class == nullptr) return;

	MenuClass = MenuBPClass.Class;
	InGameMenuClass = InGameMenuBPClass.Class;

}

void UPuzzlePlatformsGameInstance::Init()
{
	UE_LOG(LogTemp, Warning, TEXT("Found Class %s"), *MenuClass->GetName());

}

void UPuzzlePlatformsGameInstance::LoadMenu()
{
	if (!ensure(MenuClass != nullptr)) return;
	
	Menu=CreateWidget<UMainMenu>(this, MenuClass);
	if (!ensure(Menu != nullptr)) return;
	Menu->Setup();
	Menu->SetMenuInterface(this);
}

void UPuzzlePlatformsGameInstance::InGameLoadMenu()
{
	if (!ensure(MenuClass != nullptr)) return;
	InGameMenu = CreateWidget<UInGameMenu>(this, InGameMenuClass);
	if (!ensure(InGameMenu != nullptr)) return;

	UE_LOG(LogTemp, Warning, TEXT("InGameLoadMenu"));
	InGameMenu->Setup();
	InGameMenu->SetMenuInterface(this);

}

void UPuzzlePlatformsGameInstance::Host()
{
	if (Menu != nullptr)
	{
		Menu->TearDown();
	}
	UEngine* Engine = GetEngine();
	if (!ensure(Engine != nullptr)) return;

	Engine->AddOnScreenDebugMessage(0, 2, FColor::Green, TEXT("Hostring"));

	UWorld* World = GetWorld();
	if (!ensure(World != nullptr)) return;

	World->ServerTravel("/Game/ThirdPerson/Maps/ThirdPersonMap?listen");
}

void UPuzzlePlatformsGameInstance::Join(const FString& Address)
{
	if (Menu != nullptr)
	{
		Menu->TearDown();
	}
	UEngine* Engine = GetEngine();
	if (!ensure(Engine != nullptr)) return;

	Engine->AddOnScreenDebugMessage(0, 5, FColor::Green, FString::Printf(TEXT("Join %s"),*Address));

	APlayerController* PlayerController = GetFirstLocalPlayerController();
	if (!ensure(PlayerController != nullptr)) return;
	PlayerController->ClientTravel(Address, TRAVEL_Absolute);
	
}

void UPuzzlePlatformsGameInstance::LoadMainMenu()
{
	//Server면 모든 플레이어를 MainMenu로 대려감 -> ClientTravel을 사용하는것이 맞음 .
	APlayerController* PlayerController = GetFirstLocalPlayerController();
	if (!ensure(PlayerController != nullptr)) return;
	PlayerController->ClientTravel("/Game/Map/MainMenu", TRAVEL_Absolute);
}


