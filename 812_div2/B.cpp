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

    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]){
            if(dec==0){
                inc=1;
            }
            else{
                f=1;
                break;
            }
        }
        else if(a[i]<a[i-1]){
            dec=1;
        }
    }

    if(f==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


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
