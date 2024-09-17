/* Validating Leap Years
Difficulty: Easy
Topics: Basic Programming, Date Handling
Description: Write a program to check if a given year is a leap year.
Example:
Input: year = 2020
Output: Leap Year
Explanation: 2020 is divisible by 4 but not by 100, or it is divisible by 400, so it is a leap year.
 */

// link: https://www.geeksforgeeks.org/problems/leap-year0943/1

class Solution
{
public:
    int isLeap(int N)
    {

        if (N % 400 == 0)
            return true;

        if (N % 100 == 0)
            return false;

        return (N % 4 == 0) ? true : false;
    }
};