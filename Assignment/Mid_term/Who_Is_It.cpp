#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int ID;
    char Name[101];
    char Section[10];
    int Total_Mark;
};
int main()
{
    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        Student a, b, c;

        // for student a
        cin >> a.ID;
        getchar();
        cin >> a.Name;
        getchar();
        cin >> a.Section;
        getchar();
        cin >> a.Total_Mark;

        // for student b
        cin >> b.ID;
        getchar();
        cin >> b.Name;
        getchar();
        cin >> b.Section;
        getchar();
        cin >> b.Total_Mark;

        // for student c
        cin >> c.ID;
        getchar();
        cin >> c.Name;
        getchar();
        cin >> c.Section;
        getchar();
        cin >> c.Total_Mark;

        if (a.Total_Mark >= b.Total_Mark && a.Total_Mark >= c.Total_Mark)
        {
            cout << a.ID << " " << a.Name << " " << a.Section << " " << a.Total_Mark << endl;
        }
        else if (b.Total_Mark >= a.Total_Mark && b.Total_Mark >= c.Total_Mark)
        {
            cout << b.ID << " " << b.Name << " " << b.Section << " " << b.Total_Mark << endl;
        }
        else
        {
            cout << c.ID << " " << c.Name << " " << c.Section << " " << c.Total_Mark << endl;
        }
    }
    return 0;
}