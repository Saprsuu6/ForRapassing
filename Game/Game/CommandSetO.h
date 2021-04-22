#pragma once
#include "ICommand.h"
class CommandSetO : public ICommand
{
public:
	CommandSetO(int* field, const unsigned int x, const unsigned int y)
		: ICommand(field, x, y) {};

	virtual void Set() override;
};

inline void CommandSetO::Set()
{
	_field[_x + _y] = Figures::Null;
}
