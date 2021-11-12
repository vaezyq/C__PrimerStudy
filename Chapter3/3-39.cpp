//
// Created by 22126 on 2021/11/12.
//

#include <iostream>
#include <cstring>

using namespace std;


int main() {


    string str1, str2;

    cin >> str1 >> str2;

    if (str1 > str2) {
        cout << str1;
    } else {
        cout << str2;
    }

    const char *cStr1 = str1.c_str();
    const char *cStr2 = str2.c_str();

    int result = strcmp(cStr1, cStr2);

    if (result == 0) {
        cout << "相等" << endl;
    } else if (result > 0) {
        cout << cStr1;
    } else {
        cout << cStr2;
    }




//    //比较两个string对象
//    string str1, str2;
//    cin >> str1 >> str2;
//    for (size_t i = 0; i < str1.size() && i < str2.size(); ++i) {
//        if (str1[i] == str2[i]) {
//            continue;
//        }
//        if (str1[i] > str2[i]) {
//            cout << str1;
//            break;
//        } else {
//            cout << str2;
//            break;
//        }
//    }
//
//
//    //比较两个c风格字符串
//    const char *cStr1 = str1.c_str();
//    const char *cStr2 = str2.c_str();
//
//    for (auto it1 = cStr1, it2 = cStr2; *it1 != '/0' && *it2 != '/0'; ++it1, ++it2) {
//        if (*it1 == *it2) {
//            continue;
//        }
//        if (*it1 > *it2) {
//            cout << cStr1;
//            break;
//        } else {
//            cout << cStr2;
//            break;
//        }
//    }


}









