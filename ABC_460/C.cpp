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
  ll n, m;
  cin >> n >> m;

  vector<ll> a(n, 0);
  vector<ll> b(m, 0);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    a[i] = a[i] * 2;
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }

  sort(a.rbegin(), a.rend());
  sort(b.rbegin(), b.rend());

  ll next_a = 0;
  ll ans = 0;
  for (ll i = 0; i < m; i++) {
    if (next_a == n) break;
    if (b[i] <= a[next_a]) {
      ans++;
      next_a++;
    }
  }
  cout << ans << endl;
}