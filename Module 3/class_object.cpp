#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
};
int main()
{
    Student a, b;
    cin.getline(a.name, 100); // get line function use for name with space.
    cin >> a.roll >> a.cgpa;
    getchar(); // for skip the enter
    cin.getline(b.name, 100);
    cin >> b.roll >> b.cgpa;
    cout << a.name << " " << a.roll << " " << a.cgpa << endl;
    cout << b.name << " " << b.roll << " " << b.cgpa << endl;
    return 0;
}