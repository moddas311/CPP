#include <bits/stdc++.h>
using namespace std;
int *fun()
{
    int *a = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    return a;
}
int main()
{
    int *a = fun();
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    /*
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    */
    return 0;
}