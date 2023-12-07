#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    int sum = x + y;
    long long  multiply = x * y;
    int minus = x - y;
    cout << x << " "
         << "+"
         << " " << y << " "
         << "="
         << " " << sum << endl;
    cout << x << " "
         << "*"
         << " " << y << " "
         << "="
         << " " << multiply << endl;
    cout << x << " "
         << "-"
         << " " << y << " "
         << "="
         << " " << minus;
    return 0;
}