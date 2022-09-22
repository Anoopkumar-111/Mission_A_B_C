#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<pair<string, int>> first;
    vector<pair<string, int>> second;
    vector<pair<string, int>> third;

    vector<string> words;
    // vector<pair<int, string>> words;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        first.push_back({str, i + 1});
        words.push_back(str);
    }

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        second.push_back({str, i + 1});
        words.push_back(str);
    }

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        third.push_back({str, i + 1});
        words.push_back(str);
    }

    // for(int i=0;i<n;i++){
    //     if(first[i].second!=second[i].second)
    // }

    unordered_map<string, int> umap;
    for (auto i : words)
    {
        umap[i]++;
    }

    int cnt_a = 0, cnt_b = 0, cnt_c = 0;
    for (auto i : first)
    {
        if (umap[i.first] == 1)
        {
            cnt_a += 3;
        }
        else if (umap[i.first] == 2)
        {
            cnt_a += 1;
        }
        else
        {
            cnt_a += 0;
        }
    }
    for (auto i : second)
    {
        if (umap[i.first] == 1)
        {
            cnt_b += 3;
        }
        else if (umap[i.first] == 2)
        {
            cnt_b += 1;
        }
        else
        {
            cnt_b += 0;
        }
    }
    for (auto i : third)
    {
        if (umap[i.first] == 1)
        {
            cnt_c += 3;
        }
        else if (umap[i.first] == 2)
        {
            cnt_c += 1;
        }
        else
        {
            cnt_c += 0;
        }
    }

    cout << cnt_a << " " << cnt_b << " " << cnt_c << endl;
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