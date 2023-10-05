#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream objs(s);
    string word;
    string reverse_stng;
    while (objs >> word)
    {
        reverse(word.begin(), word.end());
        reverse_stng += word;
        reverse_stng += " ";
    }
    reverse_stng.pop_back();
    cout << reverse_stng;
    return 0;
}