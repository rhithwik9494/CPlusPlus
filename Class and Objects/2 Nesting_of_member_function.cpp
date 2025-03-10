#include<iostream>
using namespace std;

class binary  //we define class
{
  string s; //by default this is private
  void chk_bin(void);//this is private we can not call directly only jo class ke method hai wahi use kar sakte hai
  public :
  void read(void);
  void ones_compliment(void);
  void display(void);
};

void binary ::read(void)
{
  cout<<" ENTER A BINARY NUMBER "<<endl;
  cin>>s;
}
void binary ::chk_bin(void)
{
  int i;
for(i=0;i<s.length();i++)
{
  if(s.at(i)!='0' && s.at(i)!='1')
  {
   cout<<"\n THIS IS NOT BINARY NUMBER ";
   exit(0);
  }
}
}
void binary ::ones_compliment(void)
{
    int i;
  chk_bin();//this is called nesting agar ap chate ha automatically run kar ja to of member we can write here also jise object ke liya ye function work kar raha hai use kke liya chhk binary work karega
  for(i=0;i<s.length();i++)
  {
    if(s.at(i)=='0')
    {
      s.at(i)='1';
    }
    else
    {
      s.at(i)='0';
    }
  }
}
void binary ::display(void)
{
    int i;
  cout<<"\n DISPLAY BINARY NUMBER ";
  for(i=0;i<s.length();i++)
  {
    cout<<s.at(i);
  }
  cout<<endl;
}
int main()
{
  binary b; //here we create a object
  b.read();
 // b.chk_bin();
  b.display();
  b.ones_compliment();
  b.display();
  return 0;
}
