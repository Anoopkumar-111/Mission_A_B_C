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

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = i+1;
        }

        int i = 0;
        if (n % 2 != 0) i++;
        for (; i < n; i += 2)
        {
          
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }

        for(auto i:arr){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}