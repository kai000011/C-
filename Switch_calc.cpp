 #include <iostream>
 using namespace std;
 int main()
 {
    int a,b ;
    char Opr;
    cout<<"Enter value of a"<<endl ;
    cin>>a ;
    cout<<"Enter value of b"<<endl ;
    cin>>b ;
    cout<<"Enter the operator"<<" ";
    cin>>Opr;
    switch (Opr)
    {
    case '+' :
        cout<< a + b ;
        break;
    case '-' : 
        cout<< a - b ;
        break;
    case '*' :
        cout<< a * b ;
        break;
    case '/' : 
        cout<< a / b ;
        break; 
    default: 
        cout<<"invalid" ;
        break;
    }
   return 0;
 }