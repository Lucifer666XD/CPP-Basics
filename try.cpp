#include <iostream>
using namespace std;

int main()
{
    class A
    {
        int a,b;
        public:
        int sum;
        void input()
        {
        cout<<"Enter a b";
        cin>>a>>b;
        }
        void  display()
        {
            int diff=a+b;
            cout<<"Sum of "<<a<<" and "<<b<<" is="<<diff<<endl;
        }
    };
    A obj1;
    obj1.input();
    obj1.display();



  return 0;
}