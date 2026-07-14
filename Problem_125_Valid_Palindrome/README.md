# Problem 125: Valid Palindrome

## Problem Statement

A phrase is a palindrome if, after converting all uppercase letters to lowercase and removing all non-alphanumeric characters, it reads the same forward and backward.

Given a string `s`, return `true` if it is a valid palindrome, otherwise return `false`.

### Example

Input:
- `s = "A man, a plan, a canal: Panama"`

Output:
- `true`

## Approach

Use two pointers.

- Start one pointer at the beginning and one at the end of the string.
- Skip non-alphanumeric characters.
- Compare the characters in lowercase form.
- Move the pointers inward until they meet.

If all compared characters match, the string is a palindrome.

## Why This Works

The two-pointer approach checks the string from both ends simultaneously. Since the palindrome condition only depends on matching characters after normalization, comparing mirrored positions ensures correctness.

## Complexity Analysis

- Time Complexity: $O(n)$
- Space Complexity: $O(1)$

## Reference Solutions

- [Python](solution.py)
- [Java](Solution.java)
- [C++](solution.cpp)
