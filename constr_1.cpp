#include<iostream>
using namespace std;
class A
{
    int a,b;
    public:
    A() //default
    {
        a=10; b=20;
        cout<<a<<" "<<b;
    }
};
int main()
{
    A abc;
    return 0;
}