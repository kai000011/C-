 //types of variable
 #include<iostream>
 using namespace std;
 int b=40; // global
 static int z=50;// global static
 int main()
 {
    int a=10; // local
    static int c=30; // static 
    cout<<a<<" "<<b<<" "<<c<<" "<<z ;
 }
    