#pragma once
#include "Header.h"
class HardDrive : public Component
{
private:
	string _type;
	string _size;
	string _speed;
public:
	HardDrive(const string& serialNumber,
		const string& model,
		const string& type,
		const string& size,
		const string& speed);

	virtual void ShowInfo() const override;

	const string& GetType() const;
	const string& GetSyze() const;
	const string& GetSpeed() const;
};

inline HardDrive::HardDrive(const string& serialNumber,
	const string& model,
	const string& type,
	const string& size, 
	const string& speed)
{
	_serialNumber = serialNumber;
	_model = model;
	_type = type;
	_size = size;
	_speed = speed;
}

inline void HardDrive::ShowInfo() const
{
	GeneralInfo();
	cout << "Speed: " << GetSpeed() << endl
		<< "Size: " << GetSyze() << endl
		<< "Type: " << GetType() << endl;
}

inline const string& HardDrive::GetType() const
{
	return _type;
}

inline const string& HardDrive::GetSpeed() const
{
	return _size;
}

inline const string& HardDrive::GetSyze() const
{
	return _speed;
}
