#include<iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i=2; i<n; i++)
    {
        if(n/n==1 && n/1==n)
        {
            cout << " prime";
            break;
        }
        else
        {
            cout << "not prime\n";
            break;
        }
    }
}