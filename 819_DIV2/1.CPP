#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
  
    int minn = INT_MAX, maxx = INT_MIN;
    int a;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        minn = min(minn, a);
        maxx = max(maxx, a);
    }

    // cout << "max & min " << maxx << " " << minn << endl;

    cout << (maxx - minn) << endl;
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