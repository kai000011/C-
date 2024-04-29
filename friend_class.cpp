#include<iostream>
using namespace std;
class giver
{
    int a,b;
    public:
     void give()
     {
        a=100; b=200;
     }
    friend class taker;
};
class taker
{
    int c;
    public:
    void taken(giver g)
    {
        c= g.a+ g.b;
        cout<<c;
    }
};
int main()
{
    giver gi;
    gi.give();
    taker ta;
    ta.taken(gi);
    
    return 0;
}