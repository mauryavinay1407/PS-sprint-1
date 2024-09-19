/* Checking for Perfect Numbers
Difficulty: Easy
Topics: Basic Programming, Number Theory
Description: Write a program to determine if a number is a perfect number.
Example:
Input: number = 28
Output: Perfect Number
Explanation: 28 is a perfect number because its divisors (1, 2, 4, 7, 14) sum up to 28. */

// link:  https://www.geeksforgeeks.org/problems/perfect-numbers3207/1

/*
Time: O(n)
Space: O(1)
TLE
*/

class Solution {
  public:
    int isPerfect(int N) {
      int sum=0;
      for(int i=1;i<N;i++){
         if(N%i==0)
         sum+=i;
      }
      return sum==N;
    }
};

/*
Time: O(sqrt(n))
Space: O(1)
*/

class Solution {
  public:
    int isPerfectNumber(long long N) {
    if (N <= 1) 
    return 0; 
    long long sum = 1; 
    
    for(long long i = 2;i * i <= N;i++) {
        if(N % i == 0) {
            sum += i;
            if(i != N / i)
                sum += N / i;
        }
    }
    
    return sum == N;
    }
};