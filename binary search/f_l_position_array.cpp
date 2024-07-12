#include<iostream>

using namespace std;

int firstocc(int arr[],int size,int key)
{
    int start=0,end=size-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        else if(key>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            start=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

int lastocc(int arr[],int size,int key)
{
     int start=0,end=size-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            start=mid+1;
        }
        else if(key>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            start=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
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
    cout<<"The First occurrence of A element is at index "<<firstocc(arr,n,a)<<endl;
    cout<<"The last occurrence of A element is at index "<<lastocc(arr,n,a)<<endl;
    return 0;
}