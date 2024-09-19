/* Finding the Largest and Smallest Numbers in an Array
Difficulty: Easy
Topics: Basic Programming, Arrays
Description: Write a program to find the largest and smallest numbers in an array.
Example:
Input: array = [4, 7, 1, 8, 5]
Output: Largest: 8, Smallest: 1
Explanation: The largest number in the array is 8 and the smallest is 1. */

// link:  https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1

/* 
   Time: O(n)
   Space: O(1)
 */

class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        long long mini=INT_MAX;
        long long maxi=INT_MIN;
        for(long long i=0;i<arr.size();i++){
            mini=min(mini,arr[i]);
            maxi=max(maxi,arr[i]);
        }
        return {mini,maxi};
    }
};

