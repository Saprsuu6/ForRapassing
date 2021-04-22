#pragma once
#include "Header.h"
class Component
{
protected:
	string _serialNumber;
	string _model;

	void GeneralInfo() const;
public:
	const string& GetSerialNumber() const;
	const string& GetModel() const;
	virtual void ShowInfo() const = 0;

	virtual ~Component() = 0 {};
};

inline void Component::GeneralInfo() const
{
	cout << "Model: " << GetModel() << endl
		<< "Serial number: " << GetSerialNumber() << endl;
}

inline const string& Component::GetSerialNumber() const
{
	return _serialNumber;
}

inline const string& Component::GetModel() const
{
	return _model;
}

