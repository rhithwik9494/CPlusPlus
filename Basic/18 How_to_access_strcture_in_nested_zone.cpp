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
    struct student s;
}a;
int main()
{
    a.s.id=103;
    a.s.name="john";
    a.sname="chandwa more";
    a.hno=22;
    cout<<" id :- "<<a.s.id<<endl<<" Name :- "<<a.s.name<<endl<<" street_name :- "<<a.sname<<endl<<" House no :- "<<a.hno;

}
