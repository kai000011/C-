#include<iostream>
using namespace std;
class A
{
    int x,y;
    public:
    A(int a,int b) //parameterized
    {
        x=a; y=b;
        cout<<x<<" "<<y<<endl;
    }
    A(A &fur)   //fur is used for refernce to copy //copy constructor
    {
        x=fur.x;
        y=fur.y;
        cout<<x<<" "<<y<<endl;
    }
};
class B
{
    public:
    B(int a,int b) //parameterized
    {
       // x=a; y=b;
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    A obj(100,200);
    A obj2=obj;
    B obj3(10,20);
    return 0;
}