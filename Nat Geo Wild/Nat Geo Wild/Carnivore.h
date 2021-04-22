#pragma once
#include "Header.h"
class Carnivore
{
private:
	unsigned int _power = 0;
	bool _life = false;
public:
	Carnivore() = default;
	Carnivore(const unsigned int power);

	bool GetLife() const;
	unsigned int GetPower() const;
	void Eat(Herbivore& herbivore);
};

inline Carnivore::Carnivore(const unsigned int power)
{
	_power = power;
	_life = true;
}

inline void Carnivore::Eat(Herbivore& herbivore)
{
	if (herbivore.GetWeight() < _power)
	{
		_power += 10;
	}
	else
	{
		_power -= 10;
	}
}

inline bool Carnivore::GetLife() const
{
	return _life;
}

inline unsigned int Carnivore::GetPower() const
{
	return _power;
}


