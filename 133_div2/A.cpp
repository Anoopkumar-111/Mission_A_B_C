#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        long long int n;
        cin >> n;
 
        long long int ans = 0;
 
        if (n % 3 == 0)
        {
            ans = n / 3;
        }
        else
        {
            ans = (n / 3) + 1;
        }
 
        // cout<<"now "<<ans<<endl;
 
        if(n==1){
            ans=2;
        }
 
        cout << ans << endl;
    }
 
    return 0;
}