#pragma once
#include "Header.h"
class MilitaryFabric
{
public:
	virtual MilitaryForñe* CreateMilitary(const string& type, 
		unsigned int speed,
		unsigned int power,
		const string& path,
		MilitaryShow* show) const;
};

MilitaryForñe* MilitaryFabric::CreateMilitary(const string& type,
	unsigned int speed,
	unsigned int power,
	const string& path,
	MilitaryShow* show) const
{
	return new MilitaryForñe(type , speed, power, path, show);
}

