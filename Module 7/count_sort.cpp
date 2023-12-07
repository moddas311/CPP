#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int frequency[26] = {0};
    for (char c : s)
    {
        frequency[c - 'a']++;
    }
    for (int i = 'a'; i <= 'z'; i++)
    {
        for (int j = 0; j < frequency[i - 'a']; j++)
        {
            cout << char(i);
        }
    }
    return 0;
}