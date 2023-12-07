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
    Student *rahim = new Student(10, 13, 3.81);
    cout << rahim->Class << " " << rahim->Roll << " " << rahim->Gpa;
    return 0;
}