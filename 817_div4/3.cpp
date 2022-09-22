#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n;
    string b,c;

    while (t--)
    {
        cin>>n;
        cin>>b;
        cin>>c;

        bool flag=0;
        for(int i=0;i<n;i++){
            if(b[i]!=c[i]){
                if(b[i]=='R' || c[i]=='R'){
                    flag=1;
                }
            }
        }

        if(flag) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
       
        
       

        
    }

    return 0;
}