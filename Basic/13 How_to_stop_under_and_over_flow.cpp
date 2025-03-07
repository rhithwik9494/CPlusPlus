#include<iostream>
using namespace std;
void display(const int *start,const int *end)
{
    const int *ptr;
    for(ptr=start;ptr<=end;ptr++)
    {
        cout<<*ptr<<endl;
    }
}

int main()
{
    int a[5]={23,45,57,87,98};
    display(a,a+4);
}
