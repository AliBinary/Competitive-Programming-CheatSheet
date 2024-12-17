#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isMatch(const string &s, const string &p)
{
    int m = s.size(), n = p.size();

    // DP table dp[i][j] will be true if s[0...i-1] matches p[0...j-1]
    vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));

    // Base case: empty string matches empty pattern
    dp[0][0] = true;

    // Handle patterns like "a*" or ".*" where "*" can match 0 occurrence
    for (int j = 1; j <= n; j++)
    {
        if (p[j - 1] == '*')
        {
            dp[0][j] = dp[0][j - 2];
        }
    }

    // Fill the dp table
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (p[j - 1] == s[i - 1] || p[j - 1] == '.')
            {
                dp[i][j] = dp[i - 1][j - 1]; // Character matches
            }
            else if (p[j - 1] == '*')
            {
                // '*' matches zero occurrence or one/more occurrences of the preceding character
                dp[i][j] = dp[i][j - 2] || (dp[i - 1][j] && (s[i - 1] == p[j - 2] || p[j - 2] == '.'));
            }
        }
    }

    return dp[m][n]; // Final answer whether the whole string matches the pattern
}

int main()
{
    string s = "aab";
    string p = "c*a*b";

    if (isMatch(s, p))
    {
        cout << "The string matches the pattern." << endl;
    }
    else
    {
        cout << "The string does not match the pattern." << endl;
    }

    return 0;
}
