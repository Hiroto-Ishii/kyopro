#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main()
{
    string s;
    cin >> s;
    int zure = 3;         // ずらされている文字数
    rep(i, (int)s.size()) // 1文字ずつfor文で変換
    {
        if (islower(s[i])) // 小文字の場合
            s[i] = (s[i] - 'a' - zure + 26) % 26 + 'a';
        // s[i]-'a' でアルファベットを0~25の数字に変換
        // zureを引いて文字を移動させる
        // zureを引くと負になる可能性があるので +26 してから %26
        // 最後に +'a' して文字コードに直す

        else if (isupper(s[i])) // 大文字の場合
            s[i] = (s[i] - 'A' - zure + 26) % 26 + 'A';
    }
    cout << s << endl;
}