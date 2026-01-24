#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<ll> a(n);
    vector<ll> sum(n);

    ll a_sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a_sum += a[i];
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
            a[x + 1] = tmp;
            sum[x] += a[x] - a[x + 1];
        }
        else
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            ll ans = sum[r] - sum[l] + a[l];
            cout << ans << "\n";
        }
    }
}