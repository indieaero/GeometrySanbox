// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "SandboxPawn.h"

AMyGameModeBase::AMyGameModeBase()
{
	DefaultPawnClass = ASandboxPawn::StaticClass();
}
