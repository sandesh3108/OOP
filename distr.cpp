#include<iostream>
using namespace std;

class person
{
	private:
		string name;
		int dob;
		string add;
	
	public:
		person(string n,int d,string a)
		{
			name=n;
			dob=d;
			add=a;
		}
		
		~person()
		{
			cout<<"\nThis is destructor";	
		}
		void display()
		{
			cout<<"\nName of the person is:"<<name;
			cout<<"\nYear of birth of the person is:"<<dob;
			cout<<"\nAddresse of the person is:"<<add;
		}
};

int main()
{
	int d;
	string n,c;
	cout<<"Enter the name of the preson:";
	cin>>n;
	cout<<"Enter the year of birth of the preson:";
	cin>>d;
	cout<<"Enter the address of the preson:";
	cin>>c;
	person p1(n,d,c);
	p1.display();
}
