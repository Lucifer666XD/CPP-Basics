//GLOBAL CLASS

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
    void output()
    {
        cout<<"The value of x is:"<<x;

    }
    
};
class b:public a
    {
        int y;
        public:
        void in()
        {
            cout<<"Enter the value of y:";
            cin>>y;
        }    
        void out()
        {
            cout<<"The value of y is:"<<y;
        }
        

    };
int main()
{
    b obj;
    obj.input();
    obj.output();
    
    return 0;
}