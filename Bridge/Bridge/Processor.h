#pragma once
#include "Header.h"
class Processor : public Component
{
private:
	string _amountCores;
public:
	Processor(const string& serialNumber,
		const string& model,
		const string& amountCores);

	virtual void ShowInfo() const override;

	const string& GetAmountCores() const;
};

inline Processor::Processor(const string& serialNumber,
	const string& model,
	const string& amountCores)
{
	_serialNumber = serialNumber;
	_model = model;
	_amountCores = amountCores;
}

inline void Processor::ShowInfo() const
{
	GeneralInfo();
	cout << "Amount cores: " << GetAmountCores() << endl;
}

inline const string& Processor::GetAmountCores() const
{
	return _amountCores;
}

