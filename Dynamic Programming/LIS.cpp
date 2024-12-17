#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to find the length of the Longest Increasing Subsequence
int lis(vector<int> &arr, int n)
{
    vector<int> dp(n, 1); // DP array, initialized to 1

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j])
                dp[i] = max(dp[i], dp[j] + 1);
        }
    }
    return *max_element(dp.begin(), dp.end());
}

int main()
{
    vector<int> arr = {10, 22, 9, 33, 21, 50, 41, 60};
    int n = arr.size();

    cout << "Length of Longest Increasing Subsequence: " << lis(arr, n) << endl;
    return 0;
}
