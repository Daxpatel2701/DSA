#include<iostream>

using namespace std;

long long int squareroot(int n)
{
    int s=0;
    int e=n;
    long long int mid =s + (e-s)/2;
    long long int ans = -1;
    while(s<=e)
    {
        long long int square =mid*mid;
        if(square == n)
        {
            return mid;
        }
        if(square < n)
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid =s + (e-s)/2;
    }
    return ans;
}

double moreprecision(int n,int precision, int tempsol)
{
    double factore=1;
    double ans = tempsol;

    for(int i=0;i<precision;i++)
    {
        factore=factore/10;
        for(double j=ans;j*j<n;j=j+factore)
        {
            ans=j;
        }
    }
    return ans;
}
int main()
{
    int arr[10000],n,a;
    cout<<"Enter the number you can find square :";
    cin>>n;
    // cout<<squareroot(n);
    int tampsol= squareroot(n);
    cout<<"The ans is :"<< moreprecision(n,3,tampsol);

    return 0;
}