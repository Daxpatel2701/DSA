#include<iostream>
using namespace std;

void printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void shortone(int arr[],int size)
{
    int laft=0,right=size-1;
    while(laft<right)
    {
        if(arr[laft]==0)
        {
            laft++;
        }
        else if(arr[right]==1)
        {
            right--;
        }
        // else if(arr[laft]==1 && arr[right]==0)
        else
        {
            swap(arr[laft],arr[right]);
            laft++;
            right--;
        }
    }
}
int main()
{
    int arr[10];
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    shortone(arr,n);
    cout<<"The short 0 and 1 is"<<endl;
    printarray(arr,n);
    return 0;
}