#include<iostream>

using namespace std;

class person
{
public:

    person()
    {
        cout << "person的默认构造函数调用" << endl;
    }
    
    person(int age1)
    {
        cout << "person的默认有参函数调用" << endl;
        age = age1;
    }

        person(const person & p)
    {
        cout << "person的默认拷贝函数调用" << endl;
        age = p.age;
    }

    ~person()
    {
        cout << "person的默认析构函数调用" << endl;
    }



    int age;

};

void test01()
{
    person p;
    p.age = 18;
    person p2(p);
    cout << "p2的年龄 " << p2.age << endl;




}

void testo2()
{
    person p;

    p = person(18);
}

int main()
{
    test01();

}