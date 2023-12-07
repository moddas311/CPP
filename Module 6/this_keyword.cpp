#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        // (*this).name = name;
        // (*this).age = age;
        this->name = name;
        this->age = age;
    }
    void print()
    {
        cout << "Hello Class" << endl;
    }
};
int main()
{
    Person Rakib("Rakibul Islam", 23);
    cout << Rakib.name << " " << Rakib.age << endl;
    return 0;
}