#include<iostream>

using namespace std;

void func(int a,int = 1)
{
    cout << "111" << endl;
}

int main()
{
    func(10);
}