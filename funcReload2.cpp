#include<iostream>

using namespace std;

void func(int &a)
{
    cout << "int &a的函数调用" << endl;
}

void func(const int &a)
{
    cout << "const int &a的函数调用" << endl;
}


void func2(int a,int b = 20)
{
    cout << "int a int b = 20的函数调用" << endl;
}

void func2(int a)
{
    cout << "int a的函数调用" << endl;
}



int main()
{
    int a = 1;
    const int b = 1;

    func(a);
    func(10);

    //func2(10);
    func2(10,20);

}
