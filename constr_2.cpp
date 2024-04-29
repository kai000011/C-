#include<iostream>
using namespace std;
class A
{
    public:
    A(int a,int b) // parameterized
    {
        cout<<a<<" "<<b;
    }
};
int main()
{
    A abc(10,20);
    return 0;
}