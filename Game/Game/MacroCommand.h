#pragma once
#include "Header.h"
class MacroCommand
{
private:
	CommandSetO* _setO = nullptr;
	CommandSetX* _setX = nullptr;
public:
	MacroCommand(int* field, const unsigned x, const unsigned y);
	~MacroCommand();

	void DetectTurn(const int turn);
	void DetectTurnForUndo(int& turn);
};

inline MacroCommand::MacroCommand(int* field, const unsigned x, const unsigned y)
{
	_setO = new CommandSetO(field, x, y);
	_setX = new CommandSetX(field, x, y);
}

inline MacroCommand::~MacroCommand()
{
	delete _setO;
	delete _setX;
}

inline void MacroCommand::DetectTurn(const int turn)
{
	if (turn == 0) {
		_setO->Set();
	}
	else if (turn == 1) {
		_setX->Set();
	}
}

inline void MacroCommand::DetectTurnForUndo(int& turn)
{
	if (turn == 0) {
		_setO->Undo();
		turn++;
	}
	else if (turn == 1) {
		_setX->Undo();
		turn--;
	}
}