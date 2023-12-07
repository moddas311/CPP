#include <iostream>
#include <algorithm> // for using buildin function
#include <utility>   // for swap
using namespace std;
/* 
void my_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
} 
*/
int main()
{
    /*
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    */
    /*
    used buildin function for find the minimum number.
    int c = min(a, b);
    cout << c;
    if (a > b)
        cout << b;
    else
        cout << a;
    */
    /*
    int minimum = min({a, b, c, d, e}); // jodi ekadhik valuer moddhe min/max ber korte chai must curly brases use kora lagbe
    int maximum = max({a, b, c, d, e});
    cout << "Minimum:"
         << " " << minimum << endl
         << "Maximum:"
         << " " << maximum;
    */

    int a, b;
    cin >> a >> b;
    swap(a, b); // buildin function for swap
    cout << a << " " << b;
    return 0;
}