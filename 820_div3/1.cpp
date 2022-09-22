#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    int aa = (a - 1);
    int bb = abs(b - c);
    if (c != 1)
    {
        bb = bb + (c - 1);
    }

    if (aa > bb)
        cout << 2 << endl;
    else if (bb > aa)
        cout << 1 << endl;
    else
        cout << 3 << endl;
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