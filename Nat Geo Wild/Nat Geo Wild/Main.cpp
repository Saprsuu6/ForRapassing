#include "Header.h"

int main()
{
	ShowAnimalInfo* show = new ShowAnimalInfo();

	srand(time(0));
	NatGeoWild* africa = new NatGeoWild(new Africa);
	africa->StartLifeCycle();
	africa->ShowAnimalsState(show);

	NatGeoWild* northAmerica = new NatGeoWild(new NorthAmerica);
	northAmerica->StartLifeCycle();
	northAmerica->ShowAnimalsState(show);

	NatGeoWild* eurasia = new NatGeoWild(new Eurasia);
	eurasia->StartLifeCycle();
	eurasia->ShowAnimalsState(show);
	system("pause > NULL");
}