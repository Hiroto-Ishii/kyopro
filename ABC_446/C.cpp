// clang-format off
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (ll i = 0; i < (n); i++)
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using pil = pair<int, ll>;
using pli = pair<ll, int>;
template<typename T> bool chmin(T& a, T b){if(a > b){a = b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a < b){a = b; return true;} return false;}
auto _ = []{ios::sync_with_stdio(false); cin.tie(nullptr); return 0;}();
const int dy[4] = {-1, 0, 0, 1};
const int dx[4] = {0, -1, 1, 0};
const int ddy[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int ddx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
const int inf = 1 << 30;
const ll INF = 1LL << 62;
// clang-format on

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, d;
        cin >> n >> d;
        queue<ll> q;
        ll ans = 0;
        rep(i, n)
        {
            ll a;
            cin >> a;
            rep(ii, a) q.push(i + 1);
        }
        rep(i, n)
        {
            ll b;
            cin >> b;
            rep(ii, b) q.pop();

            // while (q.front() == i + 1 - d)　俺の解答
            while (!q.empty() && q.front() == i + 1 - d) // 正解コード
                // 範囲外を参照しないようにするため、q.empty()の条件を追加する
                q.pop();
        }
        while (!q.empty())
        {
            q.pop();
            ans++;
        }
        cout << ans << endl;
    }
}