// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "PMME.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CROWDSIM_API UPMME : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPMME();

	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

	virtual void Personality();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int extraversion;	//Max is extrovert, 0 is introvert 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int intuition;		//Max is intution, 0 is sensing
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int feeling;		//Max is feeling, 0 is thinking
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int perceiving;		//Max is perceiving, 0 is judging.

	virtual void Mood();

	virtual void MomentaryEmotion();

	
};
