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

int main() {
  int n;
  cin >> n;

  vector<vector<ll>> C(n, vector<ll>(n + 1));
  for (int i = 1; i < n; i++) {
    for (int ii = i + 1; ii <= n; ii++) cin >> C[i][ii];
  }

  for (int a = 1; a < n - 1; a++) {
    for (int b = a + 1; b < n; b++) {
      for (int c = b + 1; c < n + 1; c++) {
        if (C[a][c] > C[a][b] + C[b][c]) {
          cout << "Yes" << endl;
          exit(0);
        }
      }
    }
  }
  cout << "No" << endl;
}