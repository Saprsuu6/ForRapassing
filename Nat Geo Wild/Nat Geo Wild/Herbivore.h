#pragma once
#include "Header.h"
class Herbivore
{
private:
	unsigned int _weight = 0;
	bool _life = false;
public:
	Herbivore() = default;
	Herbivore(const unsigned int weight);

	void EatGrase();
	bool GetLife() const;
	unsigned int GetWeight() const;
};

inline Herbivore::Herbivore(const unsigned int weight)
{
	_weight = weight;
	_life = true;
}

inline void Herbivore::EatGrase()
{
	_weight += 10;
}

inline unsigned int Herbivore::GetWeight() const
{
	return _weight;
}

inline bool Herbivore::GetLife() const
{
	return _life;
}

