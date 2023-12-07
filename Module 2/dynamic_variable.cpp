#include <bits/stdc++.h>
using namespace std;
int *fun()
{
    int *p = new int;
    *p = 100;
    return p;
}
int main()
{
    /*
     int *a = fun();
    cout << *a << endl;
    */

        int *a = new int;
    *a = 10;
    cout << *a << endl;
    delete a; // use delete command for detele dynamic variable.
    /*
    float *f = new float;
    *f = 2.653;
    cout << *f << endl;
    */
    return 0;
}