#include<iostream>
using namespace std;
class num2;
class num1
{
    int a;
public:
    friend void swap_number(num1 &,num2 &);
    void set_data(int v1)
    {
        a=v1;
    }
    void display()
    {
        cout<<" value of a is : "<<a<<endl;
    }
};

class num2
{
    int b;
public:
    friend void swap_number(num1 &,num2 &);
    void set_data(int v2)
    {
        b=v2;
    }
    void display()
    {
        cout<<" value of b is : "<<b<<endl;
    }
};
void swap_number(num1 &o1,num2 &o2)
{
    int temp;
    temp=o1.a;
    o1.a=o2.b;
    o2.b=temp;
}
int main()
{
    num1 x;
    num2 y;
    x.set_data(34);
    y.set_data(21);
    cout<<"The value of a and b before swap "<<endl;
    x.display();
    y.display();

    swap_number(x,y);///swaping
    cout<<"*#######################################*"<<endl;
    cout<<"The value of a and b after swap "<<endl;
    x.display();
    y.display();
}
