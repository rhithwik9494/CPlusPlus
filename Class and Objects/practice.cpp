#include<iostream>
using namespace std;

class marks
{
    int inmarks;
    int exmarks;
public:
    void set_data(int x,int y)
    {
        inmarks=x;
        exmarks=y;
    }
    void display()
    {
        cout<<inmarks<<endl;
        cout<<exmarks<<endl;
    }
    marks operator+(marks obj)
    {
        marks temp;
        temp.inmarks=inmarks+obj.inmarks;
        temp.exmarks=exmarks+obj.exmarks;
        return temp;
    }
};
int main()
{
    marks m1,m2,m3;
    m1.set_data(89,90);
    m2.set_data(98,78);
    m3=m1+m2;
    m3.display();
}
