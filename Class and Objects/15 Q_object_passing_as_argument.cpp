#include<iostream>
using namespace std;
class data1;
class data
{
    int a;
public:
    friend void sum(data &,data1);
    void set_data(int v1)
    {
        a=v1;
    }
    void display()
    {
        cout<<"a = "<<a<<endl;
    }
};
class data1
{
    int b;
public:
    friend void sum(data &,data1);
    void set_data(int v2)
    {
        b=v2;
    }
    void display()
    {
        cout<<"b = "<<b<<endl;
    }
};
void sum(data &obj1,data1 obj2)
{
    obj1.a=obj1.a+obj2.b;
}
int main()
{
    data x;
    x.set_data(23);
    x.display();

    data1 y;
    y.set_data(43);
    y.display();

    sum(x,y);
    x.display();
    y.display();
}

