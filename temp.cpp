#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k;
    cin>>n>>k;

    vector<long long>a(n),ans(k);

    for(long long i=0;i<n;i++){
        cin>>a[i];
    }

    for(long long i=0;i<n;i++){
        ans[(i+1)%k]=max(ans[(i+1)%k],a[i]);
    }

    long long ans1=0;

    for(long long i=0;i<k;i++){
        ans1+=ans[i];
    }

    cout<<ans1<<endl;




}

int  main(){

    long long t;
    cin>>t;
    while(t--){
        solve();
    }
   

    

    return 0;
}