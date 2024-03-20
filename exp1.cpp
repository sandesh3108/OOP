#include<iostream>
using namespace std;
int main()
{
    string name,address;
    int id;
    cout<<"Enter name of employee:";
    cin>>name;
    cout<<"Enter ID";
    cin>>id;
    cout<<"Enter Address:";
    cin>>address;
    cout<<"From class Employee";
    Employee e;
    e.setid(id);
    cout<<e.getid();
    return 0;
}

class Employee
{
    private:
    string nm,add;
    int id;

   public:
    void setid(int id)
    {
        id=id;
    }

    int getid()
    {
        return id;
    }


};