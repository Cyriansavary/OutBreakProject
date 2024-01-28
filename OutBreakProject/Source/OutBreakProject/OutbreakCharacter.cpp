// Fill out your copyright notice in the Description page of Project Settings.


#include "OutbreakCharacter.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/EngineTypes.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
AOutbreakCharacter::AOutbreakCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("PawnMovement"));

	CameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraArm"));
	CameraArm->TargetArmLength = 0.f;
	CameraArm->SocketOffset = FVector(0.f, 0.f, 100.f);
	CameraArm->bUsePawnControlRotation = true;
	CameraArm->SetupAttachment(GetRootComponent());

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->bUsePawnControlRotation = true;
	Camera->SetupAttachment(CameraArm, USpringArmComponent::SocketName);

	StaticMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(Camera);

	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
	WeaponMesh->SetupAttachment(StaticMesh, "PistolSocket");

	bIsAiming = false;
	bIsDead = false;

	FirePistol = CreateDefaultSubobject<UAnimationAsset>(TEXT("FirePistol"));

}

// Called when the game starts or when spawned
void AOutbreakCharacter::BeginPlay()
{
	Super::BeginPlay();

	
}

void AOutbreakCharacter::OnDeath()
{
	bIsDead = false;
	if (RestartTimerHandle.IsValid())
	{
		GetWorldTimerManager().ClearTimer(RestartTimerHandle);
	}
	UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), TEXT("RestartLevel"));
}

void AOutbreakCharacter::MoveRight(float Value)
{
	PawnMovement->AddInputVector(GetActorRightVector() * Value);
}

void AOutbreakCharacter::MoveDown()
{
}

void AOutbreakCharacter::AddCoin()
{
}

// Called every frame
void AOutbreakCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FRotator ControlRotation = GetControlRotation();
	ControlRotation.Pitch = 0.f;
	ControlRotation.Roll = 0.f;

	AddMovementInput(ControlRotation.Vector());

}

// Called to bind functionality to input
void AOutbreakCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &AOutbreakCharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Released, this, &AOutbreakCharacter::StopJumping);

	PlayerInputComponent->BindAction(TEXT("Aim"), IE_Pressed, this, &AOutbreakCharacter::IsAiming);
	PlayerInputComponent->BindAction(TEXT("Aim"), IE_Released, this, &AOutbreakCharacter::IsNotAiming);

	PlayerInputComponent->BindAction(TEXT("Shoot"), IE_Pressed, this, &AOutbreakCharacter::Shoot);

	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &AOutbreakCharacter::MoveRight);
	PlayerInputComponent->BindAction(TEXT("MoveDown"), IE_Pressed, this, &AOutbreakCharacter::MoveDown);

	PlayerInputComponent->BindAxis("Turn", this, &AOutbreakCharacter::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &AOutbreakCharacter::lookUp);

}

void AOutbreakCharacter::Death()
{
}

void AOutbreakCharacter::Turn(float Value)
{
		AddControllerYawInput(Value);
}

void AOutbreakCharacter::lookUp(float Value)
{
		AddControllerPitchInput(Value + GetWorld()->GetDeltaSeconds());
}

void AOutbreakCharacter::IsAiming()
{
	bIsAiming = true;
	GetCharacterMovement()->MaxWalkSpeed = 200.f;
}

void AOutbreakCharacter::IsNotAiming()
{
	bIsAiming = false;
	GetCharacterMovement()->MaxWalkSpeed = 600.f;
}

void AOutbreakCharacter::Shoot()
{
	UE_LOG(LogTemp, Warning, TEXT("Shoot"));
	WeaponMesh->PlayAnimation(FirePistol,false);

	Linetracebyc
	
}


