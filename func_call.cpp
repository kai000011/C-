#include<iostream>
using namespace std;
void fun2(int a,int b)  //() ke andar jo ha usa formal parameter kehta ha 
{
    //a=110; b=210;
    //idhar a aur b specify kar diya to main ma parameter dene ka koi fayda nahi ha 
    cout<<a<<" "<<b<<endl;
}
void fun1(int a,int b)   
{
    a=110; b=210;
    cout<<a<<" "<<b<<endl;
}
int main()
{
    fun2(11,12); //function calling 
    fun1(11,12);
    return 0;
}