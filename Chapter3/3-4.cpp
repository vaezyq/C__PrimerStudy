//
// Created by 22126 on 2021/11/12.
//

#include <iostream>

using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    //输出较大的字符串

    for (decltype(str1.size()) i = 0; i != str1.size() && i != str2.size(); ++i) {
        if (str1[i] == str2[i]) {
            continue;
        }
        if (str1[i] > str2[i]) {
            cout << str1;
        } else {
            cout << str2;
        }

    }

    cout << endl;

    //输出长度较大的字符串
    if (str1.size() > str2.size()) {
        cout << str1;
    } else {
        cout << str2;
    }


}











