#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    if(n%2==0){
        int e=2;
        int o=1;
        for(int i=0;i<(n-2)/2;i++){
            cout<<e<<" "<<o<<" ";
            e+=2;
            o+=2;
        }
        cout<<n-1<<" "<<n<<endl;
    }
    else{
        cout<<1<<" ";
        int e=2;
        int o=3;
        for(int i=0;i<(n-2)/2;i++){
            cout<<o<<" "<<e<<" ";
            e+=2;
            o+=2;
        }
        cout<<n-1<<" "<<n<<endl;


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