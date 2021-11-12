//
// Created by 22126 on 2021/11/12.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a[10];
    int i = 0;
    for (auto &e: a) {
        e = i++;
    }
    for (const auto &e: a) {
        cout << e << " ";
    }

    cout << "*********" << endl;
    int b[10];
    for (size_t i = 0; i != 10; ++i) {
        b[i] = a[i];
    }
    for (const auto &e: b) {
        cout << e << " ";
    }

    cout << "*********" << endl;


    vector<int> vecA(begin(a), end(a));

    vector<int> vecB;
    for (const auto e: vecA) {
        vecB.push_back(e);
    }


    for (const auto &e: vecB) {
        cout << e << " ";
    }
}