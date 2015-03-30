//
//  Auto.cpp
//  C++Ex
//
//  Created by METC on 15/3/26.
//  Copyright (c) 2015年 metc. All rights reserved.
//

#include <stdio.h>
#include <iostream>

//auto类型推断
using namespace std;
class CCSprite{

public:
    void show(){};

};
int main()
{
//    auto x =3.1;
    auto sprite=new CCSprite;
    sprite->show();
    
    
    //rend()指向第一个元素的前一个元素
    
//    vector<int> v;
    
    
    
    
    return 0;
    
}

