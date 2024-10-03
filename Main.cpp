#include <iostream>
#include "Cards.h"

int main() {
    srand( static_cast<unsigned int>(time(0))); // set random seed

    std::cout << pickRandomCard() << '\n';

    return 0;
}