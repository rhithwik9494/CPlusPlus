#include<iostream>
using namespace std;
struct employee
{
    int id;
    string name;
    string dept;
}e;
void display(struct employee *e1)
{
    e1->id=34;
    e1->name="rithwik";
    e1->dept="networking";
    cout<<" Id :- "<<e1->id<<endl<<" Department :- "<<e1->dept<<endl<<" Name :- "<<e1->name;
}
int main()
{
    display(&e);
}
