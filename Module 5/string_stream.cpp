#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss;
    ss << s;
    string word;
    // ss >> word;
    // cout << word << endl;
    // ss>> word;
    // cout << word << endl;
    int count = 0;

    while (ss >> word)
    {
        // cout << word << endl;
        count++;
    }
    cout << count;
    return 0;
}