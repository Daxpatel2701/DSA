#include<iostream>

using namespace std;
int main()
{
    cout<<"Enter the number n :";
    int n;
    cin>>n;
//     int i,j;
//    for(i=n;i>=1;i--)
//    {
//     for(j=1;j<=i;j++)
//     {
//         cout<<j;
//     }
//     cout<<endl;
//    }
    int i=0;
    while(i<n)
    {
        int j=1;
        int number = n-i+1;
        while(j<=n-i)
        {
            cout<<j<<" ";
            j++;
        }
        int k=0;
        while(k<2*i)
        {
            cout<<"* ";
            k++;
        }
        int w=n-i;
        while(w>=1)
        {
            cout<<w<<" ";
            w--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}