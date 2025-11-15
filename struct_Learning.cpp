#include<iostream>
#include<string>

using namespace std;

typedef struct student
{
    int age;
    string name;
    int grade;

} St;

typedef struct teacher
{
    int id;
    string name;
    int age;
    St st1;
    St st2;
    St st3;
} Tc;



int main()
{
    // St s1;
    // s1.age = 19;
    // s1.name = "zss";
    // s1.grade = 100;
    // cout<< "age " << s1.age << "name " << s1.name << "grade " << s1.grade;

    // St st[3];
    // st[0] = {19,"aa",100};
    // st[1] = {18,"bb",99};
    // st[2] = {20,"cc",99};

    // for(int i =0 ;i < 3;i++) {
    //     cout<<"age " <<st[i].age<<"name "<<st[i].name<<"grade "<<st[i].grade<<endl;
    // }

    // St s1 ={19,"zss",100};
    // St * p = &s1;
    // cout<<p->age<<" "<<p->grade<<" "<<p->name;

    // Tc t1;
    // t1.id = 111;
    // t1.name = "aaa";
    // t1.age = 32;
    // t1.st1 = {19,"a",100};

    

}