#include <iostream>
#include <vector>
using namespace std;

// Function to determine if a given set can be partitioned into two subsets
bool canPartition(vector<int> &nums)
{
    int sum = 0;
    for (int num : nums)
        sum += num;

    if (sum % 2 != 0)
        return false;

    int target = sum / 2;
    vector<bool> dp(target + 1, false);
    dp[0] = true;

    for (int num : nums)
    {
        for (int j = target; j >= num; j--)
        {
            dp[j] = dp[j] || dp[j - num];
        }
    }
    return dp[target];
}

int main()
{
    vector<int> nums = {1, 5, 11, 5};
    cout << "Can partition: " << (canPartition(nums) ? "Yes" : "No") << endl;
    return 0;
}
