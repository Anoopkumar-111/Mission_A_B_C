#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
 
    long long n;
    cin >> n;
    vector<long long> arr(n);
    long long k = 1;
    for (long long i = 0; i < n; i++)
    {
        arr[i] = k;
        k++;
    }
 
    long long loop_it;
 
    int numm = 0;
    int jj = n;
 
 
    cout<<n<<endl;
 
  
    long long nn = n;
 
    long long int ss = arr.size() - 2;
    long long int end = arr.size() - 1;
    while (nn--)
    {
        for (long long i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        // reverse(arr.begin()+kk, arr.begin()+end);
 
        // cout<<" end & end =>  "<<ss<<" "<<(end)<<endl;
        // cout<<" values = "<<arr[ss]<<" = "<<arr[end]<<endl;
        swap(arr[ss], arr[end]);
        end--;
        ss--;
 
        
    }
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