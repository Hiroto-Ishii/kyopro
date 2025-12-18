#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n - s.length(); i++)
    {
        cout << "o";
    }
    cout << s << endl;
}
