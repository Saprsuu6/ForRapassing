#pragma once
#include "Header.h"
class Eurasia : public Continent
{
public:
	virtual Herbivore* CreateHerbivore() const override;
	virtual Carnivore* CreateCarbivore() const override;
};

inline Herbivore* Eurasia::CreateHerbivore() const
{
	return new Herbivore(rand() % 900 + 100);
}

inline Carnivore* Eurasia::CreateCarbivore() const
{
	return new Carnivore(rand() % 900 + 100);
}

