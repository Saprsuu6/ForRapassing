#pragma once
#include "Header.h"
class ICommand
{
protected:
	int* _field = nullptr;

	unsigned int _x = 0;
	unsigned int _y = 0;
public:
	ICommand(int* field, const unsigned int x, const unsigned int y);
	virtual ~ICommand() = 0 {};

	virtual void Set() = 0;
	virtual void Undo();
};

inline ICommand::ICommand(int* field, const unsigned int x, const unsigned int y)
{
	_x = x;
	_y = y;

	if (field != nullptr)
	{
		_field = field;
	}
}

inline void ICommand::Undo()
{
	_field[_x + _y] = Figures::Nothing;
}


