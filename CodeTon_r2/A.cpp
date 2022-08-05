#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    string a, b;
    cin >> a >> b;

    // not possible if a is already smaller
    if (a.size() < b.size())
    {
        cout << "NO" << endl;
        return;
    }

    //first char must match..after first char all char should match 
    bool first_char = 0;
    for (int i = n - m; i >= 0; i--)
    {
        if (a[i] == b[0])
        {
            first_char = 1;
        }
    }

    if (!first_char)
    {
        cout << "NO" << endl;
        return;
    }

    // check remaining char of a & b
    int j = 1;
    for (int i = n - m + 1; i < n; i++)
    {
        if (a[i] != b[j])
        {
            cout << "NO" << endl;
            return;
        }
        j++;
    }

    cout << "YES" << endl;
    
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