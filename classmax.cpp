#include<iostream>

using namespace std;
class s
    {
        public :
         int max()
         {
            int a,b,c;
            cout<<"Enter the value of A :";
            cin>>a;
            cout<<"Enter the value of B :";
            cin>>b;
            // cout<<"Enter the value of C :";
            cin>>c;
            if(a>b&&a>c)
            {
                cout<<"The value of A is maximum";
            }
            if(b>c)
            {
                cout<<"The value of B id maximum";
            }
            else
            {
                cout<<"The value of C is maximum";
            }
         }
    };
    int main()
    {
        s s1;
        s1.max();
        return 0;
    }