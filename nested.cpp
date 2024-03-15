#include<iostream>
using namespace  std;
class Father
{
    public:
    class son
    {
        int x,y;
        public:
        void  getdata()
        {
            cout<<"Enter the value of x and y : ";
            cin>>x>>y;
        }
        void display()
        {
            cout<<"x ="<<x<<"y ="<<y;
        }


    };
};    
int main() {
    Father::son obj;
    obj.getdata();
    obj.display();
    return 0;
}