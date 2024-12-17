// Fibonacci sequence using dynamic programming (Memoization)
#include <iostream>
#include <vector>
using namespace std;

// Function to compute Fibonacci number
int fib(int n, vector<int> &dp)
{
    // Base cases
    if (n <= 1)
        return n;

    // If the value is already computed, return it
    if (dp[n] != -1)
        return dp[n];

    // Store the computed value in dp array
    dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
    return dp[n];
}

int main()
{
    int n = 10;
    vector<int> dp(n + 1, -1); // Initialize dp array with -1

    cout << "Fibonacci of " << n << " is " << fib(n, dp) << endl;
    return 0;
}
