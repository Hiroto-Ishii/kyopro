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
    int n, m;
    cin >> n >> m;
    vector<int> s(m + 1, 0);
    rep(i, n)
    {
        int l;
        cin >> l;
        int ans = 0;
        rep(ii, l)
        {
            int x;
            cin >> x;
            if (s[x] == 0 && ans == 0)
            {
                cout << x << "\n";
                s[x]++;
                ans++;
            }
            else if (ii == l - 1 && ans == 0)
            {
                cout << 0 << "\n";
                ans++;
            }
        }
    }
}