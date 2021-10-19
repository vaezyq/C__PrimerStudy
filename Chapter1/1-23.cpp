//
// Created by 22126 on 2021/10/19.
//

#include <iostream>
#include "Sales_item.h"

using namespace std;

int main() {

    Sales_item item1, item2;
    int num = 1;
    if (cin >> item1) {
        while (cin >> item2) {
            if (compareIsbn(item1, item2)) {
                num++;
            } else {
                cout << num;
                item1 = item2;
                num = 1;
            }
        }
    } else {
        cout << 0;
    }

}















