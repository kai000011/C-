#include<iostream>
using namespace std;
int main()
{
 cout<<"Execution started..."<<endl;
 int a,b,c ;
 cout<<"Enter two Numbers:" ;
 cin>>a>>b;

 try
 {
    if(b==0)
    throw b;
    c=a/b;
    cout<<"Result: "<<c;
 }
 catch(int x)
 {
    cout<<"can't divide by "<<x;
 }
   cout<<endl<<"Execution Ended...";
   return 0;
}