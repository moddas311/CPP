#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin >> n;
    Student a[n];
    // Student *a = new Student[n]; // dynamic.
    for (int i = 0; i < n; i++)
    {
        // getline(cin, a[i].name);
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
    // Student minimum;
    // minimum.marks = INT_MAX;

    Student maximum;
    maximum.marks = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        // if (a[i].marks < minimum.marks)
        // {
        //     minimum = a[i];
        // }
        if (a[i].marks > maximum.marks)
        {
            maximum = a[i];
        }
    }
    cout << maximum.name << " " << maximum.roll << " " << maximum.marks << endl;
    return 0;
}