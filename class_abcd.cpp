#include<iostream>
using namespace std;
class a
{
    public :
    int fun()
    {
        cout<<"This is base class"<<endl;
    }
};
class b : virtual public a
{
    public :
    int sum()
    {
        cout<<"This is a first chaild class"<<endl;
    }
};
class c :virtual public a
{
    public :
    int max()
    {
        cout<<"This is second chaild class"<<endl;
    }
};
class d :virtual public a
{
    public :
    int min()
    {
        cout<<"This is third chaild class"<<endl;
    }
};
class e : public b, public d
{
    public :
    int avge()
    {
        cout<<"This is subchaild class"<<endl;
    }
};
int main()
{
    c f1;
    f1.fun();
    e f2;
    f2.sum();
    f2.min();
}   