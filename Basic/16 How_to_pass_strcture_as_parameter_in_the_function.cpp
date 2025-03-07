#include<iostream>
using namespace std;
struct employee
{
    int id;
    string name;
    string dept;
};
void display(struct employee ep1)
{
    ep1.id=32;
    ep1.name="prince";
    ep1.dept="it";
    cout<<" Employee id :- "<<ep1.id<<endl<<" Employee Name:- "<<ep1.name<<endl<<" Employee dept :- "<<ep1.dept;
}
int main()
{
    struct employee ep;
     display(ep);
}
