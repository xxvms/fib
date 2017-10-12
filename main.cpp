#include <iostream>
#include <vector>

std::vector<int> fib(int n);

int main() {

    std::cout << "Please provide how many fibonacci numbers do you want: ";

    int number = 0;
    std::cin >> number;

    for (size_t i = 0; i < fib(number).size(); i++){

        std::cout << fib(number).at(i) << '\n';
    }

    return 0;
}

std::vector<int> fib(int n){

    std::vector<int>fibonacci;

    for (int i = 0; i < 2; i++){

        fibonacci.push_back(i);
    }

    for (int i = 1; i < n; i++){

        fibonacci.push_back(fibonacci.at(i-1) + fibonacci.at(i));

    }

    return fibonacci;

}