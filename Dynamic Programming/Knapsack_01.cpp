#include <iostream>
#include <vector>
using namespace std;

// Function to solve the 0/1 Knapsack problem
int knapsack(int W, vector<int> &wt, vector<int> &val, int n)
{
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0)); // DP table

    for (int i = 1; i <= n; i++)
    {
        for (int w = 0; w <= W; w++)
        {
            if (wt[i - 1] <= w)
                dp[i][w] = max(dp[i - 1][w], val[i - 1] + dp[i - 1][w - wt[i - 1]]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }
    return dp[n][W];
}

int main()
{
    int W = 100;                            // Capacity of the knapsack
    vector<int> val = {80, 24, 23, 22, 21}; // Values of the items
    vector<int> wt = {80, 25, 25, 25, 25};  // Weights of the items
    int n = val.size();                     // Number of items

    cout << "Maximum value in knapsack: " << knapsack(W, wt, val, n) << endl;
    return 0;
}
