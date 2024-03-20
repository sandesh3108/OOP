#include<iostream>
using namespace std;

class person
{
    private:
        string name;
        string addre;
        int dob;

    public:
        int getdob()
        {
           cout<<"date of birth of person is:"<<dob<<endl; 
        }
        void getname()
        {
            cout<<"Name of person is:"<<name<<endl;
        }
        void getaddre()
        {
           cout<<"Addrers of person is:"<<addre<<endl;
        }

        void setdob(int a)
        {
            dob=a;
        }
        void setname(string n)
        {
            name=n;
        }
        void setaddre(string d)
        {
            addre=d;
        }
};

class student
{
    private:
        string name;
        int prn;
        int mar;

    public:
         void getname()
        {
            cout<<"Name of student is:"<<name<<endl;
        }
         int getprn()
         {
            cout<<"Roll of student is:"<< prn<<endl;
         }
         int getmar()
         {
             cout<<"Markes of student is:"<< mar<<endl; 
         }
          void setname(string n)
        {
            name=n;
        }
          int setprn(int r)
          {
            prn=r;
          }
           int setmar(int a)
           {
            mar=a;
           }
};   

class employ
{
    private:
        string name;
        int salary;
        int id;
    public:
         void getname()
        {
            cout<<"Name of empoly is:"<<name<<endl;
        }
        int getsalary()
        {
             cout<<"salary of empoly is:"<<salary<<endl; 
        }
        int getid()
        {
             cout<<"ID of empoly is:"<<id<<endl;
        }

        void setname(string n)
        {
            name=n;
        }
        int setsalary(int s)
        {
            salary=s;
        }
        int setid(int i)
        {
            id=i;
        }    

};


int main()
{
    int ch;
do
 {
    cout<<"1.Person\n2.Student\n3.Empoly\n4.Exit\nEnter your choise:"<<endl;
    cin>>ch;

    switch (ch)
    {
        case 1:
            {
                person p1;

                p1.setname("sandesh");
                p1.setdob(20);
                p1.setaddre("korochi");

                p1.getname();
                p1.getdob();
                p1.getaddre();
            }
            break;
        case 2:
            {
                student s1;

                s1.setname("sam");
                s1.setprn(51);
                s1.setmar(85);

                s1.getname();
                s1.getprn();
                s1.getmar();
            }
            break;
        case 3:
            {
                employ e1;

                e1.setname("ram");
                e1.setsalary(500000);
                e1.setid(50);

                e1.getname();
                e1.getsalary();
                e1.getid();
            }
            break;    
        default:
        {
            cout<<"Enter valid choise!!!"<<endl;
             break;
        }
    }
 }while(ch!=4);
}