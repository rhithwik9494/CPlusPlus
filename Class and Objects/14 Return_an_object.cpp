#include<iostream>
using namespace std;

class matrix
{
    int m[3][3];
public:
    friend matrix transpose(matrix );
     int i,j;
    void set_data()
    {
        cout<<"Enter element in array "<<endl;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<"m["<<i<<"]["<<j<<"] = ";
                cin>>m[i][j];
            }
        }
    }
    void display()
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<" "<<m[i][j];
            }
            cout<<endl;
        }

    }
};
matrix transpose(matrix obj1)
{
    matrix obj2;
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            obj2.m[i][j]=obj1.m[j][i];
        }
    }
    return(obj2);
}
int main()
{
    matrix m1,res;
    m1.set_data();

    res=transpose(m1);
    cout<<"After transpose matrix element are"<<endl;
    res.display();

}
