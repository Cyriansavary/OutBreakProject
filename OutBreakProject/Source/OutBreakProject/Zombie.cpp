// Fill out your copyright notice in the Description page of Project Settings.


#include "Zombie.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/CharacterMovementComponent.h"


// Sets default values
AZombie::AZombie()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bIsDead = false;

	DeathMontage = CreateDefaultSubobject<UAnimMontage>(TEXT("DeathMontage"));

	this->Tags.Add(FName("Zombie"));

}

// Called when the game starts or when spawned
void AZombie::BeginPlay()
{
	Super::BeginPlay();
	
	
}



// Called every frame
void AZombie::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AZombie::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

float AZombie::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	if (Health <= 0)
	{
		Death();
	}
	else
	{
		Health -= DamageAmount;
		if (Health <= 0)
		{
			Death();
		}
		else
		{
			PlayAnimMontage(HitMontage);
		}
	}

	return Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);
}
void AZombie::Death()
{
	if (!bIsDead)
	{

		bIsDead = true;
		GetCharacterMovement()->StopMovementImmediately();
		GetCharacterMovement()->DisableMovement();
		PlayAnimMontage(DeathMontage);	
		this->SetActorEnableCollision(false);
	}
		
	
}
