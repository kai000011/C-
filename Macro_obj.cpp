#include<iostream>
#define num 9
using namespace std;
int main()
{
    int i,r;  //it can be used when a fractional value is used multiple times
    for(i=1;i<=10;i++)
    {
        r=num*i;
        cout<<num<<"*"<<i<<"="<<r<<endl;
    }
    return 0;
}