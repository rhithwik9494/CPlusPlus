#include<iostream>
using namespace std;
class data2;
class data1
{
    int a;
public:
    void set_data(int x)
    {
        a=x;
    }
    void display()
    {
        cout<<" a = "<<a<<endl;
    }
    friend void sum(data1 ,data2);
};
class data2
{
    int b;
public:
    void set_data(int y)
    {
        b=y;
    }
    void display()
    {
        cout<<" b = "<<b<<endl;
    }
    friend void sum(data1 ,data2);
};
void sum (data1 obj1,data2 obj2)
{
    cout<<" The sum of two class "<<obj1.a+obj2.b;
}
int main()
{
    data1 d1;
    data2 d2;
    d1.set_data(43);
    d2.set_data(23);
    d1.display();
    d2.display();
    sum(d1,d2);
}
