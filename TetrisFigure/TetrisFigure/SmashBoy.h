#pragma once
#include "Header.h"
class SmashBoy : public IFigure
{
private:
	virtual int* Geometry() override;
public:
	SmashBoy();

	virtual ~SmashBoy();
};

inline SmashBoy::SmashBoy()
{
	_name = "SmashBoy";
	_color = 15;
	_figure = Geometry();
}

inline int* SmashBoy::Geometry()
{
	int* geometry = new int[16]
	{ 1,1,0,0,
	1,1,0,0,
	0,0,0,0,
	0,0,0,0 };

	return geometry;
}

inline SmashBoy::~SmashBoy()
{
	delete[] _figure;
}

