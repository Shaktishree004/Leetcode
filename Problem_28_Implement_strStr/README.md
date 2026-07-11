# 28. Implement strStr

## Problem Statement
Implement `strStr()`.

Given two strings `haystack` and `needle`, return the index of the first occurrence of `needle` in `haystack`, or `-1` if `needle` is not part of `haystack`.

### Example
- Input: `haystack = "hello"`, `needle = "ll"`
- Output: `2`

## Approach
We use a sliding window approach.

If `needle` is empty, we return `0` immediately.
Otherwise, we compare substrings of `haystack` of length `len(needle)` to `needle` and return the first match.

## Why this works
Every possible starting index is checked once, and the comparison stops as soon as it becomes clear that the current substring cannot match. This ensures that the first valid occurrence is found correctly.

## Complexity Analysis
- Time: `O(n * m)` in the simple version
- Space: `O(1)`

## Reference Solutions
- Python: [solution.py](solution.py)
- Java: [Solution.java](Solution.java)
- C++: [solution.cpp](solution.cpp)
