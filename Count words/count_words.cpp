#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 1. with stringstream:
    /*string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int cnt = 0;
    while (ss >> word)
    {
        cnt++;
    }
    cout << cnt;*/

    // 2. manually
    string s;
    getline(cin, s);
    int cnt = 0;
    bool inside_word = false;
    // isalpha()= 0,1, 0r 2 return kore.

    // loop for counting words:
    for (char c : s) // for(int i=0;i<strlen-1;i++)
    {
        if (isalpha(c))
        {
            if (inside_word == false)
            {
                cnt++;
            }
            inside_word = true;
        }
        else
        {
            inside_word = false;
        }
    }

    cout << cnt << endl;
    return 0;
}
