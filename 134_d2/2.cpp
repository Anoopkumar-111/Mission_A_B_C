#include <bits/stdc++.h>
using namespace std;

int solve(int n, int m, int i, int j, vector<vector<int>> &vec)
{
    if (i == (n - 1) || j == (m - 1))
        return 1;
    if (i >= n || j >= m)
        return 0;

    if (vec[i][j] != -1)
        return vec[i][j];

    int right = solve(n, m, i + 1, j, vec);
    int down = solve(n, m, i, j + 1, vec);

    return vec[i][j] = right + down;
}

int uniquePaths(int n, int m)
{

    vector<vector<int>> vec(n, vector<int>(m, -1));

    int ans = solve(n, m, 0, 0, vec);
    // cout<<ans;

    return ans;
}

void mark(int x, int y, int n, int m, vector<vector<int>> &vec, int d)
{
    vec[x][y] = -2;

    int i = 0;
    while (x + i <= n)
    {
        vec[x + i][y] = -2;
        i++;
    }

    int k = d;
    while (x - k > 0)
    {
        vec[x + k][y] = -2;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    int x, y, d;
    cin >> x >> y >> d;

    vector<vector<int>> vec(n, vector<int>(m, -1));

    return 0;
}
