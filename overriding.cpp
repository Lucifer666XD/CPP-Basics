#include <iostream>
using namespace std;
class a
{
    int z,b;
    public:
    a(int x,int y)
    {
        z=x;
        b=y;
    }
    void show()
    {
        cout<<"A="<<z<<"B="<<b;
    }
    void operator-()
    {
        z=-z;
        b=-b;
    }
};
int main()
{
    a obj(10,20);
    obj.show();
    -obj;
    obj.show();
    return 0;
}