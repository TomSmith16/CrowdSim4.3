// Fill out your copyright notice in the Description page of Project Settings.

#include "CrowdSim.h"
#include "PMME.h"



// Sets default values for this component's properties
UPMME::UPMME()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPMME::BeginPlay()
{
	Super::BeginPlay();


	if (extraversion > 100)
		extraversion = 100;

	//Sensing vs Intuition
	if (intuition > 100)
		intuition = 100;

	//Thinking vs Feeling
	if (feeling > 100)
		feeling = 100;

	//Judging vs Perceiving 
	if (perceiving > 100)
		perceiving = 100;

	// ...
	
}


// Called every frame
void UPMME::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );
	if (GEngine)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "Debug Message");
	}

	// ...
}

//Personality
void UPMME::Personality()
{
	//Introversion vs Extroversion 

}

//Mood
void UPMME::Mood()
{

	//Arousal vs Sleepiness

	//Misery vs Pleasure

}

//MME Second layer of plutchik
void UPMME::MomentaryEmotion()
{
	
	//Joy vs Sadness

	//Trust vs Disgust

	//Anticipation vs Surprise

	//Anger vs Fear

}
