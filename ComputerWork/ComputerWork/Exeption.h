#pragma once
#include "Header.h"
class Exeption :
	public logic_error
{
public:
	Exeption(const string& message);
};

inline Exeption::Exeption(const string& message)
	: logic_error(message) {};
