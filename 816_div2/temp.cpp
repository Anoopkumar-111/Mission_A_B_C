#include <bits/stdc++.h>
using namespace std;

int main()
{
    string blocks = "WWBBBWBBBBBWWBWWWB";
    int k = 16;

    int n = blocks.size();

    int real_ans = 0;

    int cnt = 0;
    int blk_cnt = 0;

    int anss = 0;

    for (int j = 0; j < n - k + 1; j++)
    {
        // cout<<"runs"<<endl;
        for (int l = j; l < (k + j); l++)
        {
            cout << "enters l= " << l << endl;
            // cout<<blocks[l]<<" ";
            if (k + j > n)
                continue;

            if (blocks[l] == 'B')
            {
                blk_cnt++;
            }
        }
        real_ans = max(real_ans, blk_cnt);
        cout << "real " << real_ans << " blk = " << blk_cnt << endl;
        blk_cnt = 0;
    }

    if (real_ans == 0)
    {
        int temp = 0;
        for (auto i : blocks)
        {
            if (i == 'B')
            {
                temp++;
            }
        }
        cout << (k - temp) << endl;
    }

    if (real_ans >= k)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << (k - real_ans) << endl;
    }

    return 0;
}
