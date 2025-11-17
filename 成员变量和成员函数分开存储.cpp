#include<iostream>

using namespace std;

//成员变量和成员函数是分开存储的
class person
{

    int m_A;
    

    static int m_B;

    void func()
    {

    }

    static void func2()
    {
        
    }
};

int person::m_B = 1;

void test01()
{
    person p;

    cout << "size of p = " << sizeof(p) << endl;
}

void test02()
{
    person p;
    cout << "size of p = " << sizeof(p) << endl;
}

int main()
{
    test01();
    test02();
}