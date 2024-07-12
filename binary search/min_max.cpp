#include<iostream>

using namespace std;
int main()
{
    int a[8];
    for (int i = 0; i < 8; i++)
    {
        cin >> a[i];
    }
    int min , max;
    min = max = a[0];
    for (int i = 0; i < 8; i++)
    {
        if(min > a[i])
        {
            min = a[i];
        }
        else if(max < a[i]){
            max = a[i];
        }
    }
    cout << min << endl;
    cout << max << endl;
    
    
    return 0;
}