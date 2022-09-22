#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    unordered_map<char, int> umap;

    // char a='a';
    int a = 97;
    for (int i = 1; i < 27; i++)
    {
        umap[(char)a] = i;
        a++;
    }

    // for(auto i:umap){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }

    while (t--)
    {
        string str;
        cin >> str;

        int k = str.size();

        vector<pair<char, int>> pairr;

        if (k == 2)
        {
            cout << 1 << " " << 2 << endl;
        }
        else if (k == 3)
        {
            cout << 1 << " " << 3 << endl;
        }
        else
        {

            int idx = 1;
            for (auto i : str)
            {
                // pairr[i]=idx;
                pairr.push_back({i, idx});
                idx++;
            }

            // for(auto i:pairr){
            //     cout<<i.first<<" "<<i.second<<endl;
            // }

            sort(pairr.begin() + 1, pairr.begin() + k - 2);
            // cout<<"______________"<<endl;

            string ans = "";
            for (auto i : pairr)
            {
                // cout<<i.first<<" "<<i.second<<endl;
                ans += to_string(i.second);
            }
            // cout << ans << endl;
            for(auto i:ans){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}