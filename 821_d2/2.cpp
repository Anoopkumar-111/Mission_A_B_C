#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;

    if ((x == 0 && y == 0) || (x != 0 && y != 0))
    {
        cout << -1 << endl;
        return;
    }

    if (x < y)
    {
        swap(x, y);
    }
    
    if ((n - 1) % x == 0)
    {
        int q = 1;
        y = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (x == y)
            {
                y = 0;
                q = i + 2;
            }
            y++;
            cout << q << " ";
        }
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
        return;
    }
}

int main()
{

    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}