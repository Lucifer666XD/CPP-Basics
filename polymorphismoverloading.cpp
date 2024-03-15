//POLYMORPHISM
//(OVERLOADING)
#include <iostream>
using namespace std;
void fun(int x)
{
    cout<<"Age = "<<x<<endl;
}
void fun(string y)
{
    cout<<"Name = "<<y<<endl;
}
void fun(double s)
{
    cout<<"Salary = "<<s<<endl;
}
int main()
{
    fun(20);
    fun("sam");
    fun(23000.00);
    return 0;
}