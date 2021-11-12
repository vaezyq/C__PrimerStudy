//
// Created by 22126 on 2021/11/11.
//

#include <iostream>

using namespace std;

int main() {
    int curVal = 0, val = 0;
    if (cin >> val) {
        int cnt = 1;
        curVal = val;
        while (cin >> val) {
            if (curVal == val) {
                cnt++;
            } else {
                cout << "the number of " << curVal << " is " << cnt << endl;
                curVal = val;
                cnt = 1;
            }
        }

        cout << "the number of " << curVal << " is " << cnt << endl;
    }

}
