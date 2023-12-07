#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s, q;
    int a, b, c;
    cin >> a >> s >> b >> q >> c;

    int result;
    if (s == '+')
    {
        result = a + b;
    }
    else if (s == '-')
    {
        result = a - b;
    }
    else if (s == '*')
    {
        result = a * b;
    }

    if (result == c && q == '=')
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << result << endl;
    }
    return 0;
}