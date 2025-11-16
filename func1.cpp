#include<iostream>

using namespace std;

int func(int a,int b = 20,int c = 30)
{
    return a+b+c;
}

int main()
{

    cout << func(10,20,30) <<endl;
    cout << func(10) <<endl;
    cout << func(10,30) <<endl;
}