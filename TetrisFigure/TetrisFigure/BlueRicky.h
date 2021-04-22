#pragma once
#include "Header.h"
class BlueRicky : public IFigure
{
private:
	virtual int* Geometry() override;
public:
	BlueRicky();

	virtual ~BlueRicky();
};

inline BlueRicky::BlueRicky()
{
	_name = "BlueRicky";
	_color = 11;
	_figure = Geometry();
}

inline int* BlueRicky::Geometry()
{
	int* geometry = new int[16]
	{ 1,1,1,0,
	1,0,0,0,
	0,0,0,0,
	0,0,0,0 };

	return geometry;
}

inline BlueRicky::~BlueRicky()
{
	delete[] _figure;
}

