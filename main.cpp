#include <iostream>
#include <vector>
#include "libfibonacci.h"

int main() {

    std::cout << "Please provide how many fibonacci numbers do you want: ";

    int number = 0;
    std::cin >> number;

    std::cout << "Please provide 1st seed number: ";
    int seed_number = 0;
    std::cin >> seed_number;

    std::cout << "Please provide 2nd seed number: ";
    int seed_number2 = 0;
    std::cin >> seed_number2;

    fib(number, seed_number, seed_number2);


    return 0;
}

