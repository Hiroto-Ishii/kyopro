// clang-format off
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define rep(i, n) for (int i = 1; i <= (n); i++)
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
  int h, w;
  cin >> h >> w;

  vector<vector<char>> v(h + 1, vector<char>(w + 1));
  rep(i, h) { rep(ii, w) cin >> v[i][ii]; }
  ll ans = 0;

  for (int i = 1; i <= h; i++) {
    for (int ii = 1; ii <= w; ii++) {
      for (int point_h = 1; point_h <= h - i + 1; point_h++) {
        for (int point_w = 1; point_w <= w - ii + 1; point_w++) {
          int ok = 1;
          for (int x = 0; x < i; x++) {
            for (int y = 0; y < ii; y++) {
              int x1 = point_h + x;
              int y1 = point_w + y;
              int x2 = point_h + i - 1 - x;
              int y2 = point_w + ii - 1 - y;
              char f = v[x1][y1];
              char l = v[x2][y2];
              if (f != l) ok = 0;
            }
          }
          if (ok == 1) ans++;
        }
      }
    }
  }
  cout << ans << endl;
}