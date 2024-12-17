#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// Function to check if a word can be segmented into words from a dictionary
bool wordBreak(string s, unordered_set<string> &wordDict)
{
    int n = s.length();
    vector<bool> dp(n + 1, false);
    dp[0] = true;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (dp[j] && wordDict.find(s.substr(j, i - j)) != wordDict.end())
            {
                dp[i] = true;
                break;
            }
        }
    }
    return dp[n];
}

int main()
{
    string s = "leetcode";
    unordered_set<string> wordDict = {"leet", "code"};
    cout << "Can break: " << (wordBreak(s, wordDict) ? "Yes" : "No") << endl;
    return 0;
}
