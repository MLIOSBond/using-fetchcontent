#include <iostream>
#include "submodule-test/somelib.h"

int main()
{
    std::cout << "Hi there!" << "\n";
    std::cout << "Squared of 5: " << squared(5) << "\n";
    return 0;
}
