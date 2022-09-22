#include <bits/stdc++.h>
using namespace std;

void solve()
{
    set<char>sett;

    int t=4;

    while(t--){
        char a;
        cin>>a;
        sett.insert(a);
    }

    if(sett.size()==4){
        cout<<3<<endl;
    }
    else if(sett.size()==3){
        cout<<2<<endl;
    }
    else if(sett.size()==2){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
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