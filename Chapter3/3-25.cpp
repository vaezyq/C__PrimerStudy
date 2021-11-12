//
// Created by 22126 on 2021/11/12.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int grade;
    vector<int> vec(10, 0);
    auto beg = vec.begin();
    while (cin >> grade) {
        if (grade >= 0 && grade <= 100) {
            *(beg + grade / 10) += 1;
        }
    }
    for (auto &e: vec) {
        cout << e << " ";
    }


}