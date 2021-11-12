//
// Created by 22126 on 2021/11/12.
//

#include <iostream>

using namespace std;


using int_array = int[4];

int main() {
    int i = 0;
    int ia[3][4];
    for (auto &row: ia) {
        for (auto &col: row) {
            col = i;
            i++;
        }
    }

    // 使用范围for循环
    for (auto &row: ia) {
        for (auto &col: row) {
            cout << col << " ";
        }
        cout << endl;
    }

    cout << "---------" << endl;

    for (int(&row)[4]: ia) {
        for (int col: row) {
            cout << col << " ";
        }
        cout << endl;
    }
    cout << "---------" << endl;


    for (int_array &row: ia) {
        for (int col: row) {
            cout << col << " ";
        }
        cout << endl;
    }
    cout << "***********" << endl;



    //使用下标的普通运算符
    for (size_t row = 0; row < 3; ++row) {
        for (size_t col = 0; col < 4; ++col) {
            cout << ia[row][col] << " ";
        }
        cout << endl;
    }


    //使用指针

    for (auto row = begin(ia); row != end(ia); ++row) {
        for (auto col = begin(*row); col != end(*row); ++col) {
            cout << *col << " ";
        }
        cout << endl;
    }

    cout << "---------" << endl;
    for (int(*row)[4] = begin(ia); row != end(ia); ++row) {
        for (int *col = begin(*row); col != end(*row); ++col) {
            cout << *col << " ";
        }
        cout << endl;
    }

    cout << "---------" << endl;

    for (int_array *row = begin(ia); row != end(ia); ++row) {
        for (int *col = begin(*row); col != end(*row); ++col) {
            cout << *col << " ";
        }
        cout << endl;
    }


}