#pragma once
#include "Header.h"
class ClevelandZ : public IFigure
{
private:
	virtual int* Geometry() override;
public:
	ClevelandZ();

	virtual ~ClevelandZ();
};

inline ClevelandZ::ClevelandZ()
{
	_name = "ClevlandZ";
	_color = 10;
	_figure = Geometry();
}

inline int* ClevelandZ::Geometry()
{
	int* geometry = new int[16]
	{ 0,0,0,0,
	1,1,0,0,
	0,1,1,0,
	0,0,0,0 };

	return geometry;
}

inline ClevelandZ::~ClevelandZ()
{
	delete[] _figure;
}

