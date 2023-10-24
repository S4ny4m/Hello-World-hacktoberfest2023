// This is GOD's workspace.
#include <iostream>
#include <vector>
using namespace std;

int memo(int i, vector<int> dp, vector<int> v)
{
    if (i == 0)
        return 0;
    if (dp[i] != -1)
        return dp[i];
    int l = memo(i - 1, dp, v) + abs(v[i] - v[i - 1]);
    if (i > 1)
        int r = memo(i - 2, dp, v) + abs(v[i] - v[i - 2]);
    return dp[i] = min(l, r);
}

int main()
{
    tt
    {
        int n;
        cin >> n;
        vector<int> v(n), dp(n + 1);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        cout << memo(n - 1, dp, v);
    }
    for each
        question we can apply recursion and find out what is going on a return 0;
}