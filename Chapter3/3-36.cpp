//
// Created by 22126 on 2021/11/12.
//

//
// Created by 22126 on 2021/11/12.
//


#include <iostream>
#include <vector>

using namespace std;


int main() {
//    int a[]{1, 2, 3, 4};
//    int b[]{1, 2, 3, 6};
//
//    auto aBeg = begin(a);
//    auto bBeg = begin(b);
//
//    while (aBeg != end(a) && bBeg != end(b)) {
//        if (*aBeg != *bBeg) {
//            cout << "�²����" << endl;
//            return -1;
//        }
//        aBeg++;
//        bBeg++;
//
//    }
//
//
//    cout << "�ɹ�";
//    return 0;


    int a[]{1, 2, 3, 6};
    int b[]{1, 2, 3, 6};
    vector<int> vecA(begin(a), end(a));
    vector<int> vecB(begin(b), end(b));
    cout << endl << "**************" << endl;

    auto aBeg = vecA.begin();
    auto bBeg = vecB.begin();
    while (aBeg != vecA.end() && bBeg != vecB.end()) {
        if (*aBeg != *bBeg) {
            cout << "�²����" << endl;
            return -1;
        }
        aBeg++;
        bBeg++;

    }
    cout << "�²�ɹ�";
    return 0;

}

