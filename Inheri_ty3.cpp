//Multiple Inheritance
#include<iostream>
using namespace std;
     int a,b,c;
class A
{
  public:
     void input();
     void add();
};
void A :: input()
{
cout<<"Enter two numbers : "<<endl;
cin>>a>>b;
}
void A :: add()
{
 c=a+b;
 cout<<"Addition "<<c<<endl;
}
class B
{
   public:
   void sub();
};
void B :: sub()
{
  c=a-b;
  cout<<"Substraction "<<c<<endl;  
}
class C : public A,public B
{
    public:
  void mult();
};
void C :: mult()
{
    c=a*b;
    cout<<"Multiplication "<<c<<endl;
}
int main()
{
    C obj;
    obj.input();
    obj.add();
    obj.sub();
    obj.mult();

    return 0;
}