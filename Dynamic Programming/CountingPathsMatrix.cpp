#include <iostream>
#include <vector>

using namespace std;

// Function to count the number of unique paths in a matrix
int countPaths(int n, int m)
{
    vector<vector<int>> dp(n, vector<int>(m, 0));

    // Starting point: only one way to be at the start
    dp[0][0] = 1;

    // Fill the DP table for first row and first column
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i > 0)
                dp[i][j] += dp[i - 1][j]; // From top
            if (j > 0)
                dp[i][j] += dp[i][j - 1]; // From left
        }
    }

    return dp[n - 1][m - 1]; // Return the number of paths to bottom-right corner
}

int main()
{
    int n = 3, m = 3;                 // Example matrix dimensions
    cout << countPaths(n, m) << endl; // Output the result
    return 0;
}
