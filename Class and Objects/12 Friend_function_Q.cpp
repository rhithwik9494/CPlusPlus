#include<iostream>
using namespace std;
class y;
class x
{
    int data;
public:
    friend void sum(x,y);
    set_data(int v1)
    {
        data=v1;
    }
};
class y
{
    friend void sum(x,y);
    int num;
public:
    set_data(int v2)
    {
        num=v2;
    }
};
void sum(x o1,y o2)
{
    cout<<"The sum of object x and y is "<<o1.data+o2.num;
}
int main()
{
    x a;
    y b;
    a.set_data(21);
    b.set_data(41);

    sum(a,b);
}
