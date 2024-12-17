#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// Function to calculate the minimum search cost for an optimal BST
int optimalBST(const vector<int> &freq)
{
    int n = freq.size();
    vector<vector<int>> dp(n, vector<int>(n, 0));

    // Fill the DP table for subarrays of increasing length
    for (int len = 1; len <= n; len++)
    { // len is the range length
        for (int i = 0; i <= n - len; i++)
        {
            int j = i + len - 1;
            dp[i][j] = INT_MAX;
            int sum = 0;
            // Calculate sum of frequencies from i to j
            for (int k = i; k <= j; k++)
            {
                sum += freq[k];
            }
            // Try each k as the root and calculate the minimum cost
            for (int k = i; k <= j; k++)
            {
                int cost = (k == i ? 0 : dp[i][k - 1]) + (k == j ? 0 : dp[k + 1][j]);
                dp[i][j] = min(dp[i][j], cost + sum);
            }
        }
    }
    return dp[0][n - 1]; // The minimum cost for the entire range
}

int main()
{
    vector<int> freq = {34, 8, 50, 13}; // Example frequencies of keys
    cout << optimalBST(freq) << endl;   // Output the minimum cost
    return 0;
}
