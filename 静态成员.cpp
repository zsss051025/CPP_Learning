#include<iostream>

using namespace std;


class person
{
public:
    

    static int age;//静态成员变量所有成员共享


private:
    static int num;

};

int person::age = 100;
int person::num = 200;

void test01()
{
    person p;
    cout << p.age << endl;

    person p2;
    p2.age = 200;
    cout << p.age << endl;
}

void test02()
{
    //静态成员变量不属于某个对象，所有对象都共享同一份数据
    //因此静态成员变量可以通过对象进行访问，也可以通过类名进行访问
    person p1;
    cout << p1.age << endl;
    cout << person::age << endl;

    //类外访问不到私有的静态成员变量
    //cout << person::num << endl;
}

int main()
{
    //test01();
    test02();
}