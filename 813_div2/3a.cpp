#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ll t, n, i, j, ans, last;

    cin >> t;


    while (t--)
    {
        cin >> n;

        ll a[n];

        bool v[n + 1];

        for (i = 0; i <= n; i++)
        {
            v[i] = false;
        }

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }



        last = -1;
        for (i = n - 2; i >= 0; i--)
        {
            if (a[i] > a[i + 1])
            {
                last = i;
                break;
            }
        }




        if (last == -1)
        {
            cout << "0\n";
            continue;
        }



        for (i = 0; i <= last; i++)
        {
            v[a[i]] = true;
        }

        for (i = last + 1; i < n; i++)
        {
            if (v[a[i]] == true)
            {
                last = i;
            }
        }



        for (i = last; i >= 0; i--)
        {
            v[a[i]] = true;
        }
        ans = 0;

        for (i = 1; i <= n; i++)
        {
            if (v[i] == true)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
}