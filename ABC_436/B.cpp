#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n, 0));

    int r, c, k;
    r = 0;
    c = (n - 1) / 2;
    k = 1;
    a[r][c] = k;
    for (int i = 2; i <= n * n; i++)
    {
        int nr, nc;
        nr = (r - 1) % n;
        if (nr < 0)
            nr += n;
        nc = (c + 1) % n;
        if (a[nr][nc] == 0)
        {
            a[nr][nc] = k + 1;
            k++;
            r = nr;
            c = nc;
        }
        else
        {
            r = (r + 1) % n;
            a[r][c] = k + 1;
            k++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}
