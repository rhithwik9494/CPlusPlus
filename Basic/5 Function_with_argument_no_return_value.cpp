#include<iostream>
using namespace std;
void display(int a,int b)   /// call by value
{
  cout<<"Result = "<<a*b;
}
int main()
{
  display(34,5);  /// actual parameter
}
