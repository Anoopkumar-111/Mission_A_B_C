#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int arr2[n];
    int kk=1;
    for (int i = 0; i < n; i++)
    {
        arr2[i] = kk;
        kk++;
    }

    sort(arr, arr + k);
    int cnt = 0;

   
    int pst=0;
    // needed : 1 2 3
    // presnt : 4 5 1
    // element 1 is already in SUM range NO need to swap
    for (int i = 0; i < k; i++)
    {
        for(int j=0;j<k;j++){
            if(arr[i]==arr2[j]){
                pst++;
            }
        }
    }

    if(pst==k){
        cout<<0<<endl;
    }
    else{
        cout<<(k-pst)<<endl;
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