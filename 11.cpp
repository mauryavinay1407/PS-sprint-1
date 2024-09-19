/* Finding the Least Common Multiple (LCM)
Difficulty: Easy
Topics: Basic Programming, Number Theory
Description: Write a program to find the LCM of two numbers.
Example:
Input: a = 12, b = 15
Output: 60
Explanation: The LCM of 12 and 15 is 60. */

// link:  https://www.geeksforgeeks.org/problems/lcm-and-gcd4516/1

/* 
Time: O(log(min(a,b)))
Space: O(1)
*/


class Solution {
  public:
    long long gcd(int a,int b){
        if(!b)
        return a;
        return gcd(b,a%b);
    }
    vector<long long> lcmAndGcd(long long A , long long B) {
       return {(A*B)/gcd(A,B),gcd(A,B)};
    
    }
};