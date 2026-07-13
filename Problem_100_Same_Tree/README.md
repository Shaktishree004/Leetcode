# 100. Same Tree

## Problem Statement
Given the roots of two binary trees `p` and `q`, determine if they are the same tree.

Two trees are considered the same if they have the same structure and the same node values at each corresponding position.

### Example
- Input: `p = [1,2,3]`, `q = [1,2,3]`
- Output: `true`

## Approach
We use a recursive traversal.

At each step, we compare the current nodes. The trees are the same only if:
1. both nodes are `null`, or
2. both nodes exist and have the same value, and
3. their left and right subtrees are also the same.

## Why this works
This directly reflects the definition of structural equality. If every corresponding node and subtree matches, the trees are identical.

## Complexity Analysis
- Time: `O(n)`
- Space: `O(h)` where `h` is the tree height

## Reference Solutions
- Python: [solution.py](solution.py)
- Java: [Solution.java](Solution.java)
- C++: [solution.cpp](solution.cpp)
