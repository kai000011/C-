// Hierarchial Inheritance
#include<iostream>
using namespace std;
class A
{
 protected:
   int a,b;
   public:
   void input()
   {
    cout<<"Enter two Numbers"<<endl;
    cin>>a>>b;
   }
};
/* A void :: input()
{
    cout<<"Enter two Numbers"<<endl;
    cin>>a>>b;
} */
class B : public A
{
    int c;
    public:
    void add()
    {
    c=a+b;
    cout<<"Addition"<<c<<endl;
    }
};
class C : public A
{
    int c;
    public: 
    void sub()
    {
    c=a-b;
    cout<<"Substraction"<<c<<endl;
    }
};
int main()
{
    B b;
    b.input();
    b.add();

    C c;
    c.input();
    c.sub();
return 0;
}
