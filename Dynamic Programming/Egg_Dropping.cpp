#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find the minimum number of attempts needed
int eggDrop(int eggs, int floors)
{
    vector<vector<int>> dp(eggs + 1, vector<int>(floors + 1, 0));

    for (int i = 1; i <= eggs; i++)
        dp[i][0] = 0;
    for (int j = 0; j <= floors; j++)
        dp[1][j] = j;

    for (int i = 2; i <= eggs; i++)
    {
        for (int j = 2; j <= floors; j++)
        {
            dp[i][j] = INT_MAX;
            for (int x = 1; x <= j; x++)
            {
                dp[i][j] = min(dp[i][j], 1 + max(dp[i - 1][x - 1], dp[i][j - x]));
            }
        }
    }
    return dp[eggs][floors];
}

int main()
{
    int eggs = 2, floors = 10;
    cout << "Minimum attempts: " << eggDrop(eggs, floors) << endl;
    return 0;
}
