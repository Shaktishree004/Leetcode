# 10. Regular Expression Matching

## Problem Statement
Given an input string `s` and a pattern `p`, implement regular expression matching with support for `.` and `*`.

- `.` matches any single character.
- `*` matches zero or more of the preceding element.

The matching should cover the entire input string (not just a substring).

### Example
- Input: `s = "aa"`, `p = "a*"`
- Output: `true`

## Approach
We use dynamic programming to build the answer from the end of the strings.

Let `dp[i][j]` mean whether the first `i` characters of `s` match the first `j` characters of `p`.
We fill the table from left to right:

1. If `p[j - 1]` is a normal character, then `dp[i][j]` is true only if the current characters match and the previous prefix matched.
2. If `p[j - 1]` is `.` , it matches any single character.
3. If `p[j - 1]` is `*`, it represents zero or more repetitions of the previous pattern character.

## Why this works
The dynamic programming state captures exactly the information we need: whether the prefixes up to the current positions are compatible. By considering the effect of `*` carefully, we handle both zero repetitions and repeated matches without missing any case.

## Complexity Analysis
- Time: `O(n * m)`
- Space: `O(n * m)`

## Reference Solutions
- Python: [solution.py](solution.py)
- Java: [Solution.java](Solution.java)
- C++: [solution.cpp](solution.cpp)
