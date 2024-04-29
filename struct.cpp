 #include<iostream>
 using namespace std;
 struct fun1
 {
    int roll;
    char name[20];
    float marks;
 };
int main()
{
    struct fun1 f;
    cout<<"Enter student roll no:"<<" " ;
    cin>>f.roll;
    cout<<"Enter student name :"<<" ";
    cin>>f.name;
    cout<<"Enter student marks :"<<" ";
    cin>>f.marks;
    
    cout<<f.roll<<endl<<f.name<<endl<<f.marks<<endl ;
    return 0;
}