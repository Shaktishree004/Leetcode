# Problem 242: Valid Anagram

## Problem Statement

Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise.

An anagram is a word or phrase formed by rearranging the letters of another, using all the original letters exactly once.

### Example

Input:
- `s = "anagram"`
- `t = "nagaram"`

Output:
- `true`

## Approach

Use character counting.

- Count the frequency of each character in `s`.
- Decrease the count for each character in `t`.
- If all counts return to zero and no character is invalid, `t` is an anagram.

## Why This Works

Anagrams have identical character frequencies. By comparing the counts for both strings, we can determine whether one string is a permutation of the other.

## Complexity Analysis

- Time Complexity: $O(n)$
- Space Complexity: $O(1)$ for fixed alphabet size

## Reference Solutions

- [Python](solution.py)
- [Java](Solution.java)
- [C++](solution.cpp)
