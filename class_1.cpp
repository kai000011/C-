#include<iostream>
using namespace std;
class Shiva
{
   private:
   int target;
   string msg;
   public:
   void goals()
   {
    target=3;
    cout<<"I have "<<target<<"targets"<<endl;
   }
   void data()
   {
    msg="I will my business idea a try";
    cout<<msg;
   }
};
int main()
{
    Shiva Shiv;
    Shiv.goals();
    Shiv.data();
    return 0;
}