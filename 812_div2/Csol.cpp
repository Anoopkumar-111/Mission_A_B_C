#include<bits/stdc++.h>
using namespace std;
#define ll int


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, n, i, j, k, p, q, k1, i1;
    
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>n;
        
        ll ans[n];
        
        j=-1;
        
        for(i=n-1; i>=0;){
            
            for(k=0; k<=i; k++)
            {
                p=k+i;
                q=sqrt(p);
                
                if(q*q==p){
                    k1=k;
                    i1=i;
                    while(k1<=i1){
                        ans[k1]=i1;
                        ans[i1]=k1;
                        k1++;
                        i1--;
                    }
                    i=k-1;
                    break;
                }
            }
        }
        
        for(i=0; i<n; i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
    
}