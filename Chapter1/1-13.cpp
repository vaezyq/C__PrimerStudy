//
// Created by 22126 on 2021/10/18.
//

#include <iostream>

#define main13 main13
using namespace std;

int main13() {
    cout << "50��100���������" << endl;
    int sum = 0;
    for (int i = 50; i <= 100; ++i) {
        sum += i;
    }
    cout << sum << endl;


    cout << "�ݼ������ʵ��10��0�Ĵ�ӡ" << endl;
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