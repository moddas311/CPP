/*
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int Roll;
    int Class;
    double Gpa;
    Student(int ROLL, int CLASS, double GPA)
    {
        Roll = ROLL;
        Class = CLASS;
        Gpa = GPA;
    }
};
int main()
{
    Student rahim(10, 13, 3.81);
    Student kahim(12, 7, 3.42);
    cout << rahim.Roll << " " << rahim.Class << " " << rahim.Gpa << endl;
    cout << kahim.Roll << " " << kahim.Class << " " << kahim.Gpa << endl;
    return 0;
}
*/
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
int main()
{
    Student rahim(10, 13, 3.81);
    Student kahim(12, 7, 3.42);
    cout << rahim.Class << " " << rahim.Roll << " " << rahim.Gpa << endl;
    cout << kahim.Class << " " << kahim.Roll << " " << kahim.Gpa << endl;
    return 0;
}