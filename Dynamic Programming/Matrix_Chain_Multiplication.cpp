#include <iostream>
#include <vector>
using namespace std;

// Function to compute the minimum number of scalar multiplications
int matrixChainMultiplication(vector<int> &dims, int n)
{
    vector<vector<int>> dp(n, vector<int>(n, 0)); // DP table

    for (int len = 2; len < n; len++)
    {
        for (int i = 1; i < n - len + 1; i++)
        {
            int j = i + len - 1;
            dp[i][j] = INT_MAX;
            for (int k = i; k < j; k++)
            {
                int q = dp[i][k] + dp[k + 1][j] + dims[i - 1] * dims[k] * dims[j];
                dp[i][j] = min(dp[i][j], q);
            }
        }
    }
    return dp[1][n - 1];
}

int main()
{
    vector<int> dims = {10, 20, 30, 40, 30};
    int n = dims.size();

    cout << "Minimum number of scalar multiplications: " << matrixChainMultiplication(dims, n) << endl;
    return 0;
}
