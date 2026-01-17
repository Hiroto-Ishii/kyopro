#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> taka(26, 0);
    vector<int> ao(26, 0);
    string s, t;
    cin >> s >> t;

    for (int i = 0; i < n; i++)
    {
        taka[s[i] - 'a'] = 1;
    }

    for (int i = 0; i < m; i++)
    {
        ao[t[i] - 'a'] = 1;
    }

    int q;
    cin >> q;
    int aoans, takaans;

    for (int i = 0; i < q; i++)
    {
        string w;
        cin >> w;
        aoans = 1;
        takaans = 1;

        for (int ii = 0; ii < w.length(); ii++)
        {
            if (ao[w[ii] - 'a'] == 0)
                aoans = 0;
            if (taka[w[ii] - 'a'] == 0)
                takaans = 0;
        }
        if (aoans == 0 && takaans == 1)
            cout << "Takahashi";
        else if (aoans == 1 && takaans == 0)
            cout << "Aoki";
        else
            cout << "Unknown";

        cout << endl;
    }
}