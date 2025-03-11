#include<iostream>
using namespace std;

class sample
{
    int a;
    int b;
public:
     friend float sum(sample);
    void set_data()
    {
      a=56;
      b=33;
    }
};
float sum(sample obj)
{
    return (obj.a+obj.b)/2;
}
int main()
{
    sample s;
    s.set_data();

    cout<<"the value is = "<<sum(s);
}
