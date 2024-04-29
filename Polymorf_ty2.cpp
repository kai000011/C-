// function Overriding 
#include<iostream>
using namespace std;
class A
{
    public:
    // if we make function of class A virtual than pointer method
    // below will execute the same function of class B
       void person()
       {
        cout<<"good morning"<<endl;
       }
};
class B : public A
{
     public:
       void person()
       {
        cout<<"good night"<<endl;
       }
};
int main()
{
    B obj;
    obj.person();
// You can access class A function by below method
    obj.A::person(); 
// You can access class A function by pointer
    A *p;
    p=&obj;
    p->person();
    return 0;
}