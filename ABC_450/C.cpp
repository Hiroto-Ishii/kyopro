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
vector<vector<char>> s(1000, vector<char>(1000, '#'));

int group(int x, int y, int h, int w) {
  int ans = 1;
  if (x == h - 1 || x == 0 || y == w - 1 || y == 0) ans = 0;
  for (int i = 0; i <= 4; i++) {
    for (int ii = 0; ii <= 4; ii++) {
      if (s[x + i][y + ii] == '.') {
        s[x + i][y + ii] = '#';
        ans = ans * group(x + i, y + ii, h, w);
      }
    }
  }
  return ans;
}

int main() {
  int h, w;
  cin >> h >> w;
  int ans = 0;
  for (int i = 0; i < h; i++) {
    for (int ii = 0; ii < w; ii++) {
      cin >> s[i][ii];
    }
  }
  rep(i, h) {
    rep(ii, w) {
      if (s[i][ii] == '.') ans += group(i, ii, h, w);
    }
  }
  cout << ans << endl;
}