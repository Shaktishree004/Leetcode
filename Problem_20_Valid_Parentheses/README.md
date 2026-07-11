# 20. Valid Parentheses

## Problem Statement
Given a string `s` containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['`, and `']'`, determine if the input string is valid.

A string is valid if:
- open brackets are closed by the same type of brackets,
- open brackets are closed in the correct order,
- every closing bracket has a corresponding opening bracket.

### Example
- Input: `s = "()[]{}"`
- Output: `true`

## Approach
We use a stack.

1. Scan the string from left to right.
2. For each opening bracket, push it onto the stack.
3. For each closing bracket, check whether it matches the top of the stack.
4. If the stack is empty or the brackets do not match, the string is invalid.
5. At the end, the string is valid only if the stack is empty.

## Why this works
A valid bracket sequence must close in the reverse order in which it opened. A stack naturally supports this behavior because the most recent unmatched opening bracket is the one that must be closed next.

## Complexity Analysis
- Time: `O(n)`
- Space: `O(n)`

## Reference Solutions
- Python: [solution.py](solution.py)
- Java: [Solution.java](Solution.java)
- C++: [solution.cpp](solution.cpp)
