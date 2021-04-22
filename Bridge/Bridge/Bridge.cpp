#include "Headers.h"

int main()
{
    CPU cpu("Intel core i5 6400", 2.7f, 14, 4, 65);
    GPU gpu("Nvida GeForce GTX 1660", 1.785f, 14, 1408, 120, 2.4f, 0);
    HDD hdd("Western Digital Blue", 1, 7200, 64);
    RAM ram("HyperX", 4, 2666);

    SystemInfo* pc = new SystemInfo; 

    pc->ChangeComponent(&cpu);
    pc->ShowFeatures();
    cout << "\n";
    pc->ChangeComponent(&gpu);
    pc->ShowFeatures();
    cout << "\n";
    pc->ChangeComponent(&hdd);
    pc->ShowFeatures();
    cout << "\n";
    pc->ChangeComponent(&ram);
    pc->ShowFeatures();

}
