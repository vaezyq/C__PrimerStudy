//
// Created by 22126 on 2021/11/12.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a[] = {1, 2, 3, 4, 5};
    vector<int> vec;
    for (auto e: a) {
        vec.push_back(e);
    }
    for (auto e: vec) {
        cout << e << " ";
    }

    int b[5];
    for (size_t i = 0; i < 5; ++i) {
        b[i] = vec[i];
    }

    for (auto e: b) {
        cout << e << " ";
    }

}