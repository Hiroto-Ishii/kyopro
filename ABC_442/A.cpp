#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    int ans = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] - 'i' == 0 || s[i] - 'j' == 0)
        {
            ans++;
        }
    }
    cout << ans << endl;
}