#include "Header.h"

int main()
{
    srand(time(0));

    const string classes[5] = { "Infantry", "Transport vehicle",
        "Heavy ground combat vehicles",
        "Light ground combat vehicles",
        "Air force", };

    const int speed[5] = { 20, 70, 1550, 300 };
    const int power[5] = { 10, 0, 150, 100 };

    MilitaryShow* show = new MilitaryShow();
    MilitaryBase* base = new MilitaryBase();
    MilitaryForñe* forces = base->GetForces();
    MilitaryFabric* fabric = new MilitaryFabric();
   
    for (int i = 0; i < 5; i++) {
        forces[i] = *new MilitaryForñe(classes[i], speed[i], power[i], to_string(i), show);
    }

    for (int i = 0; i < 5; i++) {
        base->GetForces()[i].Show(i, i);
    }

    delete base;
    delete fabric;
    delete show;
}
