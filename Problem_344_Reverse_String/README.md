# Problem 344: Reverse String

## Problem Statement

Write a function that reverses a string. The input is given as an array of characters `s`.

You must do this by modifying the input array in-place with `O(1)` extra memory.

### Example

Input:
- `s = ["h","e","l","l","o"]`

Output:
- `["o","l","l","e","h"]`

## Approach

Use two pointers that move inward from both ends of the array.

- Initialize `left` at the start and `right` at the end.
- Swap the characters at `left` and `right`.
- Move `left` forward and `right` backward.
- Continue until `left >= right`.

## Why This Works

Each swap moves the correct character into place from both ends. The string is reversed in-place, and no extra data structure is needed.

## Complexity Analysis

- Time Complexity: $O(n)$
- Space Complexity: $O(1)$

## Reference Solutions

- [Python](solution.py)
- [Java](Solution.java)
- [C++](solution.cpp)
