/* Finding the Sum of Elements in an Array
Difficulty: Easy
Topics: Basic Programming, Arrays
Description: Write a program to find the sum of elements in an array.
Example:
Input: array = [1, 2, 3, 4, 5]
Output: 15
Explanation: The sum of the elements in the array is 15. */

// link:  https://www.geeksforgeeks.org/problems/sum-of-array2326/1

class Solution {
  public:
    int sum(vector<int>& arr) {
      int addition=0;
      for(int i=0;i<arr.size();i++)
      addition+=arr[i];
      
      return addition;
    }
};
