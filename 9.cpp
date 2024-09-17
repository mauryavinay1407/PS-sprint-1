/* Summing Digits of a Number
Difficulty: Easy
Topics: Basic Programming, Mathematical Computations
Description: Write a program to calculate the sum of digits of a number.
Example:
Input: number = 1234
Output: 10
Explanation: The sum of the digits 1 + 2 + 3 + 4 = 10. */

// link:  https://www.geeksforgeeks.org/problems/sum-of-digits1742/1

class Solution
{
public:
    int sumOfDigits(int N)
    {
        int sum = 0;
        while (N)
        {
            sum += N % 10;
            N /= 10;
        }
        return sum;
    }
};