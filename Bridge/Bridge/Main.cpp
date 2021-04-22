#include "Header.h"

int main()
{
    ShowInformation* show = new ShowInformation();

    show->SetComponent(new Processor("1234567890", "Intel Core I7", "4"));
    show->ShowInfo();
    cout << endl;

    show->SetComponent(new VideoCard("1234567890", "GTX 970", "10 gb", "100"));
    show->ShowInfo();
    cout << endl;

    show->SetComponent(new RAM("1234567890", "RAM 0231", "8"));
    show->ShowInfo();
    cout << endl;

    show->SetComponent(new HardDrive("1234567890", "1422", "SDD", "1000", "1000 gb"));
    show->ShowInfo();
    cout << endl;

    system("pause > NULL");
}
