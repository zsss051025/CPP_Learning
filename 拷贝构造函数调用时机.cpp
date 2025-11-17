#include<iostream>

using namespace std;
//拷贝函数调用时机
//1.使用一个已经创建的对象来初始化一个新对象

//2.值传递

//3.值方式返回局部对象

class person {

public:
    person()
    {
        cout << "person默认构造函数调用" << endl;
    }

    person(int age)
    {
        cout << "有参构造函数调用" << endl;
        m_Age = age ;
    }

    person(const person & p)
    {
        cout << "拷贝构造函数调用" << endl;
        m_Age = p.m_Age;
    }

    ~person()
    {
        cout << "析构函数调用" << endl;
    }

    int m_Age;


};

void test01()
{
    person p1(20);
    person p2(p1);

    cout <<"p2年龄为" << p2.m_Age << endl;

}

void doWork(person p)
{

}

void test02()
{
    person p;
    doWork(p);//会调用一次拷贝构造函数
}

person doWork2()
{
    person p1;
    cout << (int*)&p1 << endl;
    return p1;//此处会调用拷贝构造函数
}

void test03()
{
    person p = doWork2();
    cout << (int*)&p << endl;
}

int main()
{
    //test01();
    //test02();
    test03();

    return 0;
}