#include<iostream>
using namespace std;
class abc
{
    //by default member function aur data member private hota ha 
  public:
  void show()
  {
    cout<<"My first class in cpp";
  }
};
int main()
{
    abc xyz;
    xyz.show();
    //xyz is object 
    return 0;
}