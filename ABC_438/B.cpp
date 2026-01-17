#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    int m;
    cin >> n >> m;

    string s;
    string t;
    cin >> s;
    cin >> t;

    int sum_cost = 1000000;
    for (int i = 0; i < n - m + 1; i++)
    {
        int cost = 0;
        for (int j = 0; j < m; j++)
        {
            int this_s = s[i + j] - '0';
            int this_t = t[j] - '0';
            int this_cost = this_s - this_t;
            if (this_cost < 0)
                this_cost = 10 + this_cost;
            cost += this_cost;
        }
        sum_cost = min(sum_cost, cost);
    }

    cout << sum_cost << endl;
}