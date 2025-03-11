#include<iostream>
using namespace std;

class time
{
    int hours;
    int minutes;
public:
    void set_data(int h,int m)
    {
        hours=h;
        minutes=m;
    }
    void get_data()
    {
        cout<<hours<<" hours and";
        cout<<minutes<<" minutes"<<endl;
    }
    void add(time,time);///declaration of member function with object as argument
};
void time :: add(time t1,time t2)
{
    minutes=t1.minutes+t2.minutes;
    hours=minutes/60;
    minutes=minutes%60;
    hours=hours+t1.hours+t2.hours;
}
int main()
{
    time t1,t2,t3;
    t1.set_data(4,42);
    t2.set_data(1,28);

    t3.add(t1,t2);

   cout<<" T1 = " ;t1.get_data();
   cout<<" T2 = ";t2.get_data();
   cout<<" T3 = "; t3.get_data();
}
