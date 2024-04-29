#include <iostream>
using namespace std;
int main()
{
    int age ;
    cout<<"Enter your age"<<endl ;
    cin>>age ;
    if (age<=18)
    {
        goto Not_Vote ;
    }
    else
    {
        goto vote ;
    }
    
    Not_Vote:
     cout<<"You are not eligible for voting Kid !!!" ;
     return 0;

     vote :
     cout<<"You are eligible for voting young man !!!" ;
     return 0;
}