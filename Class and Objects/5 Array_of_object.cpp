#include<iostream>
using namespace std;

class employee
{
    char name[20];
    int age;
public:
    void set_data();
    void get_data();
};
void employee::set_data()
{
    cout<<"Enter name of worker :- ";
    cin>>name;
    cout<<"Enter age of worker :- ";
    cin>>age;
}
void employee::get_data()
{
    cout<<"Name :- "<<name<<endl;
    cout<<"Age :- "<<age<<endl;
}
int main()
{
    int i,size;
    cout<<"Enter number of worker :- ";
    cin>>size;
    employee worker[size];
    for(i=0;i<size;i++)
    {
        cout<<"Details of worker "<<i+1<<endl;
      worker[i].set_data();
    }
    cout<<endl<<endl;
    cout<<"Display details of all worker"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<"Details of  "<<i+1<<" worker"
        <<endl;
      worker[i].get_data();
    }
}
