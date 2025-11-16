#include<iostream>

using namespace std;

void func(int a)
{
    cout << "1个参数的函数调用" << endl;
}

void func(int a,int b)
{
    cout << "2个参数的函数调用" << endl;
}

int main()
{
    func(1);
    func(1,1);
}
