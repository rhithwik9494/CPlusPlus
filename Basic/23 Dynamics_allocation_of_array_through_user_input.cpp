#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int n=0;
    cout<<" Enter size of array :- ";
    cin>>n;
    ptr=new int[n];
    cout<<endl<<endl;
    cout<<" Enter array element "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>*(ptr+i);
    }
    for(int i=0;i<n;i++)
    {
        cout<<ptr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<*(ptr+i);
    }
}
