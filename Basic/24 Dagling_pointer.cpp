#include<iostream>
using namespace std;
int main()
{
    int *p;
    p=new int;
    if(p!=nullptr)
    {
        cout<<" Memory  allocated "<<endl;
        *p=3498;
        cout<<*p;
        p=nullptr ; /// we off pointer because no pointer not allocate another variable address
        delete p;
        p=new int ;
    }
    else
    {
        cout<<" memory not allocated "<<endl;
    }
}
