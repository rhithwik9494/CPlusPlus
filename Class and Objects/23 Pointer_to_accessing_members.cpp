#include<iostream>
using namespace std;

class A
{
public:

    int a;

    void show()
    {
        cout<<a;
    }

};
 int A::*p=&A::a;
int main()
{

    A obj;
    obj.*p=90;
    cout<<obj.a;
    cout<<obj.*p;

    A *o=&obj;

   cout<<o->*p;


}
