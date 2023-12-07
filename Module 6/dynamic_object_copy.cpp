#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
int main()
{
    Person *rakib = new Person("Rakib Al Hasan", 24);
    Person *sakib = new Person("Shakib Al Hasan", 22);

    // // rakib->name = sakib->name;
    // // rakib->age = sakib->age;

    *rakib = *sakib; // we should use this
    
    delete sakib;
    cout << rakib->name << " " << rakib->age << endl;
    return 0;
}