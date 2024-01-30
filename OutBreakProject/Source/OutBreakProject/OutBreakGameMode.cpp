// Fill out your copyright notice in the Description page of Project Settings.


#include "OutBreakGameMode.h"

void AOutBreakGameMode::CreateInitialFloorTiles()
{
	AddFloorTile(false);

	for (int i = 0; i < NumInitialFloorTiles; i++)
	{
		AddFloorTile(true);
	}
}

AFloorTile* AOutBreakGameMode::AddFloorTile(const bool bSpawnItems)
{
	UWorld* World = GetWorld();

	if (World)
	{
		AFloorTile* Tile = World->SpawnActor<AFloorTile>(FloorTileClass, NextSpawnPoint);

		if (Tile)
		{
			if (bSpawnItems)
			{
				//Tile->SpawnItems();
			}
			NextSpawnPoint = Tile->GetAttachTransform();
		}
		return Tile;
	}
	return nullptr;
}

void AOutBreakGameMode::BeginPlay()
{
	CreateInitialFloorTiles();
}
