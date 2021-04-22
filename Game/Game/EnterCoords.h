#pragma once
class EnterCoords
{
private:
	const int* _field = nullptr;

	unsigned int _x = 0;
	unsigned int _y = 0;
public:
	EnterCoords(const int* field);

	unsigned int GetX() const;
	unsigned int GetY() const;

	EnterCoords* EnterCorrds();
};

inline EnterCoords::EnterCoords(const int* field)
{
	if (field != nullptr) {
		_field = field;
	}
}

inline unsigned int EnterCoords::GetX() const
{
	return _x;
}

inline unsigned int EnterCoords::GetY() const
{
	return _y;
}

inline EnterCoords* EnterCoords::EnterCorrds()
{
	while (true) {
		cout << "Enter X: ";
		cin >> _x;
		cout << "Enter Y: ";
		cin >> _y;

		if (_y == 1) {
			_x--;
			_y--;
		}
		else if (_y == 3) {
			_x += 2;
		}

		if (_field[_x + _y] == 0) {
			break;
		}
	}

	return this;
}

