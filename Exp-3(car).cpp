#include<iostream>
using namespace std;

class vehicle
{
	private:
		int numwheel;
		string color;
		int maxspeed;
		int maxgear;
		int curspeed;
			
	public:
		int curgear;
		bool started;
		bool stopped;
		
		vehicle(int wheel,int speed,int gear,string clr)
		{
			numwheel=wheel;
			color=clr;
			maxspeed=speed;
			maxgear=gear;
			curspeed=0;
			curgear=0;
			started=false;
			stopped=true;
		}
	  
	  int getwheels()
	  {
	  	return numwheel;
	  }	
	  int getmaxgear()
	  {
	  	return maxgear;
	  }	
	  int getmaxspeed()
	  {
	  	return maxspeed;
	  }
	  void setspeed(int speed)
	  {
	  	if(speed<=maxspeed)
	  	{
	  	curspeed=speed;
		}
		else
		{
		cout<<"speed exceeds limit"<<endl;
		}
	  }	
	  int getspeed()
	  {
	  	return curspeed;	
	  }
	  int getcurgear()
	  {
	  	return curgear;
	  }
	  string getcolor()
	  {
	  	return color;
	  }
	  bool start()
	  {
	  	started=true;
		stopped=false;
	  }
	  bool stop()
	  {
	  	started=false;
		stopped=true;
	  }
};


int main()
{
	vehicle car(4,200,6,"Blue");
	
	
	car.setspeed(0);
	
	cout<<"No.of wheels:"<<car.getwheels()<<endl;
	cout<<"max gear:"<<car.getmaxgear()<<endl;
	cout<<"max speed:"<<car.getmaxspeed()<<endl;
	cout<<"current speed:"<<car.getspeed()<<endl;
	
	int ch;
	do{
		cout<<"\n1.start\n2.increase speed\n3.decrease speed\n4.next gear\n5.previous gear\n6.stop\n7.Exite\nEnter the choice:";
		cin>>ch;
		
		switch(ch)
		{
		case 1:
		{
		car.start();
		break;
		}
		case 2:
		{
		int incspeed;
		cout<<"\nEnter speed increase amount:";
		cin>>incspeed;
		car.setspeed(car.getspeed()+incspeed);
		break;
		}
		case 3:
		{
		int dcrspeed;
		cout<<"\nEnter speed decrese amount:";
		cin>>dcrspeed;
		car.setspeed(car.getspeed()-dcrspeed);
		break;			
		}
		case 4:
		{
		 if(car.getcurgear()<car.getmaxgear())
		 {
			car.curgear++;
         }
			break;
		}
		case 5:
		{
			if(car.curgear>0)
			{
			car.curgear--;
			}
			break;
		}
		case 6:
		{
		car.stop();
		break;
		}
		case 7:
		{
			break;
		}
		default:
		{
		cout<<"invalid ch"<<endl;
		}
	}
	
	cout<<"\ncurrent speed:"<<car.getspeed()<<"km/h"<<endl;
	cout<<"\ncurrent gear:"<<car.getcurgear()<<endl;
	if(car.started)
	{
		cout<<"\nvehicle is running."<<endl;
	}
	else if(car.stopped)
	{
		cout<<"\nvehicle is stopped."<<endl;
	}
}while(ch!=7);
return 0;
}

