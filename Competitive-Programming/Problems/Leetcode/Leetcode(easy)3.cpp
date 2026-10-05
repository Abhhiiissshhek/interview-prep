// [**1374. Generate a String With Characters That Have Odd Counts**](https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/)

// Easy

// Topics

// [premium lock icon](https://leetcode.com/_next/static/images/lock-a6627e2c7fa0ce8bc117c109fb4e567d.svg)Companies

// Hint

// Given an integer `n`, *return a string with `n` characters such that each character in such string occurs **an odd number of times***.

// The returned string must contain only lowercase English letters. If there are multiples valid strings, return **any** of them.  

// **Example 1:**

// ```
// Input: n = 4
// Output: "pppz"
// Explanation: "pppz" is a valid string since the character 'p' occurs three times and the character 'z' occurs once. Note that there are many other valid strings such as "ohhh" and "love".

// ```

// **Example 2:**

// ```
// Input: n = 2
// Output: "xy"
// Explanation: "xy" is a valid string since the characters 'x' and 'y' occur once. Note that there are many other valid strings such as "ag" and "ur".

// ```

// **Example 3:**

// ```
// Input: n = 7
// Output: "holasss"

// ```

// **Constraints:**

// - `1 <= n <= 500`(class Solution { 
//   public: 
//       string generateTheString(int n) { 
           
//       } 
//   };) leetcode style 



class Solution {
public:
    string generateTheString(int n) {
        string ans;

        if (n % 2 == 1) {
            ans = string(n, 'a');
        } else {
            ans = string(n - 1, 'a');
            ans += 'b';
        }

        return ans;
    }
};