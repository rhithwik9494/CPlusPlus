#include<iostream>
using namespace std;
class emax
{
    public:
    string msg;
    void display()
    {
        cout<<msg;
    }
};
int main()
{
    emax obj;
    obj.msg="we are growing";
    obj.display();
}
