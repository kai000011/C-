#include <iostream>
using namespace std;
 void fun()
 {
   int a=10;
   static int b=10;
   cout<<a<<" "<<b<<endl;
   ++a; ++b;  
 }
 int main()
 {
    fun();
    fun();
    fun();
    return 0;
    // the memory of auto int a is destroyed when program comes
    //out of void fun tht is why the value of a remains same while
    //value of b increases
 }