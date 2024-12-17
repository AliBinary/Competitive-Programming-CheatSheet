#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find the maximum sum player A can get
int maxCoins(const vector<int> &coins)
{
    int n = coins.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));

    // Base case: when there's only one coin, player A takes it
    for (int i = 0; i < n; i++)
    {
        dp[i][i] = coins[i];
    }

    // Fill DP table for subarrays of length 2 to n
    for (int len = 2; len <= n; len++)
    {
        for (int i = 0; i < n - len + 1; i++)
        {
            int j = i + len - 1;
            dp[i][j] = max(coins[i] + min(dp[i + 2][j], dp[i + 1][j - 1]),
                           coins[j] + min(dp[i + 1][j - 1], dp[i][j - 2]));
        }
    }

    return dp[0][n - 1]; // Maximum sum player A can get
}

int main()
{
    vector<int> coins = {8, 15, 3, 7}; // Example coins array
    cout << maxCoins(coins) << endl;   // Output the result
    return 0;
}
