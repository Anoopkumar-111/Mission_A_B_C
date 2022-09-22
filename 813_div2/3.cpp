#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int range = 0;
    int curr = 0;

    int til_i = -1;
    for (int i = n - 2; i >= 0; i--)
    {
      
        cout << "prev & curr " << prev << " " << arr[i] << endl;
        if (arr[i+1] < arr[i])
        {
            curr++;
            til_i = i;
            break;
        }
    }

    cout << "till indx " << til_i << endl;

    set<int> sett;
    for (int i = til_i; i >= 0; i--)
    {
        sett.insert(arr[til_i]);
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