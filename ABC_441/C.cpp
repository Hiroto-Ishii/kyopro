#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n, k, x;
    cin >> n >> k >> x;

    vector<ll> a(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.rbegin(), a.rend());

    ll sum, ans;
    sum = 0;
    ans = -1;

    for (ll i = 0; i < k; i++)
    {
        sum += a[i + n - k];
        if (sum >= x)
        {
            ans = n - k + 1 + i;
            break;
        }
    }
    cout << ans << endl;
}