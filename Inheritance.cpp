//INHERITANCE(MULTILEVEL)
#include <iostream>
using namespace std;
class father
{
    int age;
    public:
    string surname="Ali";
    string name="Akbar";
};
class son1:public father
{
    int age;
    public:
    string name1;
    void input()
    {
    cout<<"enter son's name :"<<endl;
    cin>>name1;
    }
    void output()
    {
        cout<<name1<<" "<<surname<<endl;
    }
    
};
class son2:public father
{
    int age;
    public:
    string name2;
    void input2()
    {
    cout<<"enter son's name :"<<endl;
    cin>>name2;
    }
    void output2()
    {
        cout<<name2<<" "<<surname<<endl;
    }
};

int main()
{
    son1 obj;
    obj.input();
    obj.output();
    
    son2 obj2;
    obj2.input2();
    obj2.output2();
    return 0;
}