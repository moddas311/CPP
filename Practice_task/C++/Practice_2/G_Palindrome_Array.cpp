#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i = 0, j = n - 1;
    int palindrome = 1;
    while (i < j)
    {
        if (a[i] != a[j])
        {
            palindrome = 0;
        }
        i++;
        j--;
    }
    if (palindrome == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}