#include<iostream>
#include<string>
using namespace std;
class date
{
	private :
	

		int date;
		int month;
		int year;
		
		public:
			
			void setage(int _age)
			{
				age=_age;
			}
			int getage()
			{
				return age;
			}	
			
			void setage(int _age)
			{
				age=_age;
			}
			int getage()
			{
				return age;
			}	
			
			void setage(int _age)
			{
				age=_age;
			}
			int getage()
			{
				return age;
			}	
};

class student
{
	private :
		int prnno;
		string name;
		int age;
		
		public:
			void setprnno(int _prnno)
			{
				prnno=_prnno;
			}
			int getprnno()
			{
				return prnno;
			}
			void setname(const string&_name)
			{
				name=_name;
			}
			string getname()
			{
				return name;
			}
			void setage(int _age)
			{
				age=_age;
			}
			int getage()
			{
				return age;
			}	
			
};

class employee
{
	private :
		string employeeid;
		string name;
			int age;
		
		public:
			void setemployeeid(const string&_employeeid)
			{
				employeeid=_employeeid;
			}
			string getemployeeid()
			{
				return employeeid;
			}
			void setname(const string&_name)
			{
				name=_name;
			}
			string getname()
			{
				return name;
			}
			void setage(int _age)
			{
				age=_age;
			}
			int getage()
			{
				return age;
			}	
};

int main()
{
	string n,id;
	int a,prn;
	person p;
	cout<<"enter the name of person";
    cin>>n;
	p.setname(n);
	cout<<"enter the age of person";
    cin>>a;
	p.setage(a);
	
	student s;
	cout<<"enter the name of student";
    cin>>n;
	s.setname(n);
	cout<<"enter the age of student";
    cin>>a;
	s.setage(a);
	cout<<"enter the prnof student ";
    cin>>prn;
	s.setprnno(prn);
	
	employee e;
	cout<<"enter the name of employee";
    cin>>n;
	e.setname(n);
	cout<<"enter the age  of employee";
    cin>>a;
	e.setage(a);
	cout<<"enter the employeeID";
    cin>>id;
	e.setemployeeid(id); 
	
	cout<<"person"<<endl;
	cout<<"name ="<<p.getname()<<endl;
	cout<<"age ="<<p.getage()<<endl;
	
	cout<<"student"<<endl;
	cout<<"name ="<<s.getname()<<endl;
	cout<<"age ="<<s.getage()<<endl;
	cout<<"PRN NO ="<<s.getprnno()<<endl;
	
	cout<<"employee"<<endl;
	cout<<"name ="<<e.getname()<<endl;
	cout<<"age ="<<e.getage()<<endl;
	cout<<"employee ID ="<<e.getemployeeid()<<endl;
	
	return 0;
}
