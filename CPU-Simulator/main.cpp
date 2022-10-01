#include <iostream>
#include "FakeCPU.h"


int main()
{
    FakeCPU cpu;
    cpu.get("text.txt");
    cpu.print();
    return 0;
}
