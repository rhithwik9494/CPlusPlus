#include<iostream>
using namespace std;
struct employee
{
    int e_id;
    string e_name;
    string e_dept;
}*ep,ep1;
int main()
{
    ep=&ep1;
    ep->e_id=1001;
    ep->e_name="prince kumar";
    ep->e_dept="it";
    cout<<" Employee id :- "<<ep->e_id<<endl<<" Employee Name:- "<<ep->e_name<<endl<<" Employee dept :- "<<ep->e_dept;
}
