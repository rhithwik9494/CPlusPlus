#include<iostream>
#include<string>
using namespace std;

class binary
{
    string s;
public:
    void read();
    void chk_binary();
    void ones_complment();
    void display();
};
void binary::read()
{
    cout<<" Input binary number :";
    cin>>s;
    chk_binary();
}
void binary::chk_binary()
{
    int i;
    for(i=0;i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"invalid binary formate........";
            exit(0);
        }
    }
}
void binary::ones_complment()
{
    int i;
    for(i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
            s.at(i)='1';
        else
            s.at(i)='0';
    }
}
void binary::display()
{
    cout<<" Display binary number : "<<s <<endl;
}
int main()
{
    binary b;
    b.read();
    b.display();
    b.ones_complment();
    b.display();
}
