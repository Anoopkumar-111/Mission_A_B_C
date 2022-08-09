#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin>>n;
    int a[n];

    int dec=0,f=0,inc=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    // Will need minimum steps if array pattern is
    // INCREASING
    // DECREASING
    // INCREASING then DECREASING

    // will need more than MINIMUM is array is
    // DECREASING then increasing

    for(int i=1;i<n;i++){
        // 6 7 8
        if(a[i-1]<a[i]){
            if(dec==0){
                inc=1;
            }
            else{
                // 7 6 8 
                // decrease then INcrease NOT ALLOWED
                f=1;
                break;
            }
        }
        else if(a[i-1]>a[i]){
            // 7 6 5
            dec=1;
        }
    }

    if(f){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
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
