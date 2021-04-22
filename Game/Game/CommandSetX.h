#pragma once
#include "Header.h"
class CommandSetX : public ICommand
{
public:
	CommandSetX(int* field, const unsigned int x, const unsigned int y)
		: ICommand(field, x, y) {};

	virtual void Set() override;
};

inline void CommandSetX::Set()
{
	_field[_x + _y] = Figures::Cross;
}
