#include <iostream>
using namespace std;
//闭包函数，未知类型
//"="
//  [=](){}//只读

int main()
{
    
    
    int a =3,b =4;

    int c=5,d=9;
    auto Lebel = [&a,&b]() {
        a =100;
        int q =a+b;
        cout<<"asd"<<endl;
        return q;
    };
    
    
    int ee =Lebel();
    cout<<ee;
    
    
    
    //mutabel--传入值可修改
//    [capture](parameters) mutable -> return_type {statement｝
    // [capture]:捕捉列表
    //(parameters)：参数
    //mutable:默认是const函数，加上mutable可以取消常量性
    //-> return_type：返回值类型
    //{statement｝:方法体

    //    []()
    //[x]:[]捕捉列表。将父作用域的x变量捕捉闭包函数中，只能使用，不能修改
    //
    
    
    
    
    return 0;
    
}