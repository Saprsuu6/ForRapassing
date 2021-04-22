#pragma once
#include "Header.h"
class ShowField
{
private:
	const int* _field = nullptr;
public:
	ShowField(const int* field);

	void Show() const;
};

inline ShowField::ShowField(const int* field)
{
	if (field != nullptr)
	{
		_field = field;
	}
}

inline void ShowField::Show() const
{
	for (size_t i = 0; i < 9; i++)
	{
		if (_field[i] == Figures::Cross)
		{
			cout << "X";
		}
		else if (_field[i] == Figures::Null)
		{
			cout << "O";
		}
		else
		{
			cout << "-";
		}

		if (i == 5 || i == 2)
			cout << "\n";
	}

	cout << endl;
}

