#include <iostream>
#include <set>
using namespace std;
 
int main()
{
 
    set<int, greater<int> > s1;
    s1.insert(-2147483648);
    s1.insert(1);
    s1.insert(1);
    // s1.insert(4);
 
    for (auto i : s1) {
        cout << i << ' ';
    }
    return 0;
}