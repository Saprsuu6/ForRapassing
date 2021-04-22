#pragma once
#include "Header.h"
class Teewee : public IFigure
{
private:
	virtual int* Geometry() override;
public:
	Teewee();

	virtual ~Teewee();
};

inline Teewee::Teewee()
{
	_name = "Teewe";
	_color = 12;
	_figure = Geometry();
}

inline int* Teewee::Geometry()
{
	int* geometry = new int[16]
	{ 0,1,0,0,
	1,1,1,0,
	0,0,0,0,
	0,0,0,0 };

	return geometry;
}

inline Teewee::~Teewee()
{
	delete[] _figure;
}


