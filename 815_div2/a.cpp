#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long temp1 = a * d, temp2 = b * c;
    // cout<<temp1<<" "<<temp2<<endl;

    if (temp1 == temp2)
    {
        cout << 0 << endl;
    }
    else if (temp1 == 0 || temp2 == 0)
    {
        cout << 1 << endl;
    }
    else if ((temp1 % temp2 == 0) || (temp2 % temp1 == 0))
    {

        cout << 1 << endl;
    }
    else
    {
        cout << 2 << endl;
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