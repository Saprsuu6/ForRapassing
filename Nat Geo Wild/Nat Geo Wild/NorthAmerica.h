#pragma once
#include "Header.h"
class NorthAmerica : public Continent
{
public:
	virtual Herbivore* CreateHerbivore() const override;
	virtual Carnivore* CreateCarbivore() const override;
};

inline Herbivore* NorthAmerica::CreateHerbivore() const
{
	return new Herbivore(rand() % 900 + 100);
}

inline Carnivore* NorthAmerica::CreateCarbivore() const
{
	return new Carnivore(rand() % 900 + 100);
}

