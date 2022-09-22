#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t, n, i;

    cin >> t;

    while (t--)
    {
        cin >> n;

        if ((n % 2) == 1)
        {
            cout << 1 << " ";
            for (i = 2; i <= n; i += 2)
            {
                cout << i + 1 << " " << i << " ";
            }
        }
        else
        {
            for (i = 1; i <= n; i += 2)
            {
                cout << i + 1 << " " << i << " ";
            }
        }
        cout<<endl;
    }
}