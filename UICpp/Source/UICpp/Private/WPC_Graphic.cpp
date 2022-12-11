// Fill out your copyright notice in the Description page of Project Settings.


#include "WPC_Graphic.h"

void UWPC_Graphic::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	//이벤트에 함수를 연결
	ComboBoxString->OnSelectionChanged.AddUniqueDynamic(this, &UWPC_Graphic::OnSelectionChangedDelegate);

	m.Add("High", 2);
	m.Add("mideum", 1);
	m.Add("Low", 0);

}

void UWPC_Graphic::OnSelectionChangedDelegate(FString Item, ESelectInfo::Type Type)
{
	switch (m[Item])
	{
	case 2:
		Quality(2);
		break;
	case 1:
		Quality(1);
		break;
	case 0:
		Quality(0);
		break;
	}
}

void UWPC_Graphic::Quality(int val)
{
	GEngine->GameUserSettings->SetTextureQuality(val);
	GEngine->GameUserSettings->SetShadingQuality(val);
	GEngine->GameUserSettings->SetShadowQuality(val);
	GEngine->GameUserSettings->SetReflectionQuality(val);
	GEngine->GameUserSettings->SetPostProcessingQuality(val);
	GEngine->GameUserSettings->SetGlobalIlluminationQuality(val);
	GEngine->GameUserSettings->SetFoliageQuality(val);
	GEngine->GameUserSettings->SetAntiAliasingQuality(val);
	GEngine->GameUserSettings->SetVisualEffectQuality(val);
	GEngine->GameUserSettings->SetViewDistanceQuality(val);
}