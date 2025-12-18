#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;

    int m;
    cin >> m;
    int ans = 0;
    vector<int> r(m);
    vector<int> c(m);
    int r_max, c_max, r_min, c_min;
    r_max = 0;
    c_max = 0;
    r_min = n;
    c_min = n;
    for (int i = 0; i < m; i++)
    {
        cin >> r[i] >> c[i];
        r[i]--;
        c[i]--;
        r_max = max(r_max, r[i]);
        c_max = max(c_max, c[i]);
        r_min = min(r_min, r[i]);
        c_min = min(c_min, c[i]);
    }
    int r_size = r_max - r_min + 1;
    int c_size = c_max - c_min + 1;
    vector<vector<int>> a(r_size + 1, vector<int>(c_size + 1));
    for (int i = 0; i < m; i++)
    {
        int nr = r[i] - r_min;
        int nc = c[i] - c_min;
        if (a[nr][nc] != 1 && a[nr + 1][nc] != 1 && a[nr][nc + 1] != 1 && a[nr + 1][nc + 1] != 1)
        {
            a[nr][nc] = 1;
            a[nr + 1][nc] = 1;
            a[nr][nc + 1] = 1;
            a[nr + 1][nc + 1] = 1;
            ans++;
        }
    }
    cout << ans << endl;
}