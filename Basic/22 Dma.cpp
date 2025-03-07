#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    ptr=new int;
    if(ptr!=nullptr)
    {
        *ptr=23;
        cout<<" Memory is allocated "<<*ptr;
    }
    else
    {
        cout<<" Memory is not allocated "<<endl;
    }
}
