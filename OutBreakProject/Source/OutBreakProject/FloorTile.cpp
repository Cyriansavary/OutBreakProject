// Fill out your copyright notice in the Description page of Project Settings.


#include "FloorTile.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"

// Sets default values
AFloorTile::AFloorTile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");
	RootComponent = SceneComponent;

	FloorMesh = CreateDefaultSubobject<UStaticMeshComponent>("FloorMesh");
	FloorMesh->SetupAttachment(SceneComponent);

	LeftWall = CreateDefaultSubobject<UStaticMeshComponent>("LeftWall");
	LeftWall->SetupAttachment(SceneComponent);

	RightWall = CreateDefaultSubobject<UStaticMeshComponent>("RightWall");
	RightWall->SetupAttachment(SceneComponent);

	RightWallBlockBox = CreateDefaultSubobject<UBoxComponent>("RightWallBlockBox");
	RightWallBlockBox->SetupAttachment(SceneComponent);

	LeftWallBlockBox = CreateDefaultSubobject<UBoxComponent>("LeftWallBlockBox");
	LeftWallBlockBox->SetupAttachment(SceneComponent);

	Attachpoint = CreateDefaultSubobject<UArrowComponent>("Attachpoint");
	Attachpoint->SetupAttachment(SceneComponent);

	FloorTriggerBox = CreateDefaultSubobject<UBoxComponent>("FloorTriggerBox");
	FloorTriggerBox->SetupAttachment(SceneComponent);

	SpawnBox = CreateDefaultSubobject<UBoxComponent>("SpawnBox");
	SpawnBox->SetupAttachment(SceneComponent);

}

// Called when the game starts or when spawned
void AFloorTile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFloorTile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

