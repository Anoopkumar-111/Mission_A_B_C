#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    if (x == 0 && y != 0)
    {
        swap(x, y);
    }



    if (x == 0 && y == 0)
    {
        cout << -1 << endl;
        return;
    }
    else if (x != 0 && y != 0)
    {
        cout << -1 << endl;
        return;
    }
    else if ((n - 1) % x != 0)
    {
        cout << -1 << endl;
        return;
    }

    else if (x == 0 || y == 0)
    {
        int k = 1;
        int cnt = 0;

        bool flag = 1;
        for (int i = 1; i <= (n - 1); i++)
        {
            // cout<<"run __ "<<i<<endl;
            if (cnt != x)
            {
                cout << k << " ";
            }
            else
            {
                cnt = -1;
                if (flag)
                {
                    k = k + x + 1;
                    flag = 0;
                }
                else
                {
                    k = k + x;
                }
                i--;
            }
            cnt++;
            // cout<<endl;
        }
    }
    cout << endl;
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