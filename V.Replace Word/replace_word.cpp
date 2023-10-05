#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int position = s.find("EGYPT");
    int length = 5;

    // s.replace(position, length, " ");
    while (position != string::npos)
    {
        s.replace(position, length, " ");
        position = s.find("EGYPT");
    }
    cout << s;
    return 0;
}