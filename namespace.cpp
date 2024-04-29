#include<iostream>
namespace A
{
    int a;
    void print()
    {
        a=10;
        std::cout<<a<<std::endl;
        //endl lagana pe ye error dikha rha ha 
        // error says "undefined"
    }
}
namespace B
{
    int a; 
    void print()
    {
        a=20;
        std::cout<<a<<std::endl;
        //endl lagana pe ye error dikha rha ha 
        // error says "undefined"
    }
}
int main()
{
    A::print();
    B::print();
    return 0;
}