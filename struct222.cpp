#include<iostream>
#include<string>

using namespace std;

typedef struct hero
{
    string name;
    int age;
    string  GorB;
}hr;


int main()
{
    hr hero[5];
    hr temp;
    hero[0] = {"刘备",23,"男"};
    hero[1] = {"关羽",22,"男"};
    hero[2] = {"张飞",20,"男"};
    hero[3] = {"赵云",21,"男"};
    hero[4] = {"貂蝉",19,"女"};

    int len = sizeof(hero) / sizeof(hero[0]);

    cout<<"berfore"<<endl;
    for (int i = 0; i < len; i++)
    {
        cout<<hero[i].age<<"  "<<hero[i].name<<"  "<<hero[i].GorB<<endl;
    }


    for(int i = 0;i < len;i++) {
        for (int j = 0; j < len - i - 1; j++)
        {
            if(hero[j].age > hero[j+1].age) {
                temp.age = hero[j].age;
                temp.name = hero[j].name;
                temp.GorB = hero[j].GorB;

                hero[j].age = hero[j+1].age;
                hero[j].name = hero[j+1].name;
                hero[j].GorB = hero[j+1].GorB;

                hero[j+1].age = temp.age;
                hero[j+1].name = temp.name;
                hero[j+1].GorB = temp.GorB;                
            }
        }
        
    }

    cout<<"after"<<endl;
    for (int i = 0; i < len; i++)
    {
        cout<<hero[i].age<<"  "<<hero[i].name<<"  "<<hero[i].GorB<<endl;
    }
    

    return 0;
}