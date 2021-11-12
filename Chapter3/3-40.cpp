//
// Created by 22126 on 2021/11/12.
//

#include <iostream>
#include <cstring>

using namespace std;


int main() {
    string str1, str2;
    cin >> str1 >> str2;
    const char *cStr1 = str1.c_str();
    const char *cStr2 = str2.c_str();
    char cStr3[strlen(cStr1) + strlen(cStr2) + 1];
    strcpy(cStr3, cStr1);
    strcat(cStr3, cStr2);
    cout << cStr1;
    cout << cStr2;
    cout << cStr3;
}









