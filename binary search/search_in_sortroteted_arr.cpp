#include<iostream>

using namespace std;
int getpivat(int arr[],int size)
{
    int start=0;
    int end=size-1;
    int mid =start+(end-start)/2;
    while(start<end)
    {
        if(arr[mid]>=arr[0])
        {
            start=mid+1;
        }
        else
        {
            end=mid;
        }
        mid =start+(end-start)/2;
    }
    return start;
}


int binarysearch(int arr[],int s,int e, int key)
{
    int start =s;
    int end =e;

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
    int k;
    cout<<"Which element you can find in sort roteted array :";
    cin>>k;
    int pivot = getpivat(arr,n);
    if(k>=arr[pivot] && k<=n-1)
    {
        cout<<binarysearch(arr,pivot,n-1,k);
    }
    else
    {
        cout<<binarysearch(arr,0,pivot-1,k);
    }
    return 0;
}