//Friend CLASS
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
    friend class b;
    
};
class b
    {
        public:
        void output(a& ref)
        {
            cout<<"The value of x is:"<<ref.x;
        }
        

    };
int main()
{
    a obj;
    obj.input();
    b obj2;
    obj2.output(obj);
    
    return 0;
}