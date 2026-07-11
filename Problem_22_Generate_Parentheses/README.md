# 22. Generate Parentheses

## Problem Statement
Given `n` pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

### Example
- Input: `n = 3`
- Output: `["((()))","(()())","(())()","()(())","()()()"]`

## Approach
We use backtracking.

At each step, we can add:
- an opening parenthesis if we still have one available,
- a closing parenthesis if it will not make the sequence invalid.

We keep track of:
- `open_count`: how many opening parentheses are currently used,
- `close_count`: how many closing parentheses are currently used.

The recursion builds valid combinations by only adding characters that preserve correctness.

## Why this works
A valid parentheses string must never have more closing brackets than opening brackets, and must end with equal counts. The backtracking process explores exactly the valid states and prunes invalid ones early.

## Complexity Analysis
- Time: `O(4^n / n^(3/2))`
- Space: `O(n)` for recursion depth

## Reference Solutions
- Python: [solution.py](solution.py)
- Java: [Solution.java](Solution.java)
- C++: [solution.cpp](solution.cpp)
