#include<iostream>
using namespace std;

class complex
{
    int a;
    int b;
public:
    friend complex sum_of_complex_number(complex ,complex );
    void set_data(int c,int d)
    {
        a=c;
        b=d;
    }
    void display()
    {
        cout<<"sum of complex number "<<a <<"+"<< b<<"i";
    }
};
complex sum_of_complex_number(complex o1,complex o2)
{
    complex o3;
    o3.set_data((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main()
{
    complex c1,c2,res;
    c1.set_data(12,40);
    c2.set_data(2,5);

    res=sum_of_complex_number(c1,c2);
    res.display();
}
