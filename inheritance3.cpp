//INHERITANCE(HYRBID)
#include <iostream>
using namespace std;
class base1
{
    protected:
    int a=10;
};
class derive1:virtual public base1
{
    protected:
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
class derive2:virtual public base1
{
    protected:
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
class xyz:public derive2,public derive1
{
    int y;
    public:
    int o;
    void inputz()
    {
    cout<<"enter c :"<<endl;
    cin>>o;
    }
    void outputz()
    {
        y=o*a;
        cout<<"X = "<<y<<endl;
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
    
    xyz obj3;
    obj3.inputz();
    obj3.outputz();
    return 0;
}