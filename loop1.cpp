#include<iostream>
using namespace std;
int main()
{
    int a,b,max;
    cout<<"Enter a and b"<<endl ;
    cin>>a>>b;
    // if(a>b)
    // {
    //     cout<<a;
    // }
    // else{
    //     cout<<b;
    // }
    // using ternary operator
  max=(a>b)?a:b;
  cout<<max;
    return 0;
}