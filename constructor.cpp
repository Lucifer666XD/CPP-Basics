#include<iostream>
using namespace std;
class a
{
    int c,b;
    public:
    int x,y;
    a()
    {
        x=c,y=b;
        cout<<"Enter the value of a and b";
        cin>>c>>b;
    }
    void display()
    {
        cout<<"The values are a"<<c<<"and b "<<b;
    }

};
void main()
{
    a obj=a();
    obj.display();
}