#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    switch (n % 2)
    {
    case 0:
        cout << "EVEN";
        break;
    case 1:
        cout << "ODD";
        break;
    }
    return 0;
}