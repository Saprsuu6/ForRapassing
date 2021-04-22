#pragma once
#include "Header.h"
class MilitaryFabric
{
public:
	virtual MilitaryFor�e* CreateMilitary(const string& type, 
		unsigned int speed,
		unsigned int power,
		const string& path,
		MilitaryShow* show) const;
};

MilitaryFor�e* MilitaryFabric::CreateMilitary(const string& type,
	unsigned int speed,
	unsigned int power,
	const string& path,
	MilitaryShow* show) const
{
	return new MilitaryFor�e(type , speed, power, path, show);
}

