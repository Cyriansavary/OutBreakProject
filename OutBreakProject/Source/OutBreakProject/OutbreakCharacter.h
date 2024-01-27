// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "OutbreakCharacter.generated.h"

UCLASS()
class OUTBREAKPROJECT_API AOutbreakCharacter : public ACharacter
{
	GENERATED_BODY()

private:
		

	
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraArm;

	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* Camera;

	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class UFloatingPawnMovement* PawnMovement;

	UPROPERTY(EditAnyWhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class USkeletalMeshComponent* StaticMesh;

	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class USkeletalMeshComponent* WeaponMesh;

	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	bool bIsAiming;
	
	UPROPERTY(EditAnyWhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class UAnimMontage* FireMontageIdle;

	UPROPERTY(EditAnyWhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class UAnimMontage* FireMontageAiming;


public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Assets")
	class UParticleSystem* DeathParticle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Assets")
	class USoundBase* DeathSound;

	UFUNCTION(BlueprintCallable)
	void Death();

	UFUNCTION(BlueprintCallable)
	void Turn(float Value);

	UFUNCTION(BlueprintCallable)
	void lookUp(float Value);



	// Sets default values for this character's properties
	AOutbreakCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnDeath();

	UFUNCTION()
	void MoveRight(float Value);

	UFUNCTION()
	void MoveDown();

	UFUNCTION()
	void IsAiming();

	UFUNCTION()
	void IsNotAiming();

	UFUNCTION()
	void Shoot();


	UPROPERTY()
	FTimerHandle RestartTimerHandle;

	UPROPERTY()
	bool bIsDead;



public:
	UFUNCTION()
	void AddCoin();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
