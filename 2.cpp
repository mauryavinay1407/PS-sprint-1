/* Checking for Prime Numbers
Difficulty: Easy
Topics: Basic Programming, Number Theory
Description: Write a program to determine if a number is prime.
Example:
Input: number = 7
Output: Prime
Explanation: 7 has no divisors other than 1 and itself, so it is a prime number. */

// link: https://www.geeksforgeeks.org/problems/prime-number2314/1


class Solution
{
public:
    int isPrime(int N)
    {
        if (N == 1)
            return 0;
        for (int i = 2; i <= sqrt(N); i++)
        {
            if (N % i == 0)
                return 0;
        }
        return 1;
    }
};