// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "OpticalFlowDemoGameMode.h"
#include "OpticalFlowDemoPawn.h"
#include "OpticalFlowDemoHud.h"

AOpticalFlowDemoGameMode::AOpticalFlowDemoGameMode()
{
	DefaultPawnClass = AOpticalFlowDemoPawn::StaticClass();
	HUDClass = AOpticalFlowDemoHud::StaticClass();
}
