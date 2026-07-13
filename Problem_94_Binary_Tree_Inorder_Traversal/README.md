# 94. Binary Tree Inorder Traversal

## Problem Statement
Given the root of a binary tree, return the inorder traversal of its nodes' values.

### Example
- Input: `root = [1,null,2,3]`
- Output: `[1,3,2]`

## Approach
We use a stack-based iterative traversal.

Starting from the root, we move to the leftmost node while pushing nodes onto a stack. When we reach the end, we pop a node, record its value, and move to its right child.

## Why this works
Inorder traversal visits the left subtree, then the node, then the right subtree. The stack keeps track of the path so we can return to each node at the correct time.

## Complexity Analysis
- Time: `O(n)`
- Space: `O(h)` where `h` is the tree height

## Reference Solutions
- Python: [solution.py](solution.py)
- Java: [Solution.java](Solution.java)
- C++: [solution.cpp](solution.cpp)
