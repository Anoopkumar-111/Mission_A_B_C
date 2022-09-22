#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        // even case .. can form pairs of 2 elements
        // lcm(a,b) max when gcd(a,b) is minimum
        // gcd(a,b) minimum for i with i-1 & i+1 elements
        // for odd .. first element pair with 1 & remaining like even
        if (n % 2 == 0)
        {
            for (int i = 1; i <= n; i+=2)
            {
                cout << (i + 1) << " " << i << " ";
            }
        }
        else
        {
            cout << 1 << " ";
            for (int i = 2; i <= n; i+=2)
            {
                cout << (i + 1) << " " << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}