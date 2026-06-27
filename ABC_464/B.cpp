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
  int h, w;
  cin >> h >> w;

  vector<string> c(h);

  rep(i, h) cin >> c[i];

  int su = -1;
  int sd = -1;
  int sl = -1;
  int sr = -1;

  rep(i, h) {
    rep(ii, w) {
      if (c[i][ii] == '#') {
        su = i;
        break;
      }
    }
    if (su != -1) break;
  }

  for (int i = h - 1; i >= 0; i--) {
    rep(ii, w) {
      if (c[i][ii] == '#') {
        sd = i;
        break;
      }
    }
    if (sd != -1) break;
  }

  for (int i = 0; i < w; i++) {
    rep(ii, h) {
      if (c[ii][i] == '#') {
        sl = i;
        break;
      }
    }
    if (sl != -1) break;
  }

  for (int i = w - 1; i >= 0; i--) {
    rep(ii, h) {
      if (c[ii][i] == '#') {
        sr = i;
        break;
      }
    }
    if (sr != -1) break;
  }

  for (int i = su; i <= sd; i++) {
    for (int ii = sl; ii <= sr; ii++) {
      cout << c[i][ii];
    }
    cout << endl;
  }
}