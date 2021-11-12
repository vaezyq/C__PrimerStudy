//
// Created by 22126 on 2021/11/12.
//
#include <iostream>

using namespace std;

int main() {
    string str = "123";
    for (char &e: str) {
        e = 'X';
    }
    cout << str;
}