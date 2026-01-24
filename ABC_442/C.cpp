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
        re[a - 1]--;
        re[b - 1]--;
    }
    ll ans;
    for (int i = 0; i < n - 1; i++)
    {
        ans = re[i] * (re[i] - 1) * (re[i] - 2) / 6;
        cout << ans << " ";
    }

    int i = n - 1;
    ans = re[i] * (re[i] - 1) * (re[i] - 2) / 6;
    cout << ans << endl;
}