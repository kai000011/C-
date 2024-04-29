#include <iostream>
using namespace std;
int a; //extern (global) (Memory created in RAM) 
//(can be used till the program is terminated)
int main()
{
    int b; //auto(local)
    //auto is active within the block only
    static int c; // static
    //static can be used until the program is terminated
    register int d; //register  it has fastest execution because
    //register is close to CPU
    //register is active within the block only
    cout<<a<<endl; //0
    cout<<b<<endl; //garbage
    cout<<c<<endl; //0
    cout<<d<<endl; //garbage
    return 0;
}
