// This is GOD's workspace.
#include <iostream>
using namespace std;

#define mxItem 11
#define mxKnapsackWeight 102

int main()
{
    int dp[mxItem][mxKnapsackWeight];
    int n, W;
    cout << "Enter number of items : ";
    cin >> n;
    int wt[n], val[n];

    cout << "Enter Weight of " << n << " items : ";
    for (int i = 0; i < n; i++)
        cin >> wt[i];

    cout << "Enter Value of " << n << " items : ";
    for (int i = 0; i < n; i++)
        cin >> val[i];

    cout << "Enter Capacity of Knapsack : ";
    cin >> W;
    for (int i = 0; i < n + 1; i++)
        for (int j = 0; j < W + 1; j++)
            if (i == 0 || j == 0)
                dp[i][j] = 0;

    for (int i = 1; i <= n; i++) // represents number of elements
    {
        for (int j = 1; j <= W; j++) // represents weight
        {
            if (wt[i - 1] <= j)
                dp[i][j] = max((val[i - 1] + dp[i - 1][j - wt[i - 1]]), dp[i - 1][j]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    cout << "Maximum profit is " << dp[n][W] << endl;
    for (int i = 0; i < W + 1; i++)
    {

        for (int j = 0; j < W + 1; j++)
            cout << dp[i][j] << " ";
        cout << endl;
    }
    return 0;
}