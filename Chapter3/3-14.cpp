//
// Created by 22126 on 2021/11/12.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec;
    int num;
    while (cin >> num) {
        vec.push_back(num);
    }

    for (auto n: vec) {
        cout << n << " ";
    }


}