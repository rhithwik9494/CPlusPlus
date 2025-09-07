#include<iostream>
using namespace std;

class matrix
{
    int m[2][2];
public:
    friend matrix multiply(matrix,matrix);
    int i,j;
    void read()
    {
     cout<<"Enter element of first matrix "<<endl;
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                cout<<"m["<<i<<"]["<<j<<"] = ";
                cin>>m[i][j];
            }
        }
    }
    void display()
    {
        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                cout<<" "<<m[i][j];
            }
            cout<<endl;
        }
    }
};
matrix multiply(matrix obj1,matrix obj2)
{
    matrix obj3; ///creating an object
    int i,j,k;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            int total=0;
            for(k=0;k<2;k++)
            {
                total+=obj1.m[i][k]*obj2.m[k][j];
            }
             obj3.m[i][j]=total;
        }
    }
    return(obj3);///returning an object
}
int main()
{
    matrix m1,m2,res;
    m1.read();
    m1.display();

    cout<<" Enter element in second object "<<endl;
    m2.read();
    m2.display();

    cout<<" Display multiplication of two matrix "<<endl;
    res=multiply(m1,m2);
    res.display();
}

