#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, sx, sy, d;
    cin >> n >> m >> sx >> sy >> d;

    if ((sx - d) > 1 && sy + d < m)
    {
        cout << (n + m - 2) << endl;
    }
    else if ((sy - d) > 1 && sx + d < n)
    {
        cout << (n + m - 2) << endl;
    }
    else
    {
        cout << -1 << endl;
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