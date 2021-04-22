#pragma once
#include "Header.h"
class OrangeRicky : public IFigure
{
private:
	virtual int* Geometry() override;
public:
	OrangeRicky();

	virtual ~OrangeRicky();
};

inline OrangeRicky::OrangeRicky()
{
	_name = "BlueRicky";
	_color = 14;
	_figure = Geometry();
}

inline int* OrangeRicky::Geometry()
{
	int* geometry = new int[16]
	{ 0,1,1,1,
	0,0,0,1,
	0,0,0,0,
	0,0,0,0};

	return geometry;
}

OrangeRicky::~OrangeRicky()
{
	delete[] _figure;
}

