#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int kaijyo = 1;

    for (int i = 0; i < n; i++)
    {
        kaijyo *= 2;
    }

    int ans = kaijyo - (2 * n);

    cout << ans << endl;
}