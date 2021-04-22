#pragma once
#include "Header.h"
class Continent
{
public:
	virtual Herbivore* CreateHerbivore() const = 0;
	virtual Carnivore* CreateCarbivore() const = 0;
};

