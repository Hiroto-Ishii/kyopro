#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int n_root = sqrt(n);
    int hn_root = sqrt(n / 2);
    priority_queue<int, vector<int>, greater<int>> ans_q;
    ll ans;
    int k = 0;

    for (int i = 1; i <= hn_root; i++)
    {
        for (int j = i + 1; j <= n_root; j++)
        {
            int x, y;
            x = i * i;
            y = j * j;
            ans = x + y;
            if (ans <= n)
            {
                ans_q.push(ans);
                k++;
            }
            else
                break;
        }
    }
    cout << k << endl;
    while (!ans_q.empty())
    {
        cout << ans_q.top() << " ";
        ans_q.pop();
    }
    cout << "\n";
}