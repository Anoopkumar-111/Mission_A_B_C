#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[4];
    for (int i = 1; i < 4; i++)
    {
        cin >> arr[i];
    }
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    int key = arr[n];
    arr[n] = -1;

    int key1 = arr[key];
    arr[key] = -1;

    int key2 = arr[key1];
    arr[key1] = -1;

    if (arr[1] == -1 && arr[2] == -1 && arr[3] == -1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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