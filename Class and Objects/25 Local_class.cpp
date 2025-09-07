#include<iostream>
using namespace std;
void slist(int r,string s)
{
    class student
    {
        int roll;
        string name;
    public:
        void set_data(int r,string s)
        {
            roll=r;
            name=s;
        }
        void display()
        {
            cout<<roll<<" "<<name<<endl;
        }
    };
    student obj;
    obj.set_data(r,s);
    obj.display();
}
int main()
{
    slist(23,"prince kumar");
}
