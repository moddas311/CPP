#include <bits/stdc++.h>
using namespace std;
int main()
{
    char n;
    int a, b;
    cin >> a >> n >> b;
    if (n == '>')
    {
        if (a > b)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    else if (n == '<')
    {
        if (a < b)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    else if (n == '=')
    {
        if (a == b)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    return 0;
}