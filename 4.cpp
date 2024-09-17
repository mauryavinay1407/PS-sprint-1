/* Calculating Armstrong Numbers
Difficulty: Easy
Topics: Basic Programming, Number Theory
Description: Write a program to check if a number is an Armstrong number.
Example:
Input: number = 153
Output: Armstrong Number
Explanation: 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153. */


// link:  https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1

class Solution
{
public:
    string armstrongNumber(int n)
    {
        int temp = n;
        int sum = 0;
        while (temp)
        {
            int x = temp % 10;
            sum += x * x * x;
            temp /= 10;
        }
        return (sum == n) ? "true" : "false";
    }
};