#include<iostream>
using namespace std;
class my_Bank
{
    private:
    int atmPIN,Balance;
    public:
    string bname,IFSC;
    int accNum;

    void input()
    {
         atmPIN=4356;
         Balance=10000;
         bname="Yes Bank";
         IFSC="pytm0987";
         accNum=315645;
    }
    void output()
    {
        cout<<"My Bank Details"<<endl;
        cout<<atmPIN<<endl;
        cout<<Balance<<endl;
        cout<<bname<<endl;
        cout<<IFSC<<endl;
        cout<<accNum<<endl;
    }
};
int main()
{
    my_Bank m;
    m.input();
    m.output();

   cout<<"Sneha tatti trying to acces my Bank account "<<endl;
      //  cout<<atmPIN<<endl;
      //  cout<<Balance<<endl;
      // above two details cannot be accessed by sneha tatti
      // because atmPIN and balance are private therefore both 
      //of these details are hidden to her 
      // this process of hiding is called abstraction
        cout<<m.bname<<endl;
        cout<<m.IFSC<<endl;
        cout<<m.accNum<<endl;
    return 0;
}