#pragma once
#include "Header.h"
class ShowFigure
{
private:
	const IFigure* _figure = nullptr;
public:
	ShowFigure() = default;
	ShowFigure(const IFigure* figure);

	void SetFigure(const IFigure* figure);

	void Show() const;
};

inline ShowFigure::ShowFigure(const IFigure* figure)
{
	if (figure != nullptr)
	{
		_figure = figure;
	}
}

inline void ShowFigure::Show() const
{
	if (_figure != nullptr)
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, _figure->GetColour());

		cout << _figure->GetName() << endl;

		const int* figure = _figure->GetFigure();
		for (int i = 0; i < 16; i++)
		{
			if (figure[i] == 1)
			{
				cout << (char)219;
			}
			else
			{
				cout << " ";
			}
			if (i == 3 || i % 4 == 3)
				cout << "\n";
		}
	}
}

inline void ShowFigure::SetFigure(const IFigure* figure)
{
	if (figure != nullptr)
	{
		_figure = figure;
	}
}

