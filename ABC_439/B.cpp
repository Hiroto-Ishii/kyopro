#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    string n;
    cin >> n;

    int ans;

    for (int i = 0; i < 1000; i++)
    {
        ans = 0;
        for (int j = 0; j < n.length(); j++)
        {
            int x = n[j] - '0';
            x = x * x;
            ans += x;
        }

        n = to_string(ans);
    }

    if (ans == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}