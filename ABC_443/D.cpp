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
/*
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> r(n);
    vector<int> goal(n + 2, n);
    vector<int> clear(n, 0);
    int ans = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
      cin >> r[i];
      r[i]--;
      sum += r[i];
      goal[i + 1] = 0;
    }
    for (int i = 0; i < n - 1; i++) {
      for (int ii = 0; ii < n; ii++) {  // だめー
        if (clear[ii] == 0) {
          if (r[ii] == i || goal[ii] == i - 1 || goal[ii + 2] == i - 1) {
            goal[ii + 1] = i;
            clear[ii] = 1;
          } else
            goal[ii + 1] = i + 1;
        }
      }
    }

    for (int i = 0; i < n; i++) sum -= goal[i + 1];
    ans = sum;
    cout << ans << "\n";
  }
}
*/
// R_i = min(R_i,R_i-1 + 1)を頭から
// R_i = min(R_i,R_i+1 + 1)をお尻から

// 正解コード
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> r(n);
    for (int& v : r) cin >> v;
    priority_queue<pli, vector<pli>, greater<pli>>
        pq;  // {a[i], i} のペアを a[i] の昇順で持つ
    for (int i = 0; i < n; i++) pq.push({r[i], i});
    vector<int> a = r;
    while (!pq.empty()) {
      const auto [ai, i] = pq.top();
      pq.pop();
      if (a[i] != ai)
        continue;  // 優先度付きキューに残っている古い情報が取り出された場合すぐに捨てる
      if (i != 0 && a[i - 1] > a[i] + 1) {
        a[i - 1] = a[i] + 1;
        pq.push({a[i - 1], i - 1});
      }
      if (i != n - 1 && a[i + 1] > a[i] + 1) {
        a[i + 1] = a[i] + 1;
        pq.push({a[i + 1], i + 1});
      }
    }
    long ans = 0;
    for (int i = 0; i < n; i++) ans += r[i] - a[i];
    cout << ans << '\n';
  }
}
