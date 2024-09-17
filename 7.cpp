/* Crafting Star Patterns
Difficulty: Easy
Topics: Basic Programming, Patterns
Description: Write a program to create different star patterns (e.g., pyramid, diamond).
Example:
Input: patternType = "pyramid", height = 5
Output:

    *
   ***
  *****
 *******
*********
 */


// link:  https://www.geeksforgeeks.org/problems/triangle-pattern-1661492263/0

    void printTriangle(int n) {
     for(int i=0;i<n;i++){
         for(int j=0;j<2*n-1;j++){
             if(j>=n-i-1 && j<=n+i-1)
             cout<<"*";
             else
             cout<<" ";
         }
         cout<<endl;
     }
    }
