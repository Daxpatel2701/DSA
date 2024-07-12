#include<iostream>

using namespace std;

int binarysearch(int arr[],int size,int key)
{
    int start =0;
    int end =size-1;

     int mid =start +(end-start)/2;
     while(start<=end)
     {
        if(arr[mid] == key)
        {
            return mid;
        }
        if(key>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid =start +(end-start)/2;
     } 
     return -1;
}
int main()
{
    int arr[10],n,a;
    cout<<"Enter the size of array :";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"which element you can find :";
    cin>>a;
    int index=binarysearch(arr,n,a);
    cout<<index;
    return 0;
}