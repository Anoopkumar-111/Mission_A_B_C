#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    int maxi = -1;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
    }

    int c = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            // cout<<"i = "<<i<<endl;
            maxi = arr[i];
            c = i + 1;
        }
        // arr[i]=a;
    }

    // cout <<"=== "<< c << endl;
    cout<<c<<endl;
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