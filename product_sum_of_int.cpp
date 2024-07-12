#include<iostream>

using namespace std;
int main()
{
    int digiot,n;
    cout<<"Enter the integer :";
    cin>>n;
    int prod =1;
    int sum=0;
    while(n!=0)
    {
        digiot=n%10;
        prod=prod*digiot;
        sum=sum+digiot;
        n=n/10;
    }

    cout<<"The product is"<<prod<<endl;
    cout<<"The sum is"<<sum;
    return 0;
}