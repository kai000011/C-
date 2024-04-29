//Single or Simple Inheritance
#include<iostream>
using namespace std;
class investor
{
    protected:
    int investment;
    //for classes to inherit the data members(variables)
    //as well they are set protected but not private
    public:
     void input()
     {
        investment=1000;
     }
};
class Me : public investor
{
    int my_money;
    public:
       void money()
       {
        my_money=10000;
        cout<<"Investment = "<<investment<<endl;
        cout<<"My Money = "<<my_money;
       }
};
int main()
{
    Me m;
    m.input();
    m.money();

    return 0;
}
