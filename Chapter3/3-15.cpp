//
// Created by 22126 on 2021/11/12.
//

//这里的输入终止也存在问题
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> vec;
    string str;
    while (cin >> str) {
        vec.push_back(str);
    }

    for (auto &n: vec) {
        cout << n << " ";
    }


}