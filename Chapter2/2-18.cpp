//
// Created by 22126 on 2021/10/19.
//

#include <iostream>

#define main18 main100
using namespace std;

int main18() {
    int a = 1, b = 2;
    int *pt = &a;
    *pt = 3;    //更改指针所指对象的值
    pt = &b;   //更改指针的值


    int sz;
    constexpr auto arraySize1 = sz;         //错误，sz的值在编译期间并不会被知道
    array<int, sz> data1;                   //错误，sz的值在编译期间并不会被知道

    constexpr auto arraySize2 = 10;         //正确：10是一个编译期间常量
    std::array<int, arraySize2> data2;      //正确



    int sz;
    const auto arraySize = sz;       // fine, arraySize is const copy of sz
    std::array<int, arraySize> data; // error! arraySize's value unknown at compilation

}















