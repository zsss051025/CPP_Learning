#include<iostream>

using namespace std;

void mySwap01(int *a,int *b)//指针传递
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void mySwap02(int &a,int  &b)
{
    int temp = a;
    a = b;
    b = temp;
}


int main()
{
    int a = 10,b = 20;
    mySwap01(&a,&b);
    cout << a <<endl;
    cout << b <<endl;

    a = 10,b = 20;

    mySwap02(a,b);
    cout << a <<endl;
    cout << b <<endl;
}