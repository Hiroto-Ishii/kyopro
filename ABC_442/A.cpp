#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    int ans = 0;

    for (int i = 0; i < s.length(); i++) // s.size()でいい
    {
        if (s[i] - 'i' == 0 || s[i] - 'j' == 0) // s[i] == 'i'とかでよかった
        {
            ans++;
        }
    }
    cout << ans << endl;
}