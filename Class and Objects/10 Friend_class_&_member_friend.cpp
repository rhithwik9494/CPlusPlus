#include<iostream>
using namespace std;
class complex;  ///forward declaration
class calculater
{              ///we make a friend another class of object
public:
    int a,b;
    void sum(int c,int d)
    {
        a=c;
        b=d;
    }
    int sum_of_real_number(complex,complex );
};
class complex
{
    int a,b;
public:
    friend calculater :: sum_of_real_number(complex,complex);
    void set_data(int v1,int v2)
    {
        a=v1;
        b=v2;
    }
    void display()
    {
        cout<<"sum of complex number is "<<a<<"+"<< b<<"i"<<endl;
    }
};
int calculater::sum_of_real_number(complex o1,complex o2)
{
        return o1.a+o2.a;
}
int main()
{
    complex c1,c2;
    c1.set_data(12,34);
    c2.set_data(10,54);

    calculater calc;
    int res;
    res=calc.sum_of_real_number(c1,c2);
    c1.display();
    c2.display();
    cout<<"sum real number of o1 and o2 is :- "<<res;
}
