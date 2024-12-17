#include <iostream>
#include <vector>
using namespace std;

// Function to compute the maximum profit from cutting a rod
int rodCutting(vector<int> &prices, int n)
{
    vector<int> dp(n + 1, 0); // DP array

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            dp[i] = max(dp[i], prices[j - 1] + dp[i - j]);
        }
    }
    return dp[n];
}

int main()
{
    vector<int> prices = {1, 5, 8, 9, 10, 17, 17, 20};
    int n = prices.size();

    cout << "Maximum profit from rod cutting: " << rodCutting(prices, n) << endl;
    return 0;
}
