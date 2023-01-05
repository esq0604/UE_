// Fill out your copyright notice in the Description page of Project Settings.


#include "InGameMenu.h"
#include "Components/Button.h"

bool UInGameMenu::Initialize()
{
	bool Success = Super::Initialize();
	if(!Success) return false;

	if (!ensure(CancleButton != nullptr)) return false;	
	CancleButton->OnClicked.AddDynamic(this, &UInGameMenu::CancleInGameMenu); 
	
	if (!ensure(QuitButton != nullptr)) return false;
	QuitButton->OnClicked.AddDynamic(this, &UInGameMenu::QuitInGameMenu);

	
	return true;
}

void UInGameMenu::CancleInGameMenu()
{/* �̰ź��� �׳� ����Ŭ������ Teardownȣ���ϴ°� ����
	if (!ensure(mMenuInterface != nullptr)) return;
	mMenuInterface->Cancle();*/
	TearDown();

}

void UInGameMenu::QuitInGameMenu()
{
	if (!ensure(mMenuInterface != nullptr)) return;
	TearDown();
	mMenuInterface->LoadMainMenu();

}
