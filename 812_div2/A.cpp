#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int ans = 0;
    int l = 0, r = 0, u = 0, d = 0;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        if (x == 0)
        {
            // can be up or down
            if (y > 0)
            {
                u = max(u, y);
            }
            else
            {
                d = max(d, abs(y));
            }
        }
        else
        {
            // can left or right
            if (x > 0)
            {
                r = max(r, x);
            }
            else
            {
                l = max(l, abs(x));
            }
        }
    }

    cout << (u + d + l + r) * 2 << endl;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}