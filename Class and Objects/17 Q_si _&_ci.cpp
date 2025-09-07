#include<iostream>
#include<cmath>
using namespace std;

class interest
{
    int principle;
    float rate;
    int year;
public:
    float si;
    float ci;
    void simple_intrest(int p,float r,int n)
    {
        int i;
        principle=p;
        rate=r;
        year=n;
            si=(principle*rate*year);
    }
     void compound_intrest(int p,float r,int n)
     {
        int i;
         principle=p;
         rate=r;
         year=n;
             ci=principle*pow(1+rate/100,year);
    }
void display_si()
{
   cout<<" simple interest = "<<si;
}
void display_ci()
{
       cout<<" compound interest = "<<ci;
}
};

int main()
{
    interest ci,si,res;
    si.simple_intrest(400,0.4,2);
    ci.compound_intrest(500,0.3,3);

    si.display_si();
    ci.display_ci();
}

