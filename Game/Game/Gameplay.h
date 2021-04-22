#pragma once
#include "Header.h"
class Gameplay
{
private:
	stack<MacroCommand*> _comandsStack;
	int* _field = nullptr;

	ShowField* _show = nullptr;
	EnterCoords* _enter = nullptr;
public:
	Gameplay();

	void Play();
	void Undo(int& amount);

	static const int fieldSize;
};

inline Gameplay::Gameplay()
{
	_field = new int[9];
	for (int i = 0; i < 9; i++)
	{
		_field[i] = 0;
	}


	_show = new ShowField(_field);
	_enter = new EnterCoords(_field);
}

inline void Gameplay::Play()
{
	int counter = 0;

	while (true)
	{
		for (int i = 0; i < 2; i++)
		{
			if (i == 0) {
				cout << "Turn: Player 1" << endl;
			}
			else if (i == 1) {
				cout << "Turn: Player 2" << endl;
			}

			_enter->EnterCorrds();
			MacroCommand* comand = new MacroCommand(_field, _enter->GetX(), _enter->GetY());
			comand->DetectTurn(i);

			_show->Show();

			_comandsStack.push(comand);

			if (counter == 5) {
				int amount = 2;
				int temp = i;

				if (_comandsStack.size() >= amount) {
					for (int j = 0; j < amount; j++) {
						Undo(temp);
					}
				}
			}

			_show->Show();

			counter++;
		}
	}
}

inline void Gameplay::Undo(int& turn)
{
	_comandsStack.top()->DetectTurnForUndo(turn);
	_comandsStack.pop();
}

