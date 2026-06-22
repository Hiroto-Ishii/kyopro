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
  int t;
  cin >> t;

  while (t--) {
    ll x1, x2, y1, y2, r1, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    ll x = x1 - x2;
    ll y = y1 - y2;
    ll kyori_s = (x * x) + (y * y);
    double kyori = sqrt(kyori_s);
    ll r = r1 + r2;
    if ((x * x) + (y * y) <= r * r && kyori + r1 >= r2 && kyori + r2 >= r1)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }
}