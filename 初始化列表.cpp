#include<iostream>

using namespace std;

class person
{
public:
    //传统方法初始化
    // person(int a,int b,int c)
    // {
    //     age = a;
    //     height = b;
    //     num = c;
    // }

    //初始化列表
    person(int a,int b,int c) :age(a),height(b),num(c)
    {

    }



    int age;
    int  height;
    int num;

};

void test01()
{
    //person p(10,20,30);
    person p(10,30,20);
    cout << "age:" << p.age<<"  height:" << p.height << " num:" << p.num <<endl;

}




int main()
{
    test01();


}