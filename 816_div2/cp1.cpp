#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,m;
    cin>>n>>m;

    if(n==1 && m==1){
        cout<<0<<endl;
        return;
    }

 
   long long c1=m-1;
   long long c2=n-1;

   long long c;
   long long d11;
   if(c2>c1){
    c=c2;
    d11=m-1;
   }
   else{
    c=c1;
    d11=n-1;
   }

   
   cout<<(d11+d11+c+1)<<endl;



}


int main()
{
    long long t;
    cin>>t;

    while(t--){
        solve();
    }
    

    return 0;
}
