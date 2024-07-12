#include<iostream>
using namespace std;
class a
{
    public :
    int fun()
    {
    cout<<"this is a base class "<<endl;
    }
};
class b : public a
{
    public :
    int dax()
    {
    cout<<"this is a child class"<<endl;
    }
};
class c : public b
{
    public :
    int keyur()
    {
        cout<<"this is subchild class"<<endl;
    }
};

int main()
{
    b b2;
    b2.fun();
    b2.dax();
    c c1;
    c1.keyur();
    return 0;
}