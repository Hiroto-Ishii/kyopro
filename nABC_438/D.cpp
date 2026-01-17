#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    ll max_a, max_b, max_c, new_b, new_c, old_a, old_b, old_c;
    max_a = a[0];
    max_b = 0;
    max_c = 0;

    old_a = max_a + a[1];
    new_b = max_a + b[1];
    
    max_a = old_a;
    max_b = new_b;

    old_a = max_a + a[2];
    new_b = max_a + b[2];
    old_b = max_b + b[2];
    new_c = max_b + c[2];

    max_a = old_a;
    max_b = max(new_b, old_b);
    max_c = new_c;


    for (int i = 3; i < n; i++)
    {
        old_a = max_a + a[i];
        new_b = max_a + b[i];
        old_b = max_b + b[i];
        new_c = max_b + c[i];
        old_c = max_c + c[i];

        max_a = old_a;
        max_b = max(new_b, old_b);
        max_c = max(new_c, old_c);
    }

    cout << max_c << endl;
}