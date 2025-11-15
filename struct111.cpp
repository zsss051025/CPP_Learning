#include<iostream>

using namespace std;



typedef struct student
{
    string name;
    int score;
    
}St;

typedef struct teacher
{
    string name;
    St stu[5];
}Tc;

string nameseed = "ABCDE";

void PrintInfo(Tc t[],int len);
void all(Tc t[],int len);

int main()
{
    Tc t[3];

    int len = sizeof(t) / sizeof(t[0]);
    all(t,len);

    PrintInfo(t,len);
}

void all(Tc t[],int len)
{
    for(int i = 0;i < len;i++) {
        t[i].name = "teacher";
        t[i].name += nameseed[i];
        for(int j = 0;j < 5;j++) {
            t[i].stu[j].name = "student";
            t[i].stu[j].name += nameseed[i];

            int random = rand() % 61 +40;
            t[i].stu[j].score = random;
        }

    }
}


void PrintInfo(Tc t[],int len)
{
    for(int i = 0;i < len;i++) {
        cout <<"name "<<t[i].name<<endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "s_name  "<<t[i].stu[j].name<<endl<<
            "score" << t[i].stu[j].score<<endl;
        }
        
    }
}