#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    /*
    cout << s.size() << endl;
    cout << s.max_size() << endl;
    s.clear(); // use this function for clear the string.
    */

    /*
    if (s.empty() == true)
    {
        cout << "Khali_String";
    }
    else
    {
        cout << "Not_Khali";
    }
    */
    cin >> s;
    // s.resize(5);
    // s.resize(15, 'x');
    // cout << s.size() << endl;
    // cout << s << endl;
    s.resize(5);
    cout << s << endl;
    s.resize(11, 'x');
    cout << s << endl;
    return 0;
}