#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // ofstream Win("C:\\Users\\lenovo\\OneDrive\\Desktop\\Win.txt");
    // cout<<"file creation successful";
   // Win<<"Hello File Handling ...";
   //above commented line shows how to write using file 
   //handling and how a file is created
   string str;
   ifstream Win("C:\\Users\\lenovo\\OneDrive\\Desktop\\Win.txt");

   while (getline(Win,str))
   {
    cout<<str<<endl;
   }
   
    Win.close();
    return 0;
}