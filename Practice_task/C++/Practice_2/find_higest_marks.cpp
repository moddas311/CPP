#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    char section[50];
    double math_marks;
    int cls;
};
int main()
{
    Student a, b, c;
    cin.getline(a.name, 100);
    cin >> a.roll >> a.section;
    getchar();
    cin >> a.math_marks >> a.cls;
    getchar();
    cin.getline(b.name, 100);
    cin >> b.roll >> b.section;
    getchar();
    cin >>
        b.math_marks >> b.cls;
    getchar();
    cin.getline(c.name, 100);
    cin >> c.roll >> c.section;
    getchar();
    cin >> c.math_marks >> c.cls;
    if (a.math_marks >= b.math_marks && a.math_marks >= c.math_marks)
    {
        cout << a.name << endl;
    }
    else if (b.math_marks >= a.math_marks && b.math_marks >= c.math_marks)
    {
        cout << b.name << endl;
    }
    else
    {
        cout << c.name;
    }
    return 0;
}