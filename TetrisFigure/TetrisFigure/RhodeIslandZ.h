#pragma once
#include "Header.h"
class RhodeIslandZ : public IFigure
{
private:
	virtual int* Geometry() override;
public:
	RhodeIslandZ();

	virtual ~RhodeIslandZ();
};

inline RhodeIslandZ::RhodeIslandZ()
{
	_name = "RhobetIsland";
	_color = 13;
	_figure = Geometry();
}

inline int* RhodeIslandZ::Geometry()
{
	int* geometry = new int[16]
	{ 0,0,0,0,
	0,0,1,1,
	0,1,1,0,
	0,0,0,0 };

	return geometry;
}

inline RhodeIslandZ::~RhodeIslandZ()
{
	delete[] _figure;
}

