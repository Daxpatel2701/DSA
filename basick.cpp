#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
        // int a,b;
        // cout<<"Enter the value of A :";
        // cin>>a;
        // cout<<"Enter the value of B :";
        // cin>>b;
        // cout<<"The a+b is :"<<a+b<<"\n";
        // cout<<"The a-b is :"<<a-b<<"\n";
        // cout<<"The a*b is :"<<a*b<<"\n";
        // cout<<"The a/b is :"<<a/b<<"\n";
        // cout<<"The a%b is :"<<a%b;
        // cout<<"\nThe a++ is :"<<a++;
        // cout<<"\nThe a++ is :"<<a++;
        // cout<<"\nThe a-- is :"<<a--;
        // cout<<"\nThe --a is :"<<--a;
        // cout<<"\nThe --a is :"<<--a;
        // cout<<"\nThe ++a is :"<<++a;
        // cout<<"\nThe --a is :"<<--a;
        // cout<<"\nThe --a is :"<<--a;

        // float a=34.2f;
        // long double b=34.4l;
        // cout<<"The size of 34.2 is :"<<sizeof(34.2)<<endl;
        // cout<<"The size of 34.2f is :"<<sizeof(34.2f)<<endl;
        // cout<<"The size of 34.2F is :"<<sizeof(34.2F)<<endl;
        // cout<<"The size of 34.4l is :"<<sizeof(34.4l)<<endl;
        // cout<<"The size of 34.4L is :"<<sizeof(34.4L)<<endl;


        //new value----

        // int a=5;
        // cout<<"The value of c is:"<<a<<endl;
        // a=2;
        // cout<<"The value of new c is :"<<a<<endl;



        //constants in C++

        // const int a=5;                             // here const is a data type it is uses the do not change the value...
        // cout<<"The value of c is:"<<a<<endl;
        // a=2;                                        // here this is create error....
        // cout<<"The value of new c is :"<<a<<endl; 
        



        // manipulaters in C++

        // int a=2, b=23, c=1234;
        // cout<<"the value of a without setw is :"<<a<<endl;
        // cout<<"the value of a without setw is :"<<b<<endl;
        // cout<<"the value of c without setw is :"<<c<<endl;
        // cout<<"\n";
        // cout<<"the value of a is :"<<setw(4)<<a<<endl;
        // cout<<"the value of b is :"<<setw(4)<<b<<endl;        //here all the number is shift in wright side....
        // cout<<"the value of c is :"<<setw(4)<<c<<endl;


        // Pointar....

        int a;
        int* ptr= &a;
        // & ----> (address of) operator
        cout<<"Enter the value of a :";
        cin>>a;
        cout<<endl;
        cout<<"the address of a is :"<<ptr<<endl;
        cout<<"the address of a is :"<<&a<<endl;

        // * ----> (value at) dereference operator
        cout<<"the value of address ptr is :"<<*ptr<<endl;
        return 0;
}