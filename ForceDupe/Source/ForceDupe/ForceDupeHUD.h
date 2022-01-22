// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ForceDupeHUD.generated.h"

UCLASS()
class AForceDupeHUD : public AHUD
{
	GENERATED_BODY()

public:
	AForceDupeHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

