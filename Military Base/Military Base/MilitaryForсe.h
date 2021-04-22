#pragma once
#include "Header.h"
class MilitaryForñe
{
private:
	MilitaryShow* _texture = nullptr;

	string _class;
	string _picturePath;
	unsigned int _speed = 0;
	unsigned int _power = 0;
public:
	MilitaryForñe() = default;
	MilitaryForñe(const string& type,
		const unsigned int speed,
		const unsigned int power,
		const string& path,
		MilitaryShow* show);

	void Show(const int X, const int Y);
	unsigned int GetSpeed() const;
	unsigned int GetPower() const;
};

inline MilitaryForñe::MilitaryForñe(const string& type,
	const unsigned int speed, 
	const unsigned int power,
	const string& path,
	MilitaryShow* show)
{
	_class = type;
	_speed = speed;
	_power = power;
	_picturePath = path;

	_texture = show;
}

inline void MilitaryForñe::Show(const int X, const int Y)
{
	_texture->SetPath(_picturePath);
	_texture->SetCoords(X, Y);
	_texture->Draw();
}

inline unsigned int MilitaryForñe::GetSpeed() const
{
	return _speed;
}

inline unsigned int MilitaryForñe::GetPower() const
{
	return _power;
}

