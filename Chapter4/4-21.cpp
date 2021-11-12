//
// Created by 22126 on 2021/11/13.
//

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    vector<int> vec{1, 2, 3, 4, 5};
    for (auto &e: vec) {
        if (e % 2 == 1) {
            e = pow(e, 2);
        }
    }
    for (const auto e: vec) {
        cout << e << " ";
    }
}