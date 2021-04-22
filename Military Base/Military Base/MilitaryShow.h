#pragma once
#include "Header.h"
class MilitaryShow
{
	string _path;
	HANDLE h;
	COORD c;
public:
	MilitaryShow();
	void SetCoords(const int X, const int Y);
	void SetPath(const string& path);

	void Draw() const;
};

inline MilitaryShow::MilitaryShow()
{
	h = GetStdHandle(STD_OUTPUT_HANDLE);
}

inline void MilitaryShow::SetCoords(const int X, const int Y)
{
	c.X = X;
	c.Y = Y;
	SetConsoleCursorPosition(h, c);
}

inline void MilitaryShow::SetPath(const string& path)
{
	_path = path;
}

inline void MilitaryShow::Draw() const
{
	cout << _path << endl;
}
