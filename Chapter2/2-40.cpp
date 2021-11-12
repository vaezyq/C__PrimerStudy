//
// Created by 22126 on 2021/10/20.
//
#include <iostream>
#include <string>

using namespace std;

constexpr double Max = 200;


int main() {
    string a(10, 'q');
    string b = a;
    b = "123";
    cout << b << " " << endl;
    cout << a;
}


