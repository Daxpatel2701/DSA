#include<iostream>

using namespace std;
int main()
{
    int a=1350,n,b,c,d,e;
    cout<<"Enter the note name you can find out :";
    cin>>n;
    switch (n)
    {
        case 100 :
        {
            b=a/100;
            cout<<"The 100 notes of 1350 is " << b<<endl ;
        }
        case 20 :
        {
            d=b/20;
            cout<<"The 20 rupes notes of 1350 is " << d<<endl;
        }
        case 1 :
        {
            e=d/1;
            cout<<"The 1 rupes notes of 1350 is " << e<<endl;
        }
    } 
    return 0;
}