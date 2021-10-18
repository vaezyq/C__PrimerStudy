//
// Created by 22126 on 2021/10/18.
//

#include <iostream>

#define main13 main13
using namespace std;

int main13() {
    cout << "50到100的整数相加" << endl;
    int sum = 0;
    for (int i = 50; i <= 100; ++i) {
        sum += i;
    }
    cout << sum << endl;


    cout << "递减运算符实现10到0的打印" << endl;
    for (int i = 10; i >= 0; --i) {
        cout << i << " ";
    }
    cout << endl;

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