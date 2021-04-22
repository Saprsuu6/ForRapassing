#pragma once
#include "Header.h"
class Africa : public Continent
{
public:
	virtual Herbivore* CreateHerbivore() const override;
	virtual Carnivore* CreateCarbivore() const override;
};

inline Herbivore* Africa::CreateHerbivore() const
{
	return new Herbivore(rand() % 900 + 100);
}

inline Carnivore* Africa::CreateCarbivore() const
{
	return new Carnivore(rand() % 900 + 100);
}
