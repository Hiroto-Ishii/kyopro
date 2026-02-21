// clang-format off
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); i++)
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
    int n;
    cin >> n;
    vector<pll> a;
    int a_size = 0;

    rep(i, n)
    {
        ll x;
        cin >> x;
        int ok = 0;

        rep(ii, a_size)
        {
            if (a[ii].first + a[ii].second + 1 == x)
            {
                a[ii].second++;
                ok++;
                break;
            }
        }
        if (ok == 0)
        {
            a.push_back({x, 0});
            a_size++;
        }
    }
    ll ans = 0;
    rep(i, a_size)
    {
        ans = max(ans, a[i].second);
    }
    cout << ans + 1 << endl;
}
// 部分列の数だけ要素を保持するやり方だとTLEする。
// 数字のmapをつくって、それぞれに部分列の何番目かを保持するやり方でAC