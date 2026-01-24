#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> re(n, n - 1);

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        re[a - 1]--; // 初めは、インデックスそろえるの忘れてた。注意
        re[b - 1]--; // 上に同じく
    }
    ll ans;
    for (int i = 0; i < n - 1; i++)
    {
        ans = re[i] * (re[i] - 1) * (re[i] - 2) / 6; // if(re[i] >= 3)の分岐はなくていい。気づけたのえらい
        cout << ans << " ";
    }

    int i = n - 1; // これもfor文のなかでよかった。最後が空白でもいいらしい
    ans = re[i] * (re[i] - 1) * (re[i] - 2) / 6;
    cout << ans << endl; // 必ず改行終わりの必要なし。空白終わりでもいい
}