#include<iostream>
using namespace std;

int main()
{
	
	const int atp=33;
	const int ctp=17;
	int atic,ctic,tts,gamo,ns,pg;
	double ad;
	char str[50];
	cout<<"Movie Name:";
	cin>>str;
	cout<<endl;
	cout<<"Number of Adult Tickets Sold:";
	cin>>atic;
	cout<<endl;
	cout<<"Number of Child Tickets Sold:";
	cin>>ctic;
    cout<<endl;
	
	tts=(atic+ctic);
	cout<<"Total Tickets Sold:"<<tts;
	cout<<endl;
	gamo=((atic*atp)+(ctic*ctp));
	cout<<"Gross Amount:$"<<gamo;
    cout<<endl;
	
	cout<<"Percentage of Gross Amount Donated:";
	cin>>pg;
    cout<<endl;
	
	ad=gamo*pg/100;
	cout<<"Amount Donated:$"<<ad;
    cout<<endl;
	
	
	ns=(gamo-ad);
	cout<<"Net Sales:$"<<ns;
}
