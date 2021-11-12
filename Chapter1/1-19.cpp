//
// Created by 22126 on 2021/10/14.
//

#define main19 main19


#include <iostream>
#include <algorithm>

int main19() {
    std::cout << "please enter two number" << std::endl;
    int numOne, numTwo;
    std::cin >> numOne >> numTwo;
    if (numOne > numTwo) {
        std::swap(numOne, numTwo);
    }
    for (int i = numOne; i <= numTwo; ++i) {
        std::cout << i << " ";
    }
    return 0;
}