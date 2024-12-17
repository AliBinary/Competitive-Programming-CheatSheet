#include <iostream>
#include <vector>
using namespace std;

// Function to compute the length of the Longest Common Subsequence
int lcs(string X, string Y, int m, int n)
{
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0)); // DP table

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (X[i - 1] == Y[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[m][n];
}

int main()
{
    string X = "AGGTAB", Y = "GXTXAYB";
    int m = X.length(), n = Y.length();

    cout << "Length of Longest Common Subsequence: " << lcs(X, Y, m, n) << endl;
    return 0;
}
