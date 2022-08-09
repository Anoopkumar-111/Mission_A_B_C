#include <bits/stdc++.h>
using namespace std;


void a_fill(int l, int r, int val, int arr[])
{
    int temp = r;
    for (int i = l; i <= r; i++)
    {
        arr[i] = temp--;
    }
}

void solve()
{

    int n;
    cin >> n;

    int arr[n];
    // vector<int> arr(n);

    for (int i = n - 1; i >= 0; i--)
    {
        int sq = sqrt(2 * i);
        sq = sq*sq;

        // left , right , value , arr
        a_fill(sq - i, i, sq, arr);

        i = sq - i;
    }


    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}