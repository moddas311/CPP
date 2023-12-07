#include <bits/stdc++.h>
using namespace std;
namespace Rakib
{
    int age = 21;
    void print()
    {
        cout << "Rakib namespces";
    }
}
namespace Sakib
{
    int age2 = 26;
    void print2()
    {
        cout << "Sakib namespces";
    }
}
using namespace Rakib;
using namespace Sakib;
int main()
{
    // cout<<Rakib::age<<endl;
    // cout<<Sakib::age2<<endl;

    cout << age << endl;
    print();
    cout << endl;
    cout << age2 << endl;
    print2();
    return 0;
}