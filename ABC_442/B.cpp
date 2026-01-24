#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int q;
    cin >> q;
    int play = 0;
    int vol = 0;

    for (int i = 0; i < q; i++)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            vol++;
        }
        else if (a == 2)
        {
            if (vol != 0)
                vol--;
        }
        else
        {
            if (play == 0)
                play = 1;
            else
                play = 0;
        }

        if (vol >= 3 && play == 1)
            cout << "Yes" << "\n";
        else
            cout << "No" << "\n";
    }
}