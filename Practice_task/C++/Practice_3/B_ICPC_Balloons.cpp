#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string word;
        int n;
        cin >> n >> word;
        int count[26] = {0};
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (count[word[i] - 'A'] == 0)
            {
                sum += 2;
                count[word[i] - 'A']++;
            }
            else
            {
                sum++;
            }
        }
        cout << sum << endl;
    }

    return 0;
}