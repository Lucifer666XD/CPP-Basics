//CONSTRUCTOR-DEFAULT

#include<iostream>
using namespace std;
class a
{
    int x;
    public:
    a()
    {
        cout<<"Enter the value of x";
        cin>>x;
    }
    void output()
    {
        cout<<"The value of x is:"<<x;

    }
    
};
int main()
{
    a obj=a();
    obj.output();
    return 0;
}