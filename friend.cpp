#include<iostream>
using namespace std;
class Shiva
{
    private:
     string game;

     public:
      void watch()
      {
         game="I am watching game" ;
      }
      friend void shiv(Shiva s);
      //s is reference
};
void shiv(Shiva s)
{
    cout<<"I am Shiv,  "<<s.game; 
}
int main()
{
    Shiva so;
    so.watch();
    shiv(so);

    return 0;
}
