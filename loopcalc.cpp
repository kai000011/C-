#include<iostream>
using namespace std;
int main()
{
    int a,b,ch,add,sub,mult,div;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b; 
    cout<<"Enter choice"<<endl;
    cin>>ch;
    if(ch==1)
    {
        add=a+b;
        cout<<add;
    }
     if(ch==2)
    {
        sub=a-b;
        cout<<sub;
    }
     if(ch==3)
    {
        mult=a*b;
        cout<<mult;
    }
     if(ch==4)
    {
        div=a/b;
        cout<<div;
    }
    return 0;
}