#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n, k, b, s;
    cin >> n >> k >> b >> s;

    int s1 = s;

    while (s1 / k >= b)
    {
        s1--;
    }

    cout<<s1<<" ";

    int s2=s1;

    while(s2>=0){
        if(s1<b){
            cout<<
        }


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
