#include<iostream>
using namespace std;
int main()
{
    int arr[]={50,60,30,10,20};
    int length=sizeof(arr)/sizeof(int);
    cout<<"Before Merge sort:"<<endl;
    printarr(arr,length);
    //merge(arr,0,length -1);
    cout<<"After merge sort:"<<endl;
    printarr(arr,length);
    return 0;
}

void printarr(int *arr,int length)
{
    for(int i=0;i<length;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

