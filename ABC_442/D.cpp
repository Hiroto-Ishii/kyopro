#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// 提出コード
/*
int main()
{
    int n, q;
    cin >> n >> q;
    vector<ll> a(n);
    vector<ll> sum(n); // これ要素数ｎでよかった。0から始まってほしいから。

    ll a_sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a_sum += a[i]; // a_sumいらなかった。sum[i] = sum[i-1] + a[i] でいい
        sum[i] = a_sum;
    }

    for (int i = 0; i < q; i++)
    {
        int q1;
        cin >> q1;
        if (q1 == 1)
        {
            int x;
            cin >> x;
            x--;
            int tmp;
            tmp = a[x];
            a[x] = a[x + 1];
            a[x + 1] = tmp; // swap(a[x], a[x+1])で入れ替え可能
            sum[x] += a[x] - a[x + 1];
        }
        else
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            ll ans = sum[r] - sum[l] + a[l]; // sumの要素数がｎで0から始まる奴なら、もっときれいに行けた。
            cout << ans << "\n";
        }
    }
}
*/

// 理想コード
int main()
{
    int n, q;
    cin >> n >> q;
    vector<ll> a(n);
    vector<ll> sum(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum[i + 1] = sum[i] + a[i];
    }

    for (int i = 0; i < q; i++)
    {
        int q1;
        cin >> q1;
        if (q1 == 1)
        {
            int x;
            cin >> x;
            x--;
            swap(a[x], a[x + 1]);
            sum[x + 1] = sum[x] + a[x];
        }
        else
        {
            int l, r;
            cin >> l >> r;
            l--;
            ll ans = sum[r] - sum[l];
            cout << ans << "\n";
        }
    }
}