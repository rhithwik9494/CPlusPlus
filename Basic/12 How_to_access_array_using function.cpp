#include<iostream>
using namespace std;
void display(int a[],int limit)
{
    for(int i=0;i<limit;i++)
    {
        cout<<"a["<<i<<"] = "<<a[i]<<endl;
    }
}
int main()
{
    int arr[5]={12,34,56,67,78};
    display(arr,5);
}
