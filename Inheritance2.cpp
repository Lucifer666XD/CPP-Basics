//INHERITANCE(HIERARCHICAL)
#include <iostream>
using namespace std;
class base1
{
    public:
    int a=10;
};
class derive1:public base1
{
    int x,z;
    public:
    void input1()
    {
       cout<<"Enter z :"<<endl;
       cin>>z;
    }
    void output1()
    {
        x=z+a;
        cout<<"X = "<<x<<endl;
    }
};
class derive2:public base1
{
    int m;
    public:
    int c;
    void input()
    {
    cout<<"enter c :"<<endl;
    cin>>c;
    }
    void output()
    {
        m=c-a;
        cout<<"Total "<<m<<endl;
    }
};

int main()
{
    derive1 obj1;
    obj1.input1();
    obj1.output1();
    
    
    derive2 obj;
    obj.input();
    obj.output();
    return 0;
}