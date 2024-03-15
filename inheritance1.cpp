//INHERITANCE(MULTIPLE)
#include <iostream>
using namespace std;
class base1
{
    public:
    int a=10;
};
class base2
{
    public:
    int b=20;
    
};
class derive1:public base1,public base2
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
        m=a+b+c;
        cout<<"Total "<<m<<endl;
    }
};

int main()
{
    derive1 obj;
    obj.input();
    obj.output();
    return 0;
}