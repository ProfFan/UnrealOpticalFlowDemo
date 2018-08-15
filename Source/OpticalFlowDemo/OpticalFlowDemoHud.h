// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "OpticalFlowDemoHud.generated.h"

UCLASS(config = Game)
class AOpticalFlowDemoHud : public AHUD
{
	GENERATED_BODY()

public:
	AOpticalFlowDemoHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface

};
