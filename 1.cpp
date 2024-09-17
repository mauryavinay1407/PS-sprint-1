/* Determining Even/Odd Numbers
Difficulty: Easy
Topics: Basic Programming
Description: Write a program to check whether a number is even or odd.
Example:
Input: number = 4
Output: Even
Explanation: Since 4 is divisible by 2, it is an even number. */

// link:  https://www.geeksforgeeks.org/problems/odd-or-even3618/1


class Solution {
  public:
    string oddEven(int n) {
    return n%2==0 ? "even" : "odd";
    }
};