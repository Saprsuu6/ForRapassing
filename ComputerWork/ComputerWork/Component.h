#pragma once
#include "Header.h"
class Component
{
protected:
	int CrashMoment() const;
public:
	virtual void TurnOn(const string& message, const string& exMessage) const;
	virtual void TurOff(const string& message, const string& exMessage) const;
};

inline void Component::TurnOn(const string& message, const string& exMessage) const
{
	if (CrashMoment() < 90) {
		cout << message << endl;
	}
	else {
		throw Exeption(exMessage);
	}
}

inline void Component::TurOff(const string& message, const string& exMessage) const
{
	if (CrashMoment() < 90) {
		cout << message << endl;
	}
	else {
		throw Exeption(exMessage);
	}
}

inline int Component::CrashMoment() const
{
	return rand() % 101;
}

