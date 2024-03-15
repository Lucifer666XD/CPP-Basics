//CONSTRUCTOR-COPY

#include<iostream>
using namespace std;
class a
{
    int x,y;
    public:
    a(int a)
    {
        x=a;
        //cout<<"Enter the value of x";
        //cin>>x;
    }
    a(a &r)
    {
        x=r.x;
    }
    void output()
    {
        cout<<"The value of x is:"<<x<<endl;

    }
    
};
int main()
{
    a obj=a(50);
    a obj2=obj;
    obj.output();
    obj2.output();
    return 0;
}