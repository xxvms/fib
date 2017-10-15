//
// Created by tom on 15/10/17.
//

#include "libfibonacci.h"


std::vector<int> fib(int n, int seed1, int seed2){

    std::vector<int>fibonacci;
    fibonacci.push_back(seed1);
    fibonacci.push_back(seed2);


    for (int i = 1; i < n; i++){

        fibonacci.push_back(fibonacci.at(i-1) + fibonacci.at(i));

    }

    return fibonacci;

}