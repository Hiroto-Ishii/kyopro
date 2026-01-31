// clang-format off
#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
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
  int n, t;
  cin >> n >> t;
  vector<ll> a(n);
  ll ans = 0;
  ll begin = 0;  // これ使わんかった
  ll end = -100;

  for (ll i = 0; i < n; i++) {
    cin >> a[i];
    if (end + 100 < a[i]) {
      ans += a[i] - (end + 100);
      end = a[i];
    }
  }

  if (end + 100 < t) {
    ans += t - (end + 100);
  }

  cout << ans << endl;  // 解き方自体は最適解
}