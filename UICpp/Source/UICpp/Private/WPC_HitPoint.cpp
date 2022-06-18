// Fill out your copyright notice in the Description page of Project Settings.


#include "WPC_HitPoint.h"

void UWPC_HitPoint::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	HPMax->TextDelegate.BindDynamic(this, &UWPC_HitPoint::BindHPMax);
	HPNow->TextDelegate.BindDynamic(this, &UWPC_HitPoint::BindHPNow);
}

FText UWPC_HitPoint::BindHPMax()
{
	FText ret = FText::AsNumber(HMaxVal);
	return ret;
}

FText UWPC_HitPoint::BindHPNow()
{
	FText ret = FText::AsNumber(HNowVal);
	return ret;
}

bool UWPC_HitPoint::HPFillChange()
{
	if (HOldVal > HNowVal)//현재 체력이 이전 체력보다 낮을때 발동(이후 체력 회복 기능을 고려)
	{
		//변한 체력을 최대 체력으로 나눈뒤 프로그래스 바에 세팅
		float val = (double)HNowVal / (double)HMaxVal;
		FillFront->SetPercent(val);
	}

	if (HNowVal <= 0)
	{
		return true;
	}
	else
	{
		//피격이 0.8초이내로 들어올 경우 피격을 참으로 유지하기 위해 리트리거 딜레이를 사용
		FLatentActionInfo LAM(1,1,L"HitLam",this);
		Hit = true;
		UKismetSystemLibrary::RetriggerableDelay(this, 0.8f, LAM);
		return false;
	}
}

void UWPC_HitPoint::EnergyFillChange()
{
	//변한 에너지를 최대 에너지로 나눈뒤 프로그래스 바에 세팅
		float val = (double)ENowVal / (double)EMaxVal;
		FillEnergy->SetPercent(val);
}

void UWPC_HitPoint::HitLAM()
{
	Hit = false;
	FLatentActionInfo DLAM(2, 2, L"HitDelay", this);
	if (FillBack->Percent > (double)HNowVal / (double)HMaxVal)
	{
		//체력 감소에 딜레이를 줘 부드러운 감소효과을 얻음
		UKismetSystemLibrary::Delay(this, 0.005f, DLAM);
	}
}

void UWPC_HitPoint::HitDelay()
{
	float val = (double)(HOldVal - 1) / (double)HMaxVal;
	FillBack->SetPercent(val);
	HOldVal = HOldVal - 1;
	//체력감소 표현중 피격이 일어나면 중단
	if (Hit == false)
	{
		HitLAM();
	}
}