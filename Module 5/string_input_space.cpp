#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    // cin.ignore(); // sob compiler kaj kore na.
    getchar(); // cin.ignore() kaj na korle getchar() use hbe.
    string s;
    // cin >> s; //string input without space.
    getline(cin, s); // string input with space.
    cout << x << endl;
    cout << s << endl;
    return 0;
}