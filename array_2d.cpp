#include<iostream>
using namespace std;
int main()
{
   int arr[3][3],i,j;
   cout<<"Enter array Elements :" ;
   for ( i = 0; i<3 ; i++)
   {
    for ( j = 0; j <3 ; j++)
    {
        cin>>arr[i][j] ;
    } 
   }
   cout<<"\nArray Elements :\n" ;
    for ( i = 0; i<3 ; i++)
   {
    for ( j = 0; j <3 ; j++)
    {
        cout<<arr[i][j]<<" " ;
    } 
    cout<<endl ;
   }
   return 0;
}