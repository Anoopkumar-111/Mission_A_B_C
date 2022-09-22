#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, sx, sy, d;
    cin >> n >> m >> sx >> sy >> d;

    if (((sx + d) >= n || (sy - d) <= 1) && ((sy + d) >= m || (sx - d) <= 1))
    {
        cout << -1 << endl;
    }
    else
    {
        cout << (m + n - 2) << endl;
    }
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