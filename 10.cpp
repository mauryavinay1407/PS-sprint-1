/* Finding the Greatest Common Divisor (GCD)
Difficulty: Easy
Topics: Basic Programming, Number Theory
Description: Write a program to find the GCD of two numbers.
Example:
Input: a = 48, b = 18
Output: 6
Explanation: The GCD of 48 and 18 is 6. */

// link :  https://www.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1

class Solution
{
public:
    int gcd(int a, int b)
    {
        if (a == 1 || b == 1)
            return 1;
        int smaller = (a > b) ? b : a;

        int GCD = 1;
        int x = 2;
        while (x <= smaller)
        {
            if (a % x == 0 && b % x == 0)
                GCD = x;
            x++;
        }
        return GCD;
    }
};

// Simple approach
class Solution
{
public:
    int gcd(int a, int b)
    {
        if (!b)
            return a;
        gcd(b, a % b);
    }
};