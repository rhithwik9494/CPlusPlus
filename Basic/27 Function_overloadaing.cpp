#include<iostream>
using namespace std;
void showdata(int a)
{
    cout<<" It's integer value :- "<<a<<endl;
}
void showdata(double b)
{
    cout<<" It's float value :- "<<b<<endl;
}
void showdata(float c)
{
    cout<<" It's float value :- "<<c<<endl;
}
void showdata(string s)
{
    cout<<" It's string  value :- "<<s<<endl;
}
int main()
{
    showdata(23);
    showdata(34.545);
    showdata("event");
}
