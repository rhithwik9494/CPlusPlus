#include<iostream>
using namespace std;

class weight
{
    int liter,ml;
public:
    void set_data()
    {
        cout<<" Enter weight in liter ";
        cin>>liter;
        cout<<" Enter weight in ml ";
        cin>>ml;
    }
    void display()
    {
        cout<<liter<<" liter and  "<<ml<<" ml"<<endl;
    }
    void sum_of_weight(weight,weight);
};
void weight :: sum_of_weight(weight w1,weight w2)
{
    ml=w1.ml+w2.ml;
    liter=ml/1000;
    ml=ml%1000;
    liter=liter+w1.liter+w2.liter;
}
int main()
{
    weight w1,w2,w3;
    w1.set_data();
    w2.set_data();
    w3.sum_of_weight(w1,w2);

    w1.display();
    w2.display();
    cout<<"_______________________________ "<<endl;
    w3.display();
    cout<<"_______________________________ "<<endl;
}

