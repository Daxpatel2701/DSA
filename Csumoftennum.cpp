#include<iostream>

using namespace std;
class m
{
    public :
    int summ()
    {
        int i=0,sum=0;
        while(i<=10)
        {
            sum=sum+i;
            i++;
        }
        cout<<"The sum is"<<sum;
    }
};
int main()
{
    m m1;
    m1.summ();  
    return 0;
}