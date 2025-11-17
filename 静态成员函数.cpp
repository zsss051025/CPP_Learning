#include<iostream>

using namespace std;

//静态成员函数
//所有成员共享一个函数
//静态成员函数只能访问静态成员变量

class person
{
public:
    //静态成员函数
    static void func()
    {
        m_A = 100;//静态成员函数可以访问静态成员变量
        //m_B = 200;//静态成员函数不可以访问非静态成员变量,因为无法区分是哪个对象的变量
        cout << "静态void函数调用 " << endl;
    }
 
    static int m_A;
    int m_B;

    //静态成员函数也有访问权限
private:
    static void func2()
    {
        cout << "静态函数void func2 调用" << endl;
    }

};

int person::m_A = 0;


int main()
{

    //通过对象访问
    person p;
    p.func();

    //通过类名访问
    person::func();

    //类外访问不到私有静态成员函数
    //person::func2();
}