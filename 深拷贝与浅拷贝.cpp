#include<iostream>

using namespace std;

class person
{
public:

    person()
    {
        cout << "111" << endl;
    }

    person(int age , int height)
    {
        m_age = age;
        m_height = new int (height);
        cout << "222" <<endl;
    }

    //自己实现拷贝构造函数来避免浅拷贝带来的问题
    person(const person & p)
    {
        cout << "444" << endl;
        m_age = p.m_age;
        //m_height = p.m_height;

        //深拷贝操作
        m_height = new int (*p.m_height);//申请一块内存存入身高的数据，然后赋值给m_height
    }

    ~person()
    {
        cout << "333" << endl;
        if (m_height != NULL) {
            delete m_height;//将堆区开辟的数据清除
            m_height = NULL;
        }

    }

    int m_age;
    int *m_height;
};

void test01()
{
    person p1(18 , 200);
    cout << "p1的年龄为" <<p1.m_age  << "身高为"  << *p1.m_height << endl;

    person p2(p1);
    cout << "p2的年龄为" << p2.m_age <<"身高为"  << *p2.m_height << endl;
}

int main()
{
    test01();

}

