//multi level inheritance
#include<iostream>
using namespace std;
class A
{
    protected:
          int a,b;
    public:
        void input()  
        {
            cout<<"Enter two Numbers: ";
            cin>>a>>b;
        }
};
class B : public A
{
    protected:
        int c;
     public:
     void add()
     {
        c=a+b;
        cout<<"Addition of given numbers = "<<c<<endl;
     }
     void sub()
     {
       c=a-b;
       cout<<"Substraction of given numbers = "<<c<<endl;
     }
};
class C : public B
{
      public:
     void multiply()
     {
        c=a*b;
        cout<<"Multiplication of given numbers = "<<c<<endl;
     }
     void div()
     {
       c=a/b;
       cout<<"Division of given numbers = "<<c<<endl;
     }
};
int main()
{
  C cal;  
  cal.input();
  cal.add(); 
  cal.sub();
  cal.multiply();
  cal.div(); 

return 0;
}