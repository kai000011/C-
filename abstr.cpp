/*Abstract class
Virtual base classes in C++ are used to prevent multiple 
instances of a given class from appearing in an 
inheritance hierarchy when using multiple inheritances.
#include<iostream>*/
using namespace std;
class animal
{
 public:
 virtual void sound()=0;
 //Virtual wala function ko override krna jaruri ha
 void eat()
 {
    cout<<"Animal eats ... "<<endl;
 }
};
class dog: public animal
{
   public:
   void sound()
   {
    cout<<"Only one tail..woof woof....."<<endl;
   }
};
int main()
{
    dog D;
    D.eat();
    D.sound();
    return 0;
}