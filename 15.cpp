/* Sorting an Array
Difficulty: Easy
Topics: Basic Programming, Sorting Algorithms
Description: Write a program to sort an array of numbers in ascending order.
Example:
Input: array = [3, 1, 4, 1, 5, 9]
Output: [1, 1, 3, 4, 5, 9]
Explanation: The array sorted in ascending order is [1, 1, 3, 4, 5, 9]. */

// link:  https://leetcode.com/problems/sort-an-array/

/*
Using for loop as it is simple sorting
It wil give TLE as because O(n^2)
 */

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]>nums[j])
                 swap(nums[i],nums[j]);
            }
        }
        return nums;
    }
};