/* Counting Vowels and Consonants in a String
Difficulty: Easy
Topics: Basic Programming, String Manipulation
Description: Write a program to count vowels and consonants in a given string.
Example:
Input: string = "hello world"
Output: Vowels: 3, Consonants: 7
Explanation: "hello world" contains 3 vowels (e, o, o) and 7 consonants (h, l, l, w, r, l, d). */

// link: https://www.naukri.com/code360/problems/count-vowels-consonants-and-spaces_5026361?leftPanelTabValue=PROBLEM

vector<int> countVowelsConsonantsSpaces(string &s, int n) {
    int countSpaces=0;
    int countVowels=0;
    int countCons=0;
    for(int i=0;i<n;i++){
        if(s[i]==' ')
         countSpaces++;
        else if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
         countVowels++;
        else
         countCons++;
    }
    return {countVowels,countCons,countSpaces};
}