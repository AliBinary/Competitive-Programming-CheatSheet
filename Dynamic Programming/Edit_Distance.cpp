#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to compute the Edit Distance
int editDistance(string str1, string str2, int m, int n)
{
    vector<vector<int>> dp(m + 1, vector<int>(n + 1));

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0)
                dp[i][j] = j;
            else if (j == 0)
                dp[i][j] = i;
            else if (str1[i - 1] == str2[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = 1 + min({dp[i - 1][j - 1], dp[i][j - 1], dp[i - 1][j]});
        }
    }
    return dp[m][n];
}

int main()
{
    string str1 = "sitting", str2 = "kitten";
    int m = str1.length(), n = str2.length();

    cout << "Edit Distance: " << editDistance(str1, str2, m, n) << endl;
    return 0;
}
