#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> v(m);

    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    vector<int> diff;
    for (int i = 0; i < m - 1; i++)
    {
        diff.push_back(v[i + 1] - v[i] - 1);
    }
    diff.push_back(v[0] + n - v[m - 1] - 1);

    int tmr = 0;
    int safe = 0;

    
    sort(diff.begin(), diff.end(), greater<int>());

    for (int i = 0; i < diff.size(); i++)
    {
        int curr = diff[i];
        curr = curr - (tmr * 2);
        if (curr <= 0)
            break;
        safe = safe + (curr - 1);

        if (curr == 1)
            safe++;
        tmr = tmr + 2;
    }

    cout << (n - safe) << endl;
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