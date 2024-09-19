/* Checking for Armstrong Numbers in a Range
Difficulty: Easy
Topics: Basic Programming, Number Theory
Description: Write a program to find all Armstrong numbers within a given range.
Example:
Input: range = [1, 500]
Output: [1, 153, 370, 371, 407]
Explanation: Armstrong numbers between 1 and 500 are 1, 153, 370, 371, and 407. */

// link:  https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card


class Solution {
  public:
bool isArmstrong(int num){
    int temp=num;
    int sum=0;
    while(num){
    int x=num%10;
    sum+=x*x*x;
    num/=10;
    }
    return temp==sum;
}

vector<int> findArmstrongNumbersBetweenGivenRange(int a,int b){
    vector<int> result;
    for(int i=a;i<=b;i++){
        if(isArmstrong(i))
        result.push_back(i);
    }
    return result;
}
};