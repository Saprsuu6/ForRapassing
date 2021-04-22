#pragma once
#include "RAM.h"
class RAM : public Component
{
private:
	string _size;
public:
	RAM(const string& serialNumber,
		const string& model,
		const string& size);

	virtual void ShowInfo() const override;

	const string& GetSize() const;
};

inline RAM::RAM(const string& serialNumber,
	const string& model,
	const string& size)
{
	_serialNumber = serialNumber;
	_model = model;
	_size = size;
}

inline void RAM::ShowInfo() const
{
	GeneralInfo();
	cout << "Speed: " << GetSize() << endl;
}

inline const string& RAM::GetSize() const
{
	return _size;
}
