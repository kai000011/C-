/*
Two types of templates
This program is of Class template or generic class
*/
#include<iostream>
using namespace std;
template <class A>
class Robo
{
 public:
 Robo(A x,A y) // parameterized constructor
 {
    cout<<x<<" "<<y<<endl;
 }
};
int main()
{
    Robo <int> obj(100,200);
    // jab bhi datatype change krna ho to
    // Robo <changed> obj(100,200);
    //ye jo upar robo likha is naam ka class aur function dono
    // hona ka mangta ha
    return 0;
    
}