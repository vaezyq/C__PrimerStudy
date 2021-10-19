//
// Created by 22126 on 2021/10/19.
//

#include <iostream>
#include "Sales_item.h"

#define main22 main
using namespace std;

int main22() {
    Sales_item item, sum;
    if (cin >> sum) {
        while (cin >> item) {
            if (compareIsbn(item, sum)) {
                sum += item;
            } else {
                cout << "ISBN不一致" << endl;
                return -1;
            }
        }
        cout << sum;
    } else {
        cout << "输入错误" << endl;
    }


}