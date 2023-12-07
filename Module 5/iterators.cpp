#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    // string ::iterator it;

    // for (int i = 0; i < a.size(); i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << *a.begin() << endl;     // begin function diye string er 1st charecter pawa jai.
    // cout << *(a.end() - 1) << endl; // end function diye string er last charecter pawa jai. tobe (.end()-1) use korte hoy.

    for (auto it = a.begin(); it < a.end(); it++) // auto mane iterator eitar kaj iterator auto bujhe newa.
    {
        cout << *it << " ";
    }
    return 0;
}