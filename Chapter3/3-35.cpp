//
// Created by 22126 on 2021/11/12.
//


#include <iostream>
#include <vector>

using namespace std;


int main() {
    int a[]{1, 2, 3, 4};
    for (auto beg = begin(a); beg != end(a); ++beg) {
        *beg = 0;
    }

    for (const auto e: a) {
        cout << e << " ";
    }


    vector<int> vec(begin(a), end(a));

    cout << endl << "**************" << endl;
    for (auto beg = vec.begin(); beg != vec.end(); ++beg) {
        *beg = 0;
    }
    for (const auto e: vec) {
        cout << e << " ";
    }

}

