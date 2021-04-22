#pragma once
#include "Header.h"
class MilitaryBase
{
private:
    MilitaryForñe* _forces = nullptr;
public:
    MilitaryBase();
    ~MilitaryBase();

    MilitaryForñe* GetForces();
};

inline MilitaryBase::MilitaryBase()
{
    _forces = new MilitaryForñe[5];
}

inline MilitaryBase::~MilitaryBase()
{
    delete[] _forces;
}

inline MilitaryForñe* MilitaryBase::GetForces()
{
    return _forces;
}
