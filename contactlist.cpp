#include<iostream>
#include<string>

#define max 1000

using namespace std;

typedef struct person  
{
    string name;
    string GorB;
    int age;
    string phone_num;
    string address;
}pr;

struct contactlist
{
    pr person_inlist[max];
    int size;
};


void show_menu()
{
    cout<<"***********************"<<endl;
    cout<<"*****    1.add    *****"<<endl;
    cout<<"*****    2.show   *****"<<endl;
    cout<<"*****    3.delete *****"<<endl;
    cout<<"*****    4.search *****"<<endl;
    cout<<"*****    5.change *****"<<endl;
    cout<<"*****    6.clear  *****"<<endl;
    cout<<"*****    0.exit   *****"<<endl;
    cout<<"***********************"<<endl;

}

void addPerson(contactlist * abs)
{
    if(abs ->size == max) {
        cout<<"通讯录已满，无法添加"<<endl;
    } else {
        cout<<"请输入姓名 "<<endl;
        string name;
        cin >> name;
        abs->person_inlist[abs->size].name = name;

        cout<< "请输入年龄" <<endl;
        int age;
        cin >> age;
        abs->person_inlist[abs->size].age = age;

        cout<< "请输入手机号码" <<endl;
        string phone;
        cin >> phone;
        abs->person_inlist[abs->size].phone_num = phone;

        cout<< "请输入家庭住址" <<endl;
        string address;
        cin >> address;
        abs->person_inlist[abs->size].address = address;

        cout<< "请输入性别" <<endl;
        string GorB;
        cin >> GorB;
        abs->person_inlist[abs->size].GorB = GorB;

        abs->size++;

        cout << "添加成功 "<<endl;

    }

}

void show_person(contactlist * abs)
{
    if (abs->size == 0) {
        cout <<"列表为空"<<endl;
    }  else {
        int len = abs->size;

        for(int i = 0;i < len;i++) {
            cout<<"  "<<abs->person_inlist[i].name
            <<"  "<<abs->person_inlist[i].age
            <<"  "<<abs->person_inlist[i].address
            <<"  "<<abs->person_inlist[i].GorB
            <<"  "<<abs->person_inlist[i].phone_num
            <<endl;

        }
    }
}

void searchPerson(contactlist * abs)
{
    int flag = 0;
    int index = 0;
    string name;
    cout<<"请输入要查找的人名"<<endl;
    cin >> name;

    for (int i = 0; i < abs->size; i++)
    {
        if( abs->person_inlist[i].name == name) {
            flag = 1;
            index = i;
            break;
        }
    }
    if(flag == 0) {
        cout<<"该联系人不存在"<<endl;
    } else {
        cout<<"该联系人存在，其信息如下"<<endl;
        cout<<abs->person_inlist[index].name
        <<"  "<<abs->person_inlist[index].age
        <<"  "<<abs->person_inlist[index].address
        <<"  "<<abs->person_inlist[index].GorB
        <<"  "<<abs->person_inlist[index].phone_num<<endl;
    }
}

void deletePerson(contactlist * abs)
{
    string name;
    int flag = 0,YorN = 0;
    int index = 0;
    cout << "请输入你要删除联系人的姓名"<<endl;
    cin >> name;

    for (int i = 0; i < abs->size; i++)
    {
        if( abs->person_inlist[i].name == name) {
            flag = 1;
            index = i;
            break;
        }
    }
    if(flag == 0) {
        cout<<"该联系人不存在"<<endl;
    } else {
        cout<<"该联系人存在，其信息如下,请确认是否删除该联系人,1确认,0取消"<<endl;
        cout<<abs->person_inlist[index].name
        <<"  "<<abs->person_inlist[index].age
        <<"  "<<abs->person_inlist[index].address
        <<"  "<<abs->person_inlist[index].GorB
        <<"  "<<abs->person_inlist[index].phone_num<<endl;
    }
    while(1) {
        cin >> YorN;
        if (YorN == 1) {
            for(int i = index;i < abs->size - 1;i++) {
                abs->person_inlist[i].address =  abs->person_inlist[i+1].address;
                abs->person_inlist[i].age =  abs->person_inlist[i+1].age;
                abs->person_inlist[i].name =  abs->person_inlist[i+1].name;
                abs->person_inlist[i].phone_num =  abs->person_inlist[i+1].phone_num;
                abs->person_inlist[i].GorB =  abs->person_inlist[i+1].GorB;
            }
            abs->size--;
            break;
        } else if (YorN == 0)
        {
            cout << "您已取消此次删除操作"<<endl;
            break;
        } else {
            cout << "此次输入无效,请重新输入"<<endl;
            continue;
        }
        
    }

}

void changePerson(contactlist * abs)
{
    string name1;
    string GorB;
    int age;
    string phone_num;
    string address;

    string name;
    int flag = 0,index = 0,YorN = 0;
    cout << "请输入你要更改信息的联系人" <<endl;
    cin >> name;

    for (int i = 0; i < abs->size; i++)
    {
        if( abs->person_inlist[i].name == name) {
            flag = 1;
            index = i;
            break;
        }
    }
    if(flag == 0) {
        cout<<"该联系人不存在"<<endl;
    } else {
        cout<<"该联系人存在，其信息如下,请确认是否更改该联系人的信息,1确认,0取消"<<endl;
        cout<<abs->person_inlist[index].name
        <<"  "<<abs->person_inlist[index].age
        <<"  "<<abs->person_inlist[index].address
        <<"  "<<abs->person_inlist[index].GorB
        <<"  "<<abs->person_inlist[index].phone_num<<endl;

    }   
    while(flag == 1) {
        cin >> YorN;
        if (YorN == 1) {
            cout << "请输入新的姓名 " <<endl;
            cin >> name1;
            cout << "请输入新的年龄 " <<endl;
            cin >> age;
            cout << "请输入新的性别 " <<endl;
            cin >> GorB;
            cout << "请输入新的电话号码 " <<endl;
            cin >> phone_num;
            cout << "请输入新的地址 " <<endl;
            cin >> address;

            abs->person_inlist[index].address = address;
            abs->person_inlist[index].age = age;
            abs->person_inlist[index].GorB = GorB;
            abs->person_inlist[index].name = name1;
            abs->person_inlist[index].phone_num = phone_num;

            cout << "信息已更改完毕 " <<endl;

            break;
        } else if (YorN == 0)
        {
            cout << "您已取消此次更改操作"<<endl;
            break;
        } else {
            cout << "此次输入无效,请重新输入"<<endl;
            continue;
        }
        
    }

}


void clearPerson(contactlist * abs)
{
    int YorN1 = 0;
    cout << "确认是否需要清空列表,1确认,0取消" <<endl;
    cin >> YorN1;
    while (1) {
        if (YorN1 == 1) {
            abs->size = 0;
            cout << "已为您清空通讯录" <<endl;
            break;
        } else if (YorN1 == 0){
            cout << "您已取消此次操作" <<endl;
            break;
        } else {
            cout << "此次输入无效,请重新输入"<<endl;
            continue;
        }
    }

}

int main()
{
    int select = 0;

    contactlist abs;
    abs.size = 0;

    while(1) {
        show_menu();

        cin >> select;

        if (select == 0) {
            cout << "已为您退出菜单";
            break;
        }

        switch (select) {
            case 1:
                addPerson(&abs);
                break;
            case 2:
                show_person(&abs);
                break;
            case 3:
                deletePerson(&abs);
                break;
            case 4:
                searchPerson(&abs);
                break;
            case 5:
                changePerson(&abs);
                break;
            case 6:
                clearPerson(&abs);
                break;
        };

    }

    return 0;
}