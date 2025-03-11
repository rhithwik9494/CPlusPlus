#include<iostream>
using namespace std;

class complex
{
    int a,b;
public:
    void set_data(int c,int d)
    {
        a=c;
        b=d;
    }
    void display()
    {
        cout<<"sum of complex number is "<<a <<"+"<<b<<"i"<<endl;
    }
    void sum_of_complex_number(complex,complex);
};
void complex :: sum_of_complex_number(complex c1,complex c2)
{
    a=c1.a+c2.a;
    b=c1.b+c2.b;
}
int main()
{
    complex c1,c2,c3;
    c1.set_data(2,4);
    c2.set_data(4,7);

    c3.sum_of_complex_number(c1,c2);

    c1.display();
    c2.display();
    c3.display();
}
