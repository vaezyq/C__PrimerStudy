//
// Created by 22126 on 2021/11/12.
//

#include<iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> a{1, 2, 3, 4, 5};
    auto beg = a.begin();
    auto end = a.end() - 1;
    while (beg <= end) {
        cout << (*beg + *end) << " ";
        beg++;
        end--;
    }


}

