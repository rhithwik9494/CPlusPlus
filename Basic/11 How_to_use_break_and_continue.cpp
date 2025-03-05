#include<ioastream>
using namespace std;
int main()
{
 int i;
 for(i=0;i<=5;i++)
 {
    if(i==3)
    break;
    cout<<(i+2)%2;
 }
 for(i=0;i<=5;i++)
 {
  if(i==3)
   continue;
  cout<<(i*5)/2;
 }
}
