#include<iostream>
using namespace std;
class B; 
class A
{
   private:
    int x ;

    public:
      void lend()
      {
        x=100;
      }
      friend void lav(A a,B b);
};
class B
{
    private:
    int y;

    public:
    void give()
    {
     y=1000;
    }
     friend void lav(A a,B b);
};
void lav(A a,B b)
{
    int Profit;
    Profit=b.y - a.x ;
    cout<<"Total profit =  "<<Profit; 
}
int main()
{
    A obj;
    obj.lend();
    B obj_1;
    obj_1.give();
    lav(obj,obj_1);
    return 0;
}