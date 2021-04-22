#pragma once
#include "Header.h"
class MilitaryBase
{
private:
    MilitaryFor�e* _forces = nullptr;
public:
    MilitaryBase();
    ~MilitaryBase();

    MilitaryFor�e* GetForces();
};

inline MilitaryBase::MilitaryBase()
{
    _forces = new MilitaryFor�e[5];
}

inline MilitaryBase::~MilitaryBase()
{
    delete[] _forces;
}

inline MilitaryFor�e* MilitaryBase::GetForces()
{
    return _forces;
}
