class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
       return(num+2*t); 
    }
};
/*Input: num = 4, t = 1
Output: 6
Explanation: The maximum achievable number is x = 6; it can become equal to num after performing this operation:
1- Decrease x by 1, and increase num by 1. Now, x = 5 and num = 5. 
It can be proven that there is no achievable number larger than 6.
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
            sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};
/*
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
Example 2:

Input: s = "rat", t = "car"
*/