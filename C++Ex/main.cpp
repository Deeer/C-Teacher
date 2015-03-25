//
//  main.cpp
//  C++Ex
//
//  Created by metc on 15/3/19.
//  Copyright (c) 2015年 metc. All rights reserved.
//

#include <iostream>
using namespace std;
//方法重载 : 方法名相同 参数列表不同（类型不同， 个数不同, 顺序不同）
int addExp(int heroExp, int addExp) {
    return heroExp + addExp;
}
int addExp(int heroExp, double addExpPer) {
    return heroExp * (1 + addExpPer);
}
int addExp(int heroExp, int addExp, int i) {
    return heroExp + addExp;
}

extern "C"  //告诉编译器下面的函数 按C的方式处理
int addExp(double addExpPer, int heroExp) {
    return heroExp + addExpPer;
}


int main(int argc, const char * argv[]) {
    cout << addExp(100, 200) << endl;
    cout << addExp(100, 200) << endl;

    cout << addExp(100, 0.5) << endl;
    return 0;
}





