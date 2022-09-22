#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long  n,m;
    cin>>n>>m;

    if((abs(m-n))%2==0){
        cout<<"Tonya"<<endl;
    }
    else if((abs(m-n))%2==1){
        cout<<"Burenka"<<endl;
    }

    
}

int  main()
{

    long long  t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}