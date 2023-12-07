#include <bits/stdc++.h>
using namespace std;
int main()
{
    // string a = "Hello";
    // string b = "A";
    // a += b;
    // a.append(b);
    // cout << a << endl
    //      << b;
    // a[5]='A'; -->dont work
    // a="HelloA"; -->work
    // a+=b; -->work
    // a=a+'A' -->work
    // a.push_back('A'); // -->work
    // a.pop_back();
    // a.pop_back();
    // cout << a;

    string a = "Hello World";
    // a="Gello";
    // a.assign("Gelo"); //assign function diye value assign hoy.
    // cout<<a<<endl;
    // a.erase(4, 1); // erase function diye 4 number index er 1 charecter remove kore diche orthath o remove hoyse.
    // a.replace(5, 1, "_"); // 5 number index e giye space ta remove kore _ (underscore) bosai diche.
    a.insert(5, "Moddasir"); // insert funcion diye index number diye iccha moto string insert kora jai.
    cout << a << endl;
    return 0;
}