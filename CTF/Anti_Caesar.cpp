#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main()
{
    string s;
    cin >> s;
    int zure = 3;
    rep(i, s.size())
    {
        if (s[i] - 'a' >= 0 && s[i] - 'a' <= 25)        // 小文字の場合
            s[i] = (s[i] - 'a' - zure + 26) % 26 + 'a'; // ずれを引いたときマイナスにならないようにした

        else if (s[i] - 'A' >= 0 && s[i] - 'A' <= 25) // 大文字の場合
            s[i] = (s[i] - 'A' - zure + 26) % 26 + 'A';
    }
    cout << s << endl;
}