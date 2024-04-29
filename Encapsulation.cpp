#include<iostream>
using namespace std;
class thief
{
    private:
    string name,address;
    int mob;

    public:
    void input()
    {
        name="chor";
        address="old Purulli Road";
        mob=78964652;
    }
     void output()
    {
        cout<<name<<endl;
        cout<<address<<endl;
        cout<<mob<<endl;
    }
};
class Police: public thief
{
//Police could access thief through public function only
// it could not directly find information about thief
//because it was private
};
int main()
{
    thief t;
    t.input();
    t.output();
   
   Police p;
   p.input();
   p.output();

    return 0;
}
