//
// Created by 22126 on 2021/10/19.
//

#include <iostream>

#define main18 main100
using namespace std;

int main18() {
    int a = 1, b = 2;
    int *pt = &a;
    *pt = 3;    //����ָ����ָ�����ֵ
    pt = &b;   //����ָ���ֵ


    int sz;
    constexpr auto arraySize1 = sz;         //����sz��ֵ�ڱ����ڼ䲢���ᱻ֪��
    array<int, sz> data1;                   //����sz��ֵ�ڱ����ڼ䲢���ᱻ֪��

    constexpr auto arraySize2 = 10;         //��ȷ��10��һ�������ڼ䳣��
    std::array<int, arraySize2> data2;      //��ȷ



    int sz;
    const auto arraySize = sz;       // fine, arraySize is const copy of sz
    std::array<int, arraySize> data; // error! arraySize's value unknown at compilation

}















