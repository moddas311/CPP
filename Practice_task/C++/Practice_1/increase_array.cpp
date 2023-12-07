#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m; // input m from user.
    int *b = new int[m];
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i]; // copy array a into b.
    }
    delete[] a; // delete array a.
    for (int i = n; i < m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < m; i++)
    {
        cout << b[i] << " ";
    }
    delete[] b; // delete array b.
    return 0;
}
