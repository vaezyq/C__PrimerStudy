//
// Created by 22126 on 2021/11/12.
//

#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;

    // 方法一：只输出不是标点的元素
    for (auto &e: str) {
        if (!ispunct(e)) {
            cout << e;
        }
    }

    //方法二：把不带标点的存在result里
    cout << endl;
    string result;
    for (auto &e: str) {
        if (!ispunct(e)) {
            result = result + e;
        }
    }
    cout << result;

}