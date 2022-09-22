#include <bits/stdc++.h>
using namespace std;

void Rotate(int arr[], int d, int n)
{
    int p = 1;
    while (p <= d)
    {
        int last = arr[0];
        for (int i = 1; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = last;
        p++;
    }
}

void solve(int cn)
{
    int cnt = cn;

    int n;
    cin >> n;

    int arr[n];
    int temp[n-1];

    for(int i=0;i<n;i++){
        arr[i]=i+1;
    }

    for(int i=0;i<n-1;i++){
        temp[i]=i+1;
    }

    if (n % 2 == 1)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout<<endl;
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            cout << temp[i] << " ";
        }
        cout << endl;

        Rotate(temp,cnt,n);

        for (int i = 0; i < n - 1; i++)
        {
            cout << temp[i] << " ";
        }
        cout << endl;

        cnt++;

        for (int i = 0; i < n - 1; i++)
        {
            cout << temp[i] << " ";
        }
        cout << arr[n - 1] << " ";
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    int cnt = 2;
    while (t--)
    {
        solve(cnt);
    }

    return 0;
}