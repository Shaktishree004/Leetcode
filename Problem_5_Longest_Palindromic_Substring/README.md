# 5. Longest Palindromic Substring

## Problem Statement
Given a string `s`, return the longest palindromic substring in `s`.

A palindrome is a string that reads the same forward and backward.

Example:
- Input: `s = "babad"`
- Output: `"bab"`
- Explanation: `"aba"` is also a valid answer.

## Approach
We use the center expansion technique.
Every palindrome has a center, and expanding around that center can find the longest palindrome.
There are two possible centers for each position: a single character center and a pair of characters center.

## Why this works
For every possible center, we expand outward while the characters match. This explores all palindromic substrings centered at that position, so the maximum length found is guaranteed to be the answer.

## Complexity Analysis
- Time: `O(n^2)`
- Space: `O(1)`

## Solution Code
- Python: [solution.py](solution.py)
- Java: [Solution.java](Solution.java)
- C++: [solution.cpp](solution.cpp)
