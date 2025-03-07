#include<iostream>
using namespace std;
struct student
{
    int id;
    string name;
};
struct address
{
    string sname;
    int hno;
    struct student s,*s1;
}a1;
int main()
{
    a1.s1=&a1.s;
    a1.s1->id=103;
    a1.s1->name="john";
    a1.sname="chandwa more";
    a1.hno=22;
    cout<<" id :- "<<a1.s1->id<<endl<<" Name :- "<<a1.s1->name<<endl<<" street_name :- "<<a1.sname<<endl<<" House no :- "<<a1.hno;

}
