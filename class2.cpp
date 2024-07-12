#include<iostream>

using namespace std;
// class a
// {
//     public :
//     int yatin()
//     {
//         cout<<"This is a base class"<<endl;
//     }
// };
// class b 
// {
//     public :
//     int rohan()
//     {
//         cout<<"This is child clas"<<endl;
//     }
// };
// class c : public a , public b
// {
//     public :
//     int dax()
//     {
//         cout<<"This is a subchaild class"<<endl;
//     }
// };
// int main()
// {
//     c c1;
//     c1.yatin();
//     c1.rohan();
//     c1.dax();
//     return 0;
// }

// class a
// {
//     public :
//     int fun()
//     {
//         cout<<"This is base class"<<endl;
//     }
// };
// class b
// {
//     public :
//     int function()
//     {
//         cout<<"This is a base class"<<endl;
//     }
// };
// class c :virtual public a , virtual public b
// {
//     public :
//     int dax()
//     {
//         cout<<"This is a child class"<<endl;
//     }
// };
// class d : public a ,public b
// {
//     public :
//     int yatin()
//     {
//         cout<<"This is a child class"<<endl;
//     }
// };
// int main()
// {
//     c b1;
//     b1.fun(); 
//     b1.function(); 
//     b1.dax(); 
//     d d1;
//     d1.yatin();
//     d1.fun();
//     d1.function();


//     return 0;
// }





// class student
// {
//     public :
//     int name()
//     {
//         cout<<"Name :-patel Dax"<<endl;
//     }
//     int enrolment_no()
//     {
//         cout<<"Enrolment no :-211240107040"<<endl;
//     }
// };
// class internal : virtual public student
// {
//     public :
//     int intar()
//     {
//         cout<<"intarnal marks is : 29"<<endl;
//     }
// };
// class university
// {
//     public :
//     int univar()
//     {
//         cout<<"university marks is : 50"<<endl;
//     }
// };
// class external : virtual public student
// {
//     public :
//     int exter()
//     {
//         cout<<"External marks is : 69"<<endl;
//     }
// };
// class result : public internal, public university ,public external
// {
//     public :
//     int res()
//     {
//         cout<<"result...\n";
//     }   
// };

// int main()
// {
//     result d1;
//     d1. res();
//     d1. name();
//     d1. enrolment_no();
//     d1. intar();
//     d1. univar();
//     d1. exter();
// }





// class student
// {
//     public :
//     int name()
//     {
//         cout<<"Name :-patel dax"<<endl;
//     }
//     int enrolment_no()
//     {
//         int b;
//         cout<<"Enrolment no :-";
//         cin>>b;
//     }
// };
// class internal : virtual public student
// {
//     public :
//     int intar()
//     {
//         cout<<"intarnal marks is : 29 "<<endl;
//     }
// };
// class university
// {
//     public :
//     int univar()
//     {
//         cout<<"university marks is :50"<<endl;
//     }
// };
// class external : virtual public student
// {
//     public :
//     int exter()
//     {
//         cout<<"External marks is : 69"<<endl;
//     }
// };
// class result : public internal, public university ,public external
// {
//     public :
//     int res()
//     {
//         cout<<"result is";
//     }   
// };

// int main()
// {
//     result d1;
//     d1. res();
//     d1. enrolment_no();
//     d1. name();
//     d1. intar();
//     d1. univar();
//     d1. exter();
// }



class A
{
public:
    int add()
    {
        cout << "I am A" << endl;
    }
};
class B : public A
{
public:
    int mul()
    {
        cout << "I am B" << endl;
    }
};
class C : public B
{
public:
    int sub()
    {
        char x[10];
        cout << "I am sub" << endl;
        cin >> x;
        cout << "my name is " << x;
        ;
    }
};
class D : public B
{
public:
    int meet()
    {
        cout << "Meet" << endl;
    }
};

int main()
{
    class C ob1;
    ob1.add();
    return 0;
}