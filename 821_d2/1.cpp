#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;

    vector<long long> vec(n);

    long long ans1 = 0;
    for (long long i = 0; i < n; i++)
    {
        cin >> vec[i];
        ans1 += vec[i];
    }

    vector<pair<long long, long long>> pr;

    for (long long i = 0; i < n; i++)
    {
        pr.push_back({(vec[i] % k), vec[i]});
    }

    sort(pr.begin(), pr.end());

    long long ans = 0;
    long long curr = 0;
    long long prev = 0;
    for (long long i = 0; i < n; i++)
    {
        // cout << pr[i].first << " " << pr[i].second << endl;
        if (prev == pr[i].first)
        {

            curr += pr[i].second;
            // cout << "curr = " << curr << endl;
            // cout << "ans = " << ans << endl;
        }
        else
        {
            // cout << "else ==== " << endl;
            // cout << "curr = " << curr << endl;
            // cout << "ans = " << ans << endl;
            curr = pr[i].second;
            prev = pr[i].first;
        }
        ans = max(ans, curr);
    }

    // cout << "ans == > " << ans << endl;

    if (n % k == 0)
    {
        cout << ans << endl;
    }
    else
    {
        ans = max(ans1, ans);
        cout << ans << endl;
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