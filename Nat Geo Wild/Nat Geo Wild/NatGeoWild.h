#pragma once
class NatGeoWild
{
private:
	const int amountAnimals = 10;

	Herbivore* _herbivore = nullptr;
	Carnivore* _carnivore = nullptr;
	
	Continent* _continent = nullptr;

	void MealsHerbivores();
	void NutritionCarnivores();
public:
	NatGeoWild(Continent* continent);
	~NatGeoWild();

	void StartLifeCycle();
	void ShowAnimalsState(const ShowAnimalInfo* show) const;
};

