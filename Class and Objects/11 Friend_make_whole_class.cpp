#include<iostream>
using namespace std;
class complex;  ///forward declaration
class calculater
{
public:
    int a,b;
    void sum(int c,int d)
    {
        a=c;
        b=d;
    }
    int sum_of_real_number(complex,complex );
    int sum_of_complex_number(complex,complex);
};
class complex
{
    int a,b;
public:
 friend class calculater;
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
int calculater::sum_of_complex_number(complex o1,complex o2)
{
    return o1.b+o2.b;
}
int main()
{
    complex c1,c2;
    c1.set_data(12,34);
    c2.set_data(10,54);

    calculater calc;
    int res,resc;
    res=calc.sum_of_real_number(c1,c2);
    resc=calc.sum_of_complex_number(c1,c2);
    c1.display();
    c2.display();
    cout<<"sum real number of o1 and o2 is :- "<<res<<endl;
    cout<<"sum complex number of o1 and o2 is :- "<<resc<<endl;
}
