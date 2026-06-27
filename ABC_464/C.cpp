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

int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<int>> v(n, vector<int>(2, 0));

  rep(i, n) v[i][1] = m + 1;

  int q = n;

  while (q--) {
    int a, d, b;
    cin >> a >> d >> b;
    a--;
    b--;

    if (v[a][0] < d) v[a][0] = d - 1;
    if (v[b][1] > d) v[b][1] = d;
  }

  vector<int> ans(m + 1, n);
  rep(i, n) {
    if (v[i][0] < v[i][1]) {
      for (int ii = v[i][0] + 1; ii < v[i][1]; ii++) ans[ii]--;
    }
  }

  for (int i = 1; i <= m; i++) {
    cout << ans[i] << endl;
  }
}