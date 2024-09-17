/* Identifying Palindromes
Difficulty: Easy
Topics: Basic Programming, String Manipulation
Description: Write a program to check if a string or number is a palindrome.
Example:
Input: string = "radar"
Output: Palindrome
Explanation: "radar" reads the same backward as forward. */

// link:  https://www.geeksforgeeks.org/problems/palindrome0746/1

class Solution
{
public:
    string is_palindrome(int n)
    {
        string str = to_string(n);
        int i = 0;
        int j = str.length() - 1;
        while (i <= j)
        {
            if (str[i] != str[j])
            {
                return "No";
            }
            i++;
            j--;
        }
        return "Yes";
    }
};