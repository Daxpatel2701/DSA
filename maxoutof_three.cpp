#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the value of A :";
    cin>>a;
    cout<<"Enter the value of B :";
    cin>>b;
    cout<<"Enter the value of C :";
    cin>>c;
    if(a>b && a>c)
    {
        cout<<"A is maximum";
    }
    else if(b>c && b>a)
    {
        cout<<"B is maximum";
    }
    else if(a==b && b==c)
    {
        cout<<"The value of A,B and C is maximum and equal";
    }
    else if(a==b && c>a)
    {
        cout<<"The value of A and B is equal but value of C is maximum";
    }
    else if(a==c && b>a)
    {
        cout<<"The value of A and C is equal but value of B is maximum";
    }
    else if(b==c && a>b)
    {
        cout<<"The value of b and C is equal but value of A is maximum";
    }
    else if(a==b && c<a)
    {
        cout<<"The value of A and B is equal and maximum but value of C is minimum";
    }
    else if(a==c && b<a)
    {
        cout<<"The value of A and C is equal and maximum but value of B is minimum";
    }
    else if(c==b && a<c)
    {
        cout<<"The value of C and B is equal and maximum but value of A is minimum";
    }
    else if(c>a && c>b)
    {
        cout<<"C is maximum";
    } 
    return(0);
}