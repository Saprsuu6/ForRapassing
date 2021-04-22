#pragma once
#include "Header.h"
class Hero : public IFigure
{
private:
	virtual int* Geometry() override;
public:
	Hero();

	virtual ~Hero();
};

inline Hero::Hero()
{
	_name = "OrangeRicky";
	_color = 9;
	_figure = Geometry();
}

inline int* Hero::Geometry()
{
	int* geometry = new int[16]
	{ 1,1,1,1,
	0,0,0,0,
	0,0,0,0,
	0,0,0,0 };

	return geometry;
}

inline Hero::~Hero()
{
	delete[] _figure;
}


