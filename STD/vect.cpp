#include<iostream>

using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    cout<<v[0]<<endl;

    // vector<pair<int,int>>vct;
    // vct.push_back({1,2});
    // vct.emplace_back(2,3);

    vector<int> v1(5,20); //-> 5 times 20
    vector<int> v2(v1); //-> copy of the v1 containar
    cout<< v1[3]<<endl;
    v1.push_back(2);
    cout<< v1[5]<<endl;
    cout<< v1.size()<<endl;

    vector<int> :: iterator it = v.begin();
     cout<<*(it)<<endl;
    it++;
    cout<<*(it)<<endl;
    it = it + 2;
    cout<<*(it)<<endl;
    return 0;
}