//LOCAL CLASS
#include<iostream>
using namespace std;
void fun() 
{
class a
{
    int x;
    public:
    void input()
    {
        cout<<"Enter the value of x";
        cin>>x;
    }
    void output()
    {
        cout<<"The value of x is:"<<x;

    }
    
};
a obj;
obj.input();
obj.output();
}
int main()
{
    fun();
    return 0;
}