#pragma once
#include "Header.h"
class IFigure
{
protected:
	int* _figure = nullptr;
	int _color = 0;
	string _name;

	virtual int* Geometry() = 0;
public:
	int GetColour() const;
	const string& GetName() const;
	const int* GetFigure() const;

	virtual ~IFigure() = 0 {};
};

inline int IFigure::GetColour() const
{
	return _color;
}

inline const string& IFigure::GetName() const
{
	return _name;
}

inline const int* IFigure::GetFigure() const
{
	return _figure;
}

