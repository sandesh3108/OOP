#include<iostream>
using namespace std;

class date
{
    private:
        int dat;
        int mon;
        int yea;

    public:
        void setdat(int d)
        {
            dat=d;
        }
        void setmon(int m)
        {
            mon=m;
        }
        void setyea(int y)
        {
            yea=y;
        }

        int getdat()
        {
            return dat;
        }
        int getmon()
        {
            return mon;
        }
        int getyea()
        {
            return yea;
        }
};
 
int main()
{
    date l1;
   int d,m,y;
    cout<<"Enter the Date:";
    cin>>d;
    cout<<"Enter the Monthe:";
    cin>>m;
    cout<<"Enter the Year:";
    cin>>y;

    l1.setdat(d);
    l1.setmon(m);
    l1.setyea(y);

    int ch;
    do
    {
       cout<<"\n1.check leap year\n2.check year is valid or not\n3.display\n4.exist\nEnter your choise:";
       cin>>ch;

       switch (ch)
      {
       case 1:
        {
            if(y%4==0)
            {
                cout<<d<<"-"<<m<<"-"<<y<<"-"<<"it is leap year\n";
            }
            else
            {
                cout<<d<<":"<<m<<":"<<y<<":"<<"it is not a leap year\n";
            }
            break;
        }    
        case 2:
        {
            if(d<=31 && m<=12)
            {
                if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
                {
                        cout<<"Entered Date is valid\n";
                }
                else if(m==4 || m==6 || m==9 || m==11 )
                {
                        cout<<"Entered Date is valid\n";
                }
                else if(m==2)
                {
                    if(d<=29)
                    {
                        cout<<"Entered Date is valid\n";
                    }
                    else
                    {
                        cout<<"Entered Date is not valid\n";
                    }
                }
            }
            else
            {
                cout<<"Entered Date is not valid\n";
            }
        break;
        }
        case 3:
        {
              cout<<"Date is:"<<d<<"/"<<m<<"/"<<y;
              break;
        }
        case 4:
        {
            break;
        }
       default:
       {
        cout<<"Enter valid choise!!!\n";
        break;
       }
    }
    
  }while(ch!=4);
}

