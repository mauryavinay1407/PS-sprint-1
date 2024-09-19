/* 200~Generating Multiplication Tables
Difficulty: Easy
Topics: Basic Programming, Mathematical Computations
Description: Write a program to generate multiplication tables for a given number.
Example:
Input: number = 4
Output:

4 x 1 = 4  
4 x 2 = 8  
4 x 3 = 12  
4 x 4 = 16  
4 x 5 = 20 */ 

// link: https://www.geeksforgeeks.org/problems/print-table0303/1


class Solution
{
public:
    vector<int> getTable(int N)
    {
       vector<int> table;
       for(int i=1;i<=10;i++)
       table.push_back(i*N);
       
       return table;
    }
};
