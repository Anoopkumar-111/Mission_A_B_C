#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int ans = 0;

    set<int> sett;

    while (n--)
    {

        int a, b;
        cin >> a >> b;

        sett.insert(a);
        sett.insert(b);
    }


    for (auto i : sett)
    {
        ans = ans + abs(i);
    }

    // cout << "ans is " << ans << endl;

    cout << (ans * 2) << endl;
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