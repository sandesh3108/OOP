#include<iostream>
using namespace std;
const int n = 100;

class stack
{
    private:
        int top;
        int arr[n];
        
    public:
        stack()
        {
            top = -1;
        }
        
        void push(int value,int size)
        {
            if(top==size-1)
            {
                cout<<"\nStack is full !!!\n";
            }
            else
            {
                top++;
                arr[top]=value;
            }
        }
        
        void pop()
        {
            if(top==-1)
            {
                cout<<"\nStack is empty\n";
            }
            else
            {
                cout <<"\n"<<arr[top]<<" this element is popped from stack\n";
                top--;
            }
        }
        
        void display()
        {
            int i;
            if(top==-1)
            {
                cout<<"\nStack is empty\n";
            }
            else
            {
                cout<<"\nElements in the stack are: ";
                for(i =0; i<=top; i++)
                {
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
            }
        }
};

int main()
{
    stack s;
    int choice,value,size;
    cout<<"Enter the size of stack: ";
    cin>>size;
     
    do
    {
        cout<<"\n1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch (choice) 
        {
            case 1:
            {
                cout<<"\nEnter value to push: ";
                cin>>value;
                s.push(value,size);
                break;
            }
            case 2:
            {
                s.pop(); 
                break;
            }
            case 3:
            {
                s.display(); 
                break;
            }
            case 4:
            {
                cout <<"\nExit from the stack!";
                break;
            }
            default:
            {
                cout<<"\nInvalid choice\n";
                break;
            }
        }
    } while(choice!=4);
}

