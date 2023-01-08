// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenu.h"
#include "Components/Button.h"
#include "Components/WidgetSwitcher.h"
#include "Components/EditableTextBox.h"
#include "GameFramework/PlayerController.h"


bool UMainMenu::Initialize()
{
	bool Success = Super::Initialize();
	if (!Success) return false;

	if (!ensure(HostButton != nullptr)) return false;
	HostButton->OnClicked.AddDynamic(this,&UMainMenu::HostServer);
		
	if (JoinButton != nullptr)
		JoinButton->OnClicked.AddDynamic(this, &UMainMenu::OpenJoinMenu);

	if(CancleJoinMenuButton !=nullptr)
		CancleJoinMenuButton->OnClicked.AddDynamic(this, &UMainMenu::OpenMainMenu);

	if (!ensure(QuitButton != nullptr)) return false;
	QuitButton->OnClicked.AddDynamic(this, &UMainMenu::QuitPressed);

	if (InputAddress != nullptr)
		InputAddress->OnClicked.AddDynamic(this, &UMainMenu::JoinServer);

	return true;
}

void UMainMenu::HostServer()
{
	UE_LOG(LogTemp, Warning, TEXT("Host OnClicked / host a server"));
	if (mMenuInterface != nullptr)
	{
		mMenuInterface->Host();
	}
}

void UMainMenu::OpenJoinMenu()
{
	if (MenuSwither == nullptr) return;
	if (JoinMenu == nullptr) return;
	MenuSwither->SetActiveWidget(JoinMenu);
	
}

void UMainMenu::OpenMainMenu()
{
	if (MenuSwither == nullptr) return;
	if (MainMenu == nullptr) return;
	MenuSwither->SetActiveWidget(MainMenu);

}

void UMainMenu::JoinServer()
{
	if (mMenuInterface == nullptr) return;
	if (IPAddressField == nullptr) return;
	const FString& Address = IPAddressField->GetText().ToString();
	mMenuInterface->Join(Address);
}

void UMainMenu::QuitPressed()
{
	UWorld* World = GetWorld();
	if (World == nullptr) return;

	APlayerController* PlayerController = World->GetFirstPlayerController();
	if (!ensure(PlayerController != nullptr)) return;
	
	PlayerController->ConsoleCommand("quit");
}
