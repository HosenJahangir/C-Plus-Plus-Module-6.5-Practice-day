#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string used_letters;
    int baloon = 0;

    for (int i = 0; i < n; i++)
    {
        if (used_letters.find(s[i]) != string::npos)
        {
            baloon++;
        }
        else
        {
            baloon += 2;
            used_letters += s[i];
        }
    }
    cout << baloon;
    return 0;
}
