#include <iostream>
using namespace std;
union fun
{
    int roll_no ;
    char name[20];
    float marks; 
};
int main()
{
  union fun f;
  cout<<"Enter student roll no :" ;
  cin>>f.roll_no ;
  cout<<"Student roll no :"<<f.roll_no<<endl;

   cout<<"Enter student name :" ;
  cin>>f.name ;
  cout<<"Student name :"<<f.name<<endl;

   cout<<"Enter student marks :" ;
  cin>>f.marks ;
  cout<<"Student marks :"<<f.marks<<endl;
  return 0;
  
}