/*
LeetCode: Ransom Note
Problem: https://leetcode.com/problems/ransom-note/

Approach:
- Use a fixed-size array of length 26 to count character frequencies.
- Count characters in the magazine.
- Decrease counts while iterating ransomNote.
- If any count goes below zero, construction is impossible.

Time Complexity: O(n + m)
Space Complexity: O(1)
*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count[26] = {0}; // create a array to count letters(index 0 for 'a' and likewise)

        for (char c: magazine) {
            count[c - 'a']++; /* count the numbers. if c='a', c -'a'= 0
                                                    if c='z', c -'z'= 26 */             
        }

        for (char c: ransomNote) {
            /*check the count of any number goes down below 0, then return false*/
            if (--count[c - 'a'] < 0) {
                return false;
            }
        }
        return true; // if the count of all letters are greater than or equl to 0 then, return true.
    }
};