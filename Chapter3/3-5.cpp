//
// Created by 22126 on 2021/11/12.
//


// 存在错误


#include <iostream>

using namespace std;

int main() {


    string str, sumStr;

    //把多个字符串相加
    while ((cin >> str)) {
        sumStr.append(str);

    }
    cout << sumStr;

    //用空格把字符串相加

    sumStr = "";
    if (cin >> str) {
        sumStr.append(str);
        while (cin >> str) {
            sumStr.append(" ");
            sumStr.append(str);
        }
    }


}