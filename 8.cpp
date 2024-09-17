/* Finding the Factorial of a Number
Difficulty: Easy
Topics: Basic Programming, Mathematical Computations
Description: Write a program to compute the factorial of a given number.
Example:
Input: number = 5
Output: 120
Explanation: 5! (factorial) is 5 × 4 × 3 × 2 × 1 = 120. */

// link:  https://www.geeksforgeeks.org/problems/factorial5739/1

class Solution
{
public:
    long long int factorial(int N)
    {
        long long ans = 1;
        for (int i = N; i > 1; i--)
            ans *= i;

        return ans;
    }
};