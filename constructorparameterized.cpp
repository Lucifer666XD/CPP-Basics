//CONSTRUCTOR-PARAMETERIZED

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
    void output()
    {
        cout<<"The value of x is:"<<x;

    }
    
};
int main()
{
    a obj=a(50);
    obj.output();
    return 0;
}