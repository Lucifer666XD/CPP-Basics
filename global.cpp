#include<iostream>
using namespace std;
class a
{
    int x;
    public:
    void input()
    {
        cout<<"Enter the value of x";
        cin>>x;
    }
    void disp()
    {
        cout<<"The value of x is:"<<x;
    }
};
class b:public a
{
};
int main()
{
    b obj;
    obj.input();
    obj.disp();
    return 0;
}