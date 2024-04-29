// function Overloading (Compile time polymorphism)
//jab ham output pata laga leta ha, run krna se pehle hi usa 
//compile time polymorphism
#include<iostream>
using namespace std;
class A
{
 int a,b,s,m;
 public:
 void person()
 {
    cout<<"Enter two Numbers: ";
    cin>>a>>b;
    s=a+b;
    cout<<"Addition "<<s<<endl;
 }
 void person(int x, int y)
 {
    m=x*y;
    cout<<"Multiplication "<<m<<endl;
 }
};
int main()
{
    A h;
    h.person();
    h.person(10,30);
    return 0;
}