#include <bits/stdc++.h>
using namespace std;

int solve()
{

    int n;
    cin >> n;

    set<char> sett1;
    set<char> sett2;

    for (int i = 0; i < n; i++)
    {
        char a;
        cin >> a;
        if (a == 'G' || a == 'B')
        {
            a = 'B';
        }
        sett1.insert(a);
    }

    for (int i = 0; i < n; i++)
    {
        char a;
        cin >> a;
        if (a == 'G' || a == 'B')
        {
            a = 'B';
        }
        sett2.insert(a);
    }

    vector<char> aa;
    vector<char> bb;

    for (auto i : sett1)
        aa.push_back(i);
    for (auto i : sett2)
        bb.push_back(i);

    sort(aa.begin(), aa.end());
    sort(bb.begin(), bb.end());

    bool flag = 1;

    if (aa.size() == bb.size() && aa.size() == 1)
    {
        if (aa[0] != bb[0])
        {
            flag = 0;
            return 0 ;
        }
    }
    else if (aa.size() != bb.size() && aa.size() == 2)
    {
        if (aa[0] != bb[0] || aa[1] != bb[0])
        {
            flag = 0;
            return 0;
        }
    }
    else if (aa.size() != bb.size() && bb.size() == 2)
    {
        if (aa[0] != bb[0] || bb[1] != aa[0])
        {
            flag = 0;
            return 0;
        }
    }
    else{
        return 1;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int flag = solve();
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}