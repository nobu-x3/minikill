// Fill out your copyright notice in the Description page of Project Settings.


#include "Sabre.h"
#include "GameplayTagsModule.h"

// Sets default values
ASabre::ASabre()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ActionComponent = CreateDefaultSubobject<UMActionComponent>(TEXT("Action Component"));
	AttributeComponent = CreateDefaultSubobject<UMAttributeComponent>(TEXT("Attribute Component"));
}

// Called when the game starts or when spawned
void ASabre::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASabre::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

