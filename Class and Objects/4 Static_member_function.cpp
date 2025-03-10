#include<iostream>
using namespace std;

class employee
{
    int id;
    static int counter;
public:
    void set_data();
    void get_data();
static void showcount()//static function call only static member or static data
{
    cout<<"the value of counter is "<<counter<<endl;
}
};
void employee::set_data()
{
    cout<<"Enter id of employee  :- ";
    cin>>id;
    counter++;
}
void employee::get_data()
{
    cout<<"The id of "<<counter<<" employee is "<<id<<endl;
}
int employee ::counter;//static variable ko class ke bahar declared karte hai counter employe class ka member hai isliya ases likhenge
int main()
{
    employee prince,ram,mohan;
    prince.set_data();
    prince.get_data();
    employee::showcount();//calling of static function
    ram.set_data();
    ram.get_data();
    employee::showcount();
    mohan.set_data();
    mohan.get_data();
    employee::showcount();

}

