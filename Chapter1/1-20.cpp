//
// Created by 22126 on 2021/10/19.
//

#include <iostream>
#include "Sales_item.h"

#define main20 main
using namespace std;

int main20() {
    Sales_item book;
    cout << "please enter the book info" << endl;
    while (cin >> book) {
        cout << book;
    }
    return 0;
}