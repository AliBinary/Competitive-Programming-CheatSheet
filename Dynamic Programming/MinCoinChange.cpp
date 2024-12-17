#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// Function to find the minimum number of coins required to make a total
int minCoins(const vector<int> &coins, int total)
{
    int n = coins.size();
    vector<int> dp(total + 1, INT_MAX); // Initialize DP array with infinity
    dp[0] = 0;                          // Base case: 0 coins needed to make total 0

    // Fill DP array
    for (int i = 0; i < n; i++)
    {
        for (int j = coins[i]; j <= total; j++)
        {
            if (dp[j - coins[i]] != INT_MAX)
            {
                dp[j] = min(dp[j], dp[j - coins[i]] + 1); // Minimize coin count
            }
        }
    }

    return dp[total] == INT_MAX ? -1 : dp[total]; // Return -1 if not possible
}

int main()
{
    vector<int> coins = {1, 2, 5};          // Example denominations
    int total = 11;                         // Target total
    cout << minCoins(coins, total) << endl; // Output the result
    return 0;
}
