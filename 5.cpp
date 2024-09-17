/* Generating the Fibonacci Series
Difficulty: Easy
Topics: Basic Programming, Sequences
Description: Write a program to generate the Fibonacci series up to a given number.
Example:
Input: limit = 10
Output: [0, 1, 1, 2, 3, 5, 8]
Explanation: The Fibonacci series up to 10 is generated as [0, 1, 1, 2, 3, 5, 8]. */

// link:https://www.geeksforgeeks.org/problems/nth-fibonacci-number1335/0

class Solution
{
public:
    long long dp[100001];
    long long findFib(int n)
    {
        if (n <= 1)
            return n;

        if (dp[n] != -1)
            return dp[n];

        return dp[n] = (findFib(n - 1) + findFib(n - 2)) % 1000000007;
    }
    int nthFibonacci(int n)
    {
        memset(dp, -1, sizeof(dp));
        return findFib(n);
    }
};