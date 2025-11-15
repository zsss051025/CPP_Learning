#include<iostream>

using namespace std;

void bubble_Sort(int * arr ,int len);
void Printarr(int *arr,int len);

int main()
{

    int arr[6];
    cout << "输入六个数字";
    for(int i = 0;i < 6;i++) {
        cin >> arr[i];
    }
    int * p = arr;
    int len = sizeof(arr) / sizeof(arr[0]);
    bubble_Sort(p,len);
    Printarr(p,len);
    return 0;
}

void bubble_Sort(int * arr ,int len)
{
    for(int i = 0; i < len -1; i++) {
        for(int j = 0; j < len - i - 1;j++) {
            if (arr[j] > arr [j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    } 


}

void Printarr(int *arr,int len)
{
    for(int i = 0;i < len;i++) {
        cout << arr[i]<<" " ;
    }
}
