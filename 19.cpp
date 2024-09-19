/* [200~Finding Prime Numbers in a Range
Difficulty: Easy
Topics: Basic Programming, Number Theory
Description: Write a program to find all prime numbers within a given range.
Example:
Input: range = [10, 30]
Output: [11, 13, 17, 19, 23, 29]
Explanation: Prime numbers between 10 and 30 are 11, 13, 17, 19, 23, and 29.
 */


// link: https://www.geeksforgeeks.org/problems/find-prime-numbers-in-a-range4718/1


class Solution {
  public:
    vector<int> primeRange(int M, int N) {
        vector<int> result;
        if(M==1)
        M++;
        for(int i=M;i<=N;i++){
         bool flag=false;
         for(int j=2;j<=sqrt(i);j++){
             if(i%j==0){
             flag=true;         
             break;
             }
         }
         if(!flag)
         result.push_back(i);
        }
        return result;
    }
};