#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char xyz[]="Live_Zero" ;
    char abc[]="Evil_Zero";
    char fast[20] ;
    cout<<xyz<<endl;
    //string always char
    int a=strlen(xyz) ;
    cout<<a<<endl ;
    //str length
    // strrev(xyz);
    // cout<<(xyz)<<endl ; 
    //str reverse
    strcat(xyz,abc);
    cout<<xyz<<endl ;
    // connecting two string in continuity
    strcpy(fast,xyz);
    cout<<fast<<endl ;
    // copying a string into an empty string
    strlwr(xyz);
    cout<<xyz<<endl ;
    //converting uppercase into lowercase
    strupr(xyz) ;
    cout<<xyz<<endl ;
    //converting lowercase into uppercase  
}