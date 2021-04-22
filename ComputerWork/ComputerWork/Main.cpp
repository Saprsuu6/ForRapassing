#include "Header.h"

int main()
{
	setlocale(0, "RUS");
    srand(time(0));

    Facade* facade = new Facade();

	try
	{
		facade->BeginWork();

		cout << endl;

		facade->FinishWork();
	}
	catch (const Exeption& ex)
	{
		cout << ex.what() << endl;
	}

	delete facade;

	system("pause > NULL");
}