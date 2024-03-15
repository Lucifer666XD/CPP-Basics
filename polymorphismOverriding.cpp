//POLYMORPHISM
//(OVERRIDING)
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
    virtual void output()
    {
        cout<<"The value of x is:"<<x;

    }
    
};
class b:public a
    {
        int y;
        public:
        void input()
        {
            cout<<"Enter the value of y:";
            cin>>y;
        }    
        void output()
        {
            cout<<"The value of y is:"<<y;
        }
        

    };
int main()
{
    b obj;
    obj.input();
    obj.output();
    
    a *ptr;
    ptr=&obj;
    ptr->input();
    ptr->output();
    
    
    return 0;
}