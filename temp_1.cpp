/*
Two types of templates
This program is of function template or generic function
*/
#include<iostream>
using namespace std;
template <class A>
// A is reference and not class "A will be used as a datatype
//for all datatypes"
void print(A x,A y)
{
    cout<<x<<"  "<<y<<endl;
}
int main()
{
    print(10,20);
    print('a','b');
    print(45.4,33.3);
    print("Shiv","Shivam");

    return 0;
}