#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    // Jodi index lage taile ei loop
    //  for (int i = 0; i < s.size(); i++)
    //  {
    //      cout << s[i] << endl;
    //  }

    // Jodi only charectar taile ei loop
    for (char c : s)
    {
        cout << c << endl;
    }
    return 0;
}