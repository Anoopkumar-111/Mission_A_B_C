#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    long long arr[n];

    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    long long max1, max2, min1, min2;

    max1 = arr[n - 1];
    max2 = arr[n - 2];

    min1 = arr[0];
    min2 = arr[1];

    cout << (max1 + max2) - (min1 + min2) << endl;
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