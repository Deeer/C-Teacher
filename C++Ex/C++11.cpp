//
//  C++11.cpp
//  C++Ex
//
//  Created by METC on 15/3/26.
//  Copyright (c) 2015年 metc. All rights reserved.
//

//Final And Override
//final:不允许子类重写

#include <iostream>
using namespace std;
class Object
{
public:
    virtual void Func() =0;
    virtual void Func2() =0;
    
};
class Base :public Object
{
public:
    void Func() final{};
    void Func2();
};
class Derived:public Base
{
public:
//    void Func();
    void Func2() override {};
};
//overide 检查。 添加该关键字说明要重写父类的方法，这里会做检查看父类是否有该虚函数可以让子类重写
