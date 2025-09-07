#include<iostream>
using namespace std;

class data
{
    int a;
    int b;
public:
    void set_data(int x,int y)
    {
        a=x;
        b=y;
    }
    void display()const
    {
        cout<<a<<" "<<b<<endl;
    }

};
int main()
{
    data d1;
    d1.set_data(34,45);
    d1.display();
}
