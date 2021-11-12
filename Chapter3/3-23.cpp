//
// Created by 22126 on 2021/11/12.
//

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    vector<int> vec;
    for (int i = 0; i < 10; ++i) {
        vec.push_back(i);
    }
    for (auto beg = vec.begin(); beg != vec.end(); ++beg) {
        *beg = pow(*beg, 2);
    }
    for (auto e: vec) {
        cout << e << " ";
    }


}