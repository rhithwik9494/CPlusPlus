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
}a,*a1;
int main()
{
    a1=&a;
    a1->s.id=103;
    a1->s.name="john";
    a1->sname="chandwa more";
    a1->hno=22;
    cout<<" id :- "<<a1->s.id<<endl<<" Name :- "<<a1->s.name<<endl<<" street_name :- "<<a1->sname<<endl<<" House no :- "<<a1->hno;

}
