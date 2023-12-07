/*
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int Class;
    int Roll;
    double Gpa;
    Student(int Class, int Roll, double Gpa)
    {
        this->Class = Class;
        this->Roll = Roll;
        this->Gpa = Gpa;
    }
};
Student fun()
{
    Student rahim(10, 142, 3.49);
    return rahim;
}
int main()
{
    Student ans = fun();
    cout << ans.Class << endl
         << ans.Roll << endl
         << ans.Gpa;
    return 0;
}
*/

// return pointer using function.
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int Class;
    int Roll;
    double Gpa;
    Student(int Class, int Roll, double Gpa)
    {
        this->Class = Class;
        this->Roll = Roll;
        this->Gpa = Gpa;
    }
};
Student *fun()
{
    Student *rahim = new Student(10, 142, 3.49);
    return rahim;
}
int main()
{
    Student *ans = fun();
    cout << ans->Class << endl
         << ans->Roll << endl
         << ans->Gpa;
    delete ans;
    return 0;
}