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
  int n;
  cin >> n;

  vector<pair<ll, ll>> hl;
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    hl.push_back({a, b});
  }
  sort(hl.begin(), hl.end(), greater<pair<ll, ll>>());

  ll maxl = 0;
  vector<pair<ll, ll>> hl2;
  rep(i, n) {
    if (hl[i].second > maxl) {
      hl2.push_back({hl[i].first, hl[i].second});
      maxl = hl[i].second;
    }
  }

  int q;
  cin >> q;
  while (q--) {
    ll t;
    cin >> t;
    rep(i, n) {
      if (hl2[i].second > t) {
        cout << hl2[i].first << endl;
        break;
      }
    }
  }
}