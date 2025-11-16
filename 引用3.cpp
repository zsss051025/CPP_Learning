#include<iostream>

using namespace std;

// int& test01()
// {
//     int a = 10;

//     return a; 
// }

int& test02()
{
    static int a = 10;

    return a; 
}

int main()
{
    //int &res = test01();
    //cout << res << endl;
    //cout << res << endl;  

    int &res2 = test02();
    cout << res2 << endl;
    cout << res2 << endl;

    test02() = 1000;

    cout << res2 << endl;
    cout << res2 << endl;    
}