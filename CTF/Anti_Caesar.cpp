#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
using ll = long long;

int main() {
  string s;
  cin >> s;
  int zure = 3;  // ずらされている文字数
  rep(i, (int)s.size()) {
    if (islower(s[i]))
      s[i] = (s[i] - 'a' - zure + 26) % 26 + 'a';
    else if (isupper(s[i]))
      s[i] = (s[i] - 'A' - zure + 26) % 26 + 'A';
  }
  cout << s << endl;
}