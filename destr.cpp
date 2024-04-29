#include<iostream>
using namespace std;
int count=0;
class A
{
    public:
    A()
    {
        cout<<"object  "<<++count<<"  created"<<endl;
        //constr cannot be inherited
        //copy constr
    }
    ~A()
    {
        cout<<"object  "<<count--<<"  deleted"<<endl;
    }
};
int main()
{
    A abc,xyz;

    return 0;
}