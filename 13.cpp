/* Reversing a String
Difficulty: Easy
Topics: Basic Programming, String Manipulation
Description: Write a program to reverse a given string.
Example:
Input: string = "programming"
Output: "gnimmargorp"
Explanation: The reversed string of "programming" is "gnimmargorp". */

// link: https://www.geeksforgeeks.org/problems/reverse-a-string/1

class Solution
{
    public:
    string reverseWord(string str)
    {
      int left=0;
      int right=str.length()-1;
      while(left<=right){
          swap(str[left],str[right]);
          left++;
          right--;
      }
      return str;
    }
};