#include<iostream>
using namespace std;
class B;
class A
{
    int x;
public:
    void set_data(int d)
    {
        x=d;
    }
    void display()
    {
        cout<<" value of x of class a is "<<x<<endl;
    }
    friend void add(A &,B);
};
class B
{
    int x;
public:
    void set_data(int d)
    {
        x=d;
    }
    void display()
    {
        cout<<" value of x of class b is "<<x<<endl;
    }
    friend void add(A &,B);
};
void add(A &obj1,B obj2)
{
    obj1.x=obj1.x+obj2.x;
}
int main()
{
    A obj;
    obj.set_data(34);

    B obj1;
    obj1.set_data(87);
    obj.display();
    obj1.display();
    add(obj,obj1);
    cout<<" display sum of two object store in class A data member x because we pass referance of class a ";
    obj.display();

}

