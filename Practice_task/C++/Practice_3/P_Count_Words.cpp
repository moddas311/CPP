// Eivabe codeforces accept kore na.
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int wordCount = 0;

    while (ss >> word)
    {
        for (char c : word)
        {
            if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
            {
                wordCount++;
                break;
            }
        }
    }
    cout << wordCount << endl;
    return 0;
}
*/

// Codeforces e submit dile eita kora lagbe.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    getline(cin, word);
    bool inside_word = false;
    int count = 0;
    for (char c : word)
    {
        if (isalpha(c))
        {
            if (inside_word == false)
            {
                count++;
            }
            inside_word = true;
        }
        else
        {
            inside_word = false;
        }
    }
    cout << count << endl;
    return 0;
}