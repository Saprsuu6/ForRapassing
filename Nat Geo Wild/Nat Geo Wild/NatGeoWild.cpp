#include "Header.h"

NatGeoWild::NatGeoWild(Continent* continent)
{
	_continent = continent;

	_herbivore = new Herbivore[amountAnimals];
	_carnivore = new Carnivore[amountAnimals];

	for (int i = 0; i < amountAnimals; i++)
	{
		_herbivore[i] = *_continent->CreateHerbivore();
		_carnivore[i] = *_continent->CreateCarbivore();
	}
}

NatGeoWild::~NatGeoWild()
{
	delete _continent;

	delete[] _herbivore;
	delete[] _carnivore;
}

void NatGeoWild::MealsHerbivores()
{
	for (int i = 0; i < 3; i++)
	{
		_herbivore[i].EatGrase();
	}
}

void NatGeoWild::NutritionCarnivores()
{
	for (int i = 0; i < 3; i++)
	{
		_carnivore[i].Eat(_herbivore[i]);
	}
}

void NatGeoWild::StartLifeCycle()
{
	MealsHerbivores();
	NutritionCarnivores();
}

void NatGeoWild::ShowAnimalsState(const ShowAnimalInfo* show) const
{
	for (int i = 0; i < amountAnimals; i++) {
		show->ShowCarbivore(_herbivore[i]);
		show->ShowHarbivore(_carnivore[i]);

		cout << endl;
	}
}