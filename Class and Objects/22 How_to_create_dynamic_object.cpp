#include<iostream>
using namespace std;
class nex
{
public:
    int a;
    int b;
    void display()
    {
        cout<<" Value of a is "<<a<<endl<<" and b is "<<b<<endl;
    }
};
int main()
{
    nex *obj=new nex;
    obj->a=33;
    obj->b=78;
    obj->display();
}
