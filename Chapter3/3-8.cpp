//
// Created by 22126 on 2021/11/12.
//

#include <iostream>

using namespace std;


int main() {
    string str = "123";
    decltype(str.size()) index = 0;
    while (index < str.size()) {
        str[index] = 'X';
        index++;
    }

    for (decltype(str.size()) i = 0; i != str.size(); ++i) {
        str[i] = 'X';
    }

    cout << str;


}